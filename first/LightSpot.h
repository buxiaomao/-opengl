#pragma once

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtx/rotate_vector.hpp>

#include "LightPoint.h"

class LightSpot : public LightPoint
{
public:
	LightSpot(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color = glm::vec3(1.0f, 1.0f, 1.0f));
	~LightSpot();
	float CosPhyInner = 0.95f;
	float CosPhyOutter = 0.9f;
};

