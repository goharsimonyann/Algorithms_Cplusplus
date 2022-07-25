#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n)
{
	vector<int> F(n + 1);
	F[0] = 0;
	F[1] = 1;
	F[2] = 1;

	for (int i = 2; i <= n; ++i)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	return F[n];
}

int main()
{
	int n;
	cout << "Enter number : ";
	cin >> n;
	cout << "Fibonacci number is : " << fibonacci(n) << endl;
	return 0;
}
