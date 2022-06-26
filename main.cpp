#include <iostream>
#include "Bacteria.h"
#include <vector>
#include <string>


std::vector <float> mainPositionArr[2];

int main()
{
	Bacteria bacteria1;
	bacteria1.newInstance(mainPositionArr);
	std::cout << bacteria1.position[0][0] << " " << bacteria1.position[1][0]; 
}

