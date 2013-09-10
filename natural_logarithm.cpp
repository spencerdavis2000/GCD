//Spencer Davis
//Natural Logarithm e^x calculation

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void e(int n, int iterations)
{
	double e = 0;

	for(int i = 0; i <= iterations; i++)
	{
		e = pow(1+(1/(double)n),n);
		cout << setprecision(16) << e << endl;
		n++;
	}
}

int main()
{
	e(2,1000000);
	return 0;
}