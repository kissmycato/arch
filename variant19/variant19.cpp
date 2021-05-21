#include <iostream>
using namespace std;
double a(int b) {
	if (b < 20) return 1;
	else
		return b * a(b - 1);
}
void main(int argc, char* argv[])
{
	double m, x;
	double i = 0;
	x = atoi(argv[1]);
	for (int n = 0; n < 20; n++)
	{
		m = pow(x, n) / a(2 * n - 1);
		i += m;
	}
	cout << i << endl;
}