#include "Teapot.h"

void Teapot::Render() {
	glPushMatrix();
	glTranslatef(this->GetCoordinateX(), this->GetCoordinateY(), this->GetCoordinateZ());
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glRotatef(this->GetAngleX(), 1.0, 0.0, 0.0);
	glRotatef(this->GetAngleY(), 0.0, 1.0, 0.0);
	glRotatef(this->GetAngleZ(), 0.0, 0.0, 1.0);
	glutSolidTeapot(this->GetSize());
	glPopMatrix();
}

void Teapot::Update() {
	SetAngle(this->rotation + this->orientationSpeed * TIME_SCALE);
}

Solid* Teapot::Clone() {
	return new Teapot(*this);
}