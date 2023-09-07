#include "PLA.h"
// Output final hypothesis function h
// and the number of iterations needed until PLA 
// converges

int pla::sign(vec3 x)
{
	int res = glm::dot(w_, x);
	return (res > 0) ? (1) : (-1);	
}

void pla::classify(DataPoint currData)
{
	int clast = sign(currData.x());
	int n = currData.n();
	currData.setClast( !(clast == initData_[n].y()) );
		
}

// Check this against initData_
DataPoint* pla::updateClassification()
{
	// First multiply current weight and set classification
	DataPoint* misClassData = nullptr;
	

	for (auto point : currData_)
	{
		if (!point.misClast() || 
			sign(point.x()) != point.y())
		{
			point.setClast(false);
			// only need the first to update the weight
			if (!misClassData)
			{
				misClassData = &point;
			}
		}
		else { point.setClast(true); }
	}
	return misClassData;
}

void pla::updateWeight(vec3 badData)
{
	vec3 weight = w_ + ;
	

}

vec3 pla::Hypothesis()
{
	for(; numIter_ <= 10, !complete_ ; ++numIter_)
	{
			
	}

}


int main(void)
{
	vector<DataPoint> pts;
	pts.emplace_back(3, 2, 1, 1, 0);
	pts.emplace_back(1, 2, 0, 1, 1);
	pts.emplace_back(4, 0, 0, -1, 2);
	pts.emplace_back(2, 1, 2, 1, 3);
	pts.emplace_back(3, -2, 1, -1, 4);
	pts.emplace_back(2, 2, -1, 1, 5);
	pts.emplace_back(4, 1, 3, -1, 6);
	pts.emplace_back(0, -1, 2, -1, 7);
	pts.emplace_back(1, 0, 4, -1, 8);
	pts.emplace_back(-2, 1, 2, 1, 9);

	vec3 initWeight = vec3(0, 0, 0);
	
	pla pla0(pts, initWeight);
	
	

	return 0;
}