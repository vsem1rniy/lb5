#include <iostream>
#include "math.h"
using namespace std;
int main() {
	int x, t = 5;
	printf("ERROR404 = ");
	scanf_s("%d", &x);
	float result;
	int dob = 0;
	for (int n = 1; n < 6; n++)
	{
		dob = dob * log(x) * (n * x);
	}
	result = dob + 2 * pow(x, 2.0);
	printf("w = %.3f\n", result);
	return 0;
}


