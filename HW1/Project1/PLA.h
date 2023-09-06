#pragma once
#include <string>
#include <vector>
// sign fnct


class DataPoint
{
public:
	DataPoint(int x0, int x1, int x2, int _y)
		: y_(_y)
	{
		x_[0] = x0;
		x_[1] = x1;
		x_[2] = x2;
	}
	int* x() { return x_; }
	
private:
	int x_[3]; // Input values
	int y_;	   // yes or no		

};


class pla
{
public:
	pla(){}
	pla()
	{
	}
	void print();
	bool sign(DataPoint w, DataPoint x);


private: 
	int numIter_; // t


};