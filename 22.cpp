#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	double weight, height;
	cin >> weight >> height ;
	double bmi;
	bmi = weight*weight/height;
	cout << bmi;
}
