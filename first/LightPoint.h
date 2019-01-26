#pragma once

#include <glm.hpp>
#include <gtc/matrix_transform.hpp>
#include <gtx/rotate_vector.hpp>

#include "LightDirectional.h"

class LightPoint: public LightDirectional
{
public:
	LightPoint(glm::vec3 _position, glm::vec3 _angles, glm::vec3 _color = glm::vec3(1.0f, 1.0f, 1.0f));
	~LightPoint();
	float constant = 1.0f;
	float linear = 0.1f;
	float quadratic = 0.001f;
};

