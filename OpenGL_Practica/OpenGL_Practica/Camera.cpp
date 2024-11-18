#include "Camera.h"

void Camera::Render() {
	glTranslatef(-1 * this->GetCoordinateX(), -1 * this->GetCoordinateY(), -1 * this->GetCoordinateZ());
	glRotatef(this->GetAngleX(), 1, 0, 0);
	glRotatef(this->GetAngleY(), 0, 1, 0);
	glRotatef(this->GetAngleZ(), 0, 0, 1);
}

void Camera::Update() {

}
