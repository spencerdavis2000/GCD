/*
Spencer Davis
GCD using Euclid's formula:  a = b*q + r
where a and b are inputs to get the GCD for.
q is is a multiplier and r cannot be > than b.  
When r is zero, we are done finding the GCD
0 <= r < b

We start by making q = 1 and iterate until r < b
Then we make the value of b become a, and the value of r become b
We then call this function again recursively.  
We do this until r == 0
if r == b, we increment q.  This usually happens right before r becomes 0 and we are done
*/
#include <iostream>

using namespace std;

bool found = false;
int q = 1;
int output = 0;

void gcd(int a, int b)
{
	while (!found)
	{
		int r = a - b*q;
		if (r == 0)
		{
			output = b;
			found = true;
			cout << a << " = " << b << "*"<< q << " + " << r << endl;
			cout << "GCD is: " << output << endl;
		}
		if (r > b)
			q++;
		else if (r < b && r != 0)
		{
			cout << a << " = " << b << "*"<< q << " + " << r << endl;
			a = b;
			b = r;
			q = 1;
			gcd(a,b);
		}
		else if (r == b)
			q++;
	}
}
void clear()
{
	found = false;
	q = 1;
	output = 0;
}
int main()
{
	bool play = true;
	while (play)
	{
		char choice;
		int a;
		int b;
		cout << "==============Welcome to the GCD finder algorithm written in C++===========" << endl;
		cout << "We are going to compare two numbers and find the GCD" << endl;
		cout << "Please enter 1st number: " ;
		cin >> a;
		cout << "Please enter the 2nd number: ";
		cin >> b;

		clear();
		if (a > b)
			gcd(a,b);
		
		else if (b < a)
			gcd(b,a);

		cout << "Enter y to keep playing: ";
		cin >> choice;
		if (choice != 'Y' && choice != 'y')
			play = false;
	}
	cout << "Press any key to continue" << endl;
	cin.get();
	cin.ignore();
	return 0;
}