#version 330

in vec2 position;
in vec3 color;


void main()
{
gl_Position = vec4(position, 0.0, 1.0);
}
