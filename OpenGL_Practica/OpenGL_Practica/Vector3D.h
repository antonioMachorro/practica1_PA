#pragma once

using namespace std;

class Vector3D
{
private:
	float x;
	float y;
	float z;

	float getRandomFloat(float minValue, float maxValue);

public:
	Vector3D() : x(0), y(0), z(0) {};
	Vector3D(float x, float y, float z) { this->x = x; this->y = y; this->z = z; }

	inline float GetX() const { return this->x; }
	inline float GetY() const { return this->y; }
	inline float GetZ() const { return this->z; }

	inline void SetX(const float& xToSet) { this->x = xToSet; }
	inline void SetY(const float& yToSet) { this->y = yToSet; }
	inline void SetZ(const float& zToSet) { this->z = zToSet; }

	Vector3D Add(const Vector3D& b);
	Vector3D Subtract(const Vector3D& b);
	Vector3D Product(const float& b);
	float DotProduct(const Vector3D& v);
	float Magnitude();

	Vector3D operator+(const Vector3D& vector);
	Vector3D operator-(const Vector3D& vector);
	Vector3D operator*(const float& value);
	Vector3D operator/(const float& value);
	float operator*(const Vector3D& vector);

	Vector3D getRandomVector3D(float minValue, float maxValue);
};

