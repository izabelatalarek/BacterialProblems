#pragma once
#include <vector>

class Bacteria
{

	float nearby{};
//	std::vector <std::vector <float>> position;
	//std::vector <float> position[2];
	bool checkCoordinates(std::vector <float> mainPositionArr[2], float x, float y);

public:
	std::vector <float> position[2];
	void newInstance(std::vector <float> mainPositionArr[2]);
};

