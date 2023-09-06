#include "PLA.h"
// Output final hypothesis function h
// and the number of iterations needed until PLA 
// converges

int main(void)
{
	std::vector<DataPoint> pts;
	pts.emplace_back(3, 2, 1, 1);
	pts.emplace_back(1, 2, 0, 1);
	pts.emplace_back(4, 0, 0, -1);
	pts.emplace_back(2, 1, 2, 1);
	pts.emplace_back(3, -2, 1, -1);
	pts.emplace_back(2, 2, -1, 1);
	pts.emplace_back(4, 1, 3, -1);
	pts.emplace_back(0, -1, 2, -1);
	pts.emplace_back(1, 0, 4, -1);
	pts.emplace_back(-2, 1, 2, 1);

	

	return 0;
}