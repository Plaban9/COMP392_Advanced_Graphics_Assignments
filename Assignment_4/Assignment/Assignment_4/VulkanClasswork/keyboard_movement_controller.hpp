#pragma once

#include "lve_game_object.hpp"
#include "lve_window.hpp"

namespace lve
{
	class KeyboardMovementController
	{
	public:
		struct KeyMappings
		{
			int moveLeft = GLFW_KEY_LEFT;
			int moveRight = GLFW_KEY_RIGHT;
			int moveForward = GLFW_KEY_UP;
			int moveBackward = GLFW_KEY_DOWN;
			int moveUp = GLFW_KEY_E;
			int moveDown = GLFW_KEY_Q;
			int lookLeft = GLFW_KEY_A;
			int lookRight = GLFW_KEY_D;
			int lookUp = GLFW_KEY_W;
			int lookDown = GLFW_KEY_S;
		};

		void moveInPlaneXZ(GLFWwindow* window, float dt, LveGameObject& gameObject);

		KeyMappings keys{};
		float moveSpeed{ 3.f };
		float lookSpeed{ 1.5f };
	};
}  // namespace lve
