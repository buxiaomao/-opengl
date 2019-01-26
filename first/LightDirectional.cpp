#include "LightDirectional.h"


LightDirectional::LightDirectional(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color):
	position(_position),
	angles(_angles),
	color(_color)
{
	UpdateLightDir();
}

LightDirectional::~LightDirectional()
{
}

void LightDirectional::UpdateLightDir()
{
	lightDir = glm::vec3(0, 0, 1.0f);
	lightDir = glm::rotateZ(lightDir, angles.z);
	lightDir = glm::rotateX(lightDir, angles.x);
	lightDir = glm::rotateY(lightDir, angles.y);
	lightDir = -1.0f * lightDir;
}
