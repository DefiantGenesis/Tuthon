#pragma once
#include "glm/glm.hpp"

namespace Tuthon {

	class Transform
	{
	public:
		Transform();
		~Transform();

		glm::mat4 getTransformMatrix();

		glm::vec3 pos;
		glm::vec3 scale;
		glm::vec3 rot;
		
	};

}