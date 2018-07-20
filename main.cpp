#include "vector-ops.h"
#include <iostream>
 
 using namespace std;

int main () {

	vector<double> v1 = {1.0, 1.2, 2.3};
	vector<double> v2 = {1.4, 1.6, 2.0};
	vector<double> v3;
	double dot = 0;

	v3 = addVectors(v1,v2);
	for(auto i = 0; i < v3.size(); i++){
		cout << v3[i] << endl;
	}

	dot = dotProduct(v1,v2);
	cout << dot << endl;

	cout << v1[0] << endl;

	return 0;
}