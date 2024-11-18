#pragma once
#include <stdexcept>

using namespace std;

class Color
{
private:
	float redComponent;
	float greenComponent;
	float blueComponent;

	float getRandomFloat();
public:
	Color() : redComponent(1), greenComponent(1), blueComponent(1) {};
	Color(float r, float g, float b) { this->redComponent = r; this->blueComponent = b; this->greenComponent = g; }

	inline float GetRedComponent() const { return this->redComponent; }
	inline float GetGreenComponent() const { return this->greenComponent; }
	inline float GetBlueComponent() const { return this->blueComponent; }

	void SetRedComponent(const float& redToSet);
	inline void SetGreenComponent(const float& greenToSet) { greenToSet >= 0 && greenToSet <= 1 ? this->greenComponent = greenToSet : throw std::invalid_argument("Value must be between 0 and 1"); }
	inline void SetBlueComponent(const float& blueToSet) { blueToSet >= 0 && blueToSet <= 1 ? this->blueComponent = blueToSet : throw std::invalid_argument("Value must be between 0 and 1"); }

	Color getRandomColor();
};

