#include <iostream>
#include "Color.h"
#include <random>

void Color::SetRedComponent(const float& redToSet) { 
	//redToSet >= 0 && redToSet <= 1 ? this->redComponent = redToSet : throw std:: invalid_argument("Value must be between 0 and 1");
	
	redComponent = redToSet;
	std::cout <<"en set de Color"<< redToSet << std::endl;

}

//Random float generator
float Color::getRandomFloat()
{
	static random_device rd;
	static mt19937 gen(rd());
	uniform_real_distribution<float> dist(0.0, 1);
	return dist(gen);
}

Color Color::getRandomColor()
{
	float redC = getRandomFloat();
	float greenC = getRandomFloat();
	float blueC = getRandomFloat();

	return Color(redC, greenC, blueC);
}