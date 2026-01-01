// This fragment shader creates an outline effect around highlighted structures
// by sampling neighboring pixels in the hilight alpha texture.

// Input: hilightColorTexture - Alpha texture with highlighted structures
//        hilightDepthTexture - Depth texture corresponding to the highlighted structures
//        canvasSize - Size of the input textures in pixels
//        outlineSize - Width of the outline effect in pixels
//        outlineColor - Color of the outline
//        roughCheckParams - Fetch parameters for rough check (x: mip width, y: mip height, z: mip level)

in vec2 textureCoord;

uniform sampler2D hilightColorTexture;
uniform sampler2D hilightDepthTexture;
uniform vec2 canvasSize;
uniform float outlineSize;  
uniform vec4 outlineColor; 
uniform ivec3 roughCheckParams;

void performRoughCheck()
{
    // Early check against mip of alpha buffer, to sort out rough blocks
    ivec2 texel = ivec2(textureCoord * roughCheckParams.xy);
    float lodAlpha;
	for (int y = -1; y <= 1; y++) 
	{  
		for (int x = -1; x <= 1; x++) 
		{  
			lodAlpha += texelFetch(hilightColorTexture, texel + ivec2(x,y), roughCheckParams.z).a;
		}
	}
    // Sort out fully empty or fully filled blocks
    if(lodAlpha == 0.0 || lodAlpha == 9.0)
        discard;
}

void main()
{
  	performRoughCheck();

    // Size of a fragment in texture coordinates  
    vec2 texelSize = 1.0 / canvasSize;

    // Coordinate for depth test lookup
    vec2 depthTestCoord;

    // Value of maximum alpha found, begin with current pixel
    float alpha = texture(hilightColorTexture, textureCoord).a;

    // Inside structure?
    if(alpha > 0.0) 
    {
		if(alpha > 0.75)
		{
			discard; // Completely inside, skip pixel
		}
		// Border of the structure, anti-alias fragment
        alpha = 1.0 - alpha;
        depthTestCoord = textureCoord;
    }
    else
    {
		// Outside structure, search neighbors
        int outInt = int(ceil(outlineSize));  
        float outlineRadius = outlineSize * outlineSize;  
        // loop over all pixels within +/-outline size  
        for (int y = -outInt; y <= outInt; y++) 
        {  
            for (int x = -outInt; x <= outInt; x++) 
            {  
                // Skip pixels outside the radius  
                float dist = float(x * x + y * y);
                if(dist > outlineRadius) 
                {
                    continue; 
                }

                vec2 offset = textureCoord + vec2(x, y) * texelSize;  
                float neighborAlpha = texture(hilightColorTexture, offset).a;
                if(neighborAlpha > alpha)
                {
                    // Found a stronger neighbor, use its alpha and keep coordinate for depth test
                    alpha = neighborAlpha;
                    depthTestCoord = offset;
                }
            }  
        }  
    }

    // If no strong neighbor found, skip pixel
    if(alpha < 0.2)
    {
        discard;
    }

    // Compute final color for outline
    occFragColor = vec4(outlineColor.rgb, alpha);
    
    // Dithering the depth to slightly see through the outline in overlapping areas
    // Only do this if there is a valid depth value
    float depth = texture(hilightDepthTexture, depthTestCoord).r;  
	if (depth < 1.0)
	{
		ivec2 p = ivec2(gl_FragCoord.xy) & 1;
		gl_FragDepth = step(float(p.x + p.y), 1.0) * depth;
	}
}