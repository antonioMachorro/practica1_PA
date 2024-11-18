#include "Torus.h"

void Torus::Render() {
	glPushMatrix();
	glTranslatef(this->GetCoordinateX(), this->GetCoordinateY(), this->GetCoordinateZ());
	glColor3f(this->GetRedComponent(), this->GetGreenComponent(), this->GetBlueComponent());
	glRotatef(this->GetAngleX(), 1.0, 0.0, 0.0);
	glRotatef(this->GetAngleY(), 0.0, 1.0, 0.0);
	glRotatef(this->GetAngleZ(), 0.0, 0.0, 1.0);
	glutSolidTorus(this->GetInternalRadius(), this->GetExternalRadius(), this->GetFaces(), this->GetRings());
	glPopMatrix();
}

void Torus::Update() {
	SetAngle(this->rotation + this->orientationSpeed * TIME_SCALE);
}

Solid* Torus::Clone() {
	return new Torus(*this);
}