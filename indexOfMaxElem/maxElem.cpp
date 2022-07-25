#include <iostream>
#include <vector>
using namespace std;

//	PRINTS OUT INDEX OF MAX ELEMENT

int indexOfMaxElem(vector<int> v, int n)
{
	int max = v[0];
	int x;
	for (int i = 0; i < n; ++i)
	{
		if (max < v[i])
		{
			max = v[i];
			x = i;
		}
	}
	return x;
}

int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	cout << indexOfMaxElem(v, n);
	return 0;
}
