#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	double distance = sqrt(x*x +y*y);
	cout << "Distance = " << distance;
}
