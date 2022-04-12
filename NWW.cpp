#include<iostream>
using namespace std;
int x(int a, int b)
{
	while (a != b) {
		if (b > a)
			b = b - a;
		else
			a = a - b;
	}
	return a;
}
int main()
{
	int a, b;
	cout << "Podaj liczy";
	cin >> a >> b;
	cout << "NWD z " << a << "," << b << " = " << x(a, b) << endl;



	return 0;
}