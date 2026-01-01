// Vertex shader: maps provided occVertex (clip-space positions) directly to gl_Position
// and computes an interpolated UV in [0,1] from the vertex X/Y
out vec2 textureCoord;

void main()
{
    // occVertex is provided by the OCC shader interface and contains clip-space coords.
    //gl_Position = vec4(occVertex.x, occVertex.y, 0.0, 1.0);

    // Map clip-space (-1..1) to UV (0..1)
    //vUV = occVertex.xy * 0.5 + 0.5;

    vec2 vertices[3]=vec2[3](vec2(-1,-1), vec2(3,-1), vec2(-1, 3));
    gl_Position = vec4(vertices[gl_VertexID],0,1);
    textureCoord = 0.5 * gl_Position.xy + vec2(0.5);
}
 
