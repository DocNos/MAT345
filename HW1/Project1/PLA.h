#pragma once
#include <string>
#include <vector>
#include <glm.hpp>
using glm::vec3;
using glm::mat;
using std::vector;
/* Impractical to use a matrix here 
class DataPoint_Mat
{
public:
	DataPoint_Mat()


private:
	

};
*/
class DataPoint
{
public:
	DataPoint(int x0, int x1, int x2, int _y, int _n)
		: y_(_y)
		, x_(vec3(x0, x1, x2))
		, n_(_n)
		, misclassified_(false)
	{}
	vec3 x() { return x_; }
	int y() { return y_; }
	int n() { return n_; }
	void setClast(bool classf) { misclassified_ = classf; }
	bool misClast() { return misclassified_; }

private:
	int y_;	   // yes or no		
	vec3 x_; // Input values
	int n_; // x(n)
	bool misclassified_;

};


class pla
{
public:
	pla(){}
	pla(vector<DataPoint> pts, vec3 _w)
		: numIter_(0)
		, initData_(pts)
		, currData_(pts)
		, w_(_w) // w(0)
		, complete_(false)
	{}
	void print();
	int sign(vec3);
	void classify(DataPoint);
	int NumIterations() { return numIter_; }
	DataPoint* updateClassification(); // if return nullptr, complete_ = true
	void updateWeight();
	vec3 Hypothesis();

private: 
	int numIter_; // t
	vector<DataPoint>  initData_;
	vector<DataPoint>  currData_;
	// w(n) = w(n-1) + y(n-1)x(n-1)
	// y is a scalar and multiplied into vec3 x
	vec3 w_;
	bool complete_;

};