// This fragment shader creates an outline effect around highlighted structures
// by sampling neighboring pixels in the hilight alpha texture.
// It produces fixed 2-pixel width outline for HLR renderings.

// Input: hilightColorTexture - Alpha texture with highlighted structures
//        hilightDepthTexture - Depth texture corresponding to the highlighted structures
//        canvasSize - Size of the input textures in pixels
//        outlineColor - Color of the outline

in vec2 textureCoord;

uniform sampler2D hilightColorTexture;
uniform sampler2D hilightDepthTexture;
uniform vec2 canvasSize;
uniform vec4 outlineColor; 

void main()
{
    // Size of a fragment in texture coordinates  
    vec2 texelSize = 1.0 / canvasSize;
        
    // Coordinate for depth test lookup
    vec2 depthTestCoord;

    // Value of maximum alpha found
    float alpha = 0.0;

    // loop over all pixels within +/-outline size
    for (int y = -1; y <= 1; y++) 
    {  
        for (int x = -1; x <= 1; x++) 
        {  
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
    
    // If no strong neighbor found, skip pixel
    if(alpha < 0.2)
    {
        discard;
    }

    // Compute final color and depth for outline
    occFragColor = vec4(outlineColor.rgb, alpha);
    float depth = texture(hilightDepthTexture, depthTestCoord).r;  
	if (depth < 1.0)
	{
        gl_FragDepth = depth - 0.002;  
	}
}
