#include "Transform.h"
#include "glm/gtx/transform.hpp"
#include "glm/gtx/euler_angles.hpp"

namespace Tuthon {

	Transform::Transform()
	{
	}


	Transform::~Transform()
	{
	}

	glm::mat4 Transform::getTransformMatrix() {
		return glm::translate(pos) * glm::eulerAngleYXZ(rot.y, rot.x, rot.z) * glm::scale(scale);
	}

}