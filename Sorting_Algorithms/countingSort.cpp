#include <iostream>
using namespace std;

//	COUNTING SORT

void counting_sort(int arr[], int size)
{
	int count[10];
	for (int i = 0; i < 10; ++i)
	{
		count[i] = 0;
	}
	for (int i = 0; i < size; ++i)
	{
		++count[arr[i]];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout<<" "<<count[i];
	}
	cout << endl;
	for (int i = 1; i < 10; ++i)  
	{
		count[i] = count[i - 1] + count[i];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << " " << count[i];
	}
	int* b = new int[size];
	for (int i = size - 1; i >= 0; --i)
	{
		b[count[arr[i]] - 1] = arr[i];
		count[arr[i]]--;
	}
	for (int i = 0; i < size; ++i)
	{
		arr[i] = b[i];
	}
}

int main()
{
	int arr[] = { 4,5,7,2,5,1,2,8 };
	int n = sizeof(arr) / sizeof(int);
	counting_sort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout << " " << arr[i];
	}
	return 0;
}
