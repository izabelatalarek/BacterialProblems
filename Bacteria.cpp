#include "Bacteria.h"
#include <vector>
#include <string>

bool Bacteria::checkCoordinates(std::vector <float> mainPositionArr[2], float x, float y)
{
	if (mainPositionArr[0].size() > 0) 
	{
		for (int i = 0; i <= mainPositionArr[0].size() - 1; i++)
		{
			if (mainPositionArr[0][i] == x || mainPositionArr[1][i] == y)
				return false;
		}
	}
	return true;
}

void Bacteria:: newInstance(std::vector <float> mainPositionArr[2])
{
	float x{};
	float y{};

	x = (static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 50;
	y = (static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 50;
	
	while (!checkCoordinates(mainPositionArr, x, y))
	{
		x = (static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 50;
		y = (static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 50;
	}

	position[0].push_back(x);
	position[1].push_back(y);
}
