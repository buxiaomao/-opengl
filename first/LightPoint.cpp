#include "LightPoint.h"

LightPoint::LightPoint(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color): LightDirectional(_position, _angles, _color)
{
}

LightPoint::~LightPoint()
{
}
