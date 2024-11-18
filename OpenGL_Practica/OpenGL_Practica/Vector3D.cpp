#include "Vector3D.h"
#include <cmath>
#include <stdexcept>
#include <random>

//Random float generator
float Vector3D::getRandomFloat(float minValue, float maxValue)
{
	static random_device rd;
	static mt19937 gen(rd());
	uniform_real_distribution<float> dist(minValue, maxValue);
	return dist(gen);
}

//Random Vector3D generator
Vector3D Vector3D::getRandomVector3D(float minValue, float maxValue)
{
	float x = getRandomFloat(minValue, maxValue);
	float y = getRandomFloat(minValue, maxValue);
	float z = getRandomFloat(minValue, maxValue);

	return Vector3D(x, y, z);
}

//Direct methods
Vector3D Vector3D::Add(const Vector3D& b)
{
	return Vector3D(x + b.x, y + b.y, z + b.z);
}

Vector3D Vector3D::Subtract(const Vector3D& b)
{
	return Vector3D(x - b.x, y - b.y, z - b.z);
}

Vector3D Vector3D::Product(const float& b)
{
	return Vector3D(b * x, b * y, b * z);
}

float Vector3D::DotProduct(const Vector3D& v)
{
	return x * v.x + y * v.y + z * v.z;
}

float Vector3D::Magnitude()
{
	return sqrt(x * x + y * y + z * z);
}


//Overloading Operators
Vector3D Vector3D::operator+(const Vector3D& vector)
{
	return Vector3D(x + vector.x, y + vector.y, z + vector.z);
}

Vector3D Vector3D::operator-(const Vector3D& vector)
{
	return Vector3D(x - vector.x, y - vector.y, z - vector.z);
}

Vector3D Vector3D::operator*(const float& value)
{
	return Vector3D(value * x, value * y, value * z);
}

Vector3D Vector3D::operator/(const float& value)
{
	return Vector3D(x / value, y / value, z/  value);
}

float Vector3D::operator*(const Vector3D& vector)
{
	return x * vector.x + y * vector.y + z * vector.z;
}