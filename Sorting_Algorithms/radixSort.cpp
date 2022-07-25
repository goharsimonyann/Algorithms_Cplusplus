#include <iostream>
#include <queue>
using namespace std;

void radix_sort(int arr[], int size)
{
	queue<int> q[10];
	int d = 3, p = 1, j;
	for (int k = 0; k < d; ++k)
	{
		for (int i = 0; i < size; ++i)
		{
			q[arr[i] / p % 10].push(arr[i]);
		}
		j = 0;
		for (int i = 0; i < 10; ++i)
		{
			while (!q[i].empty())
			{
				arr[j] = q[i].front();
				q[i].pop();
				++j;
			}
		}
		p *= 10;
	}
}

int main(){
    int arr[] = { 1, 20, 14, 256, 167, 324 };
	  int n = sizeof(arr) / sizeof(int);
	  radix_sort(arr, n);
    for (int i = 0; i < n; ++i)
    {
      cout << " " << arr[i];
    }
    return 0;
}
