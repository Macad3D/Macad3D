// This vertex shader fills three vertices with coordinates to 
// define a triangle which fills the entire screen.
// Also it computes an interpolated UV in [0,1] from the vertex X/Y

out vec2 textureCoord;

void main()
{
    vec2 vertices[3]=vec2[3](vec2(-1,-1), vec2(3,-1), vec2(-1, 3));
    gl_Position = vec4(vertices[gl_VertexID],0,1);
    textureCoord = 0.5 * gl_Position.xy + vec2(0.5);
}
 
