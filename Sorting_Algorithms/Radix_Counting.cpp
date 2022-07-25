#include <iostream>
#include <queue>
using namespace std;
// RADIX SORTING
/*
void radix_sort(int arr[], int size)
{
	queue<int> q[10];
	int d = 3; //max kolichestvo chisel cifr 
	int j; // nor index
	int p = 1;
	for (int k = 0; k < d; ++k) // arrayneri vrov frumenq
	{
		for (int i = 0; i < size; ++i) // arrayi elementneri vrov stugumenq verjin nishe u lcnumenq herti mej
		{
			q[arr[i] / p % 10].push(arr[i]);
		}
		j = 0;
		for (int i = 0; i < 10; ++i)  // nuyne hanumenq herteri mejenq lcnum
		{
			while (!q[i].empty())
			{
				arr[j] = q[i].front();
				q[i].pop();
				++j;
			}
		}
		p *= 10; // amen angam mecacnumenq vor amen angam verjin nishe vercnenq
	}


}

int main()
{
	int arr[] = { 1, 20, 14, 256, 167, 324 };
	int n = sizeof(arr) / sizeof(int);
	for (int i = 0; i < n; ++i)
	{
		cout << " " << arr[i];
	}
	cout << endl;
	radix_sort(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << " " << arr[i];
	}
	return 0;
}*/
//COUNTING SORT
/*void counting_sort(int arr[], int size)
{
	int count[10];
	for (int i = 0; i < 10; ++i)  // 0akan massivenq sarqum
	{
		count[i] = 0;
	}
	for (int i = 0; i < size; ++i) // ancnuma arrayi vrov hashvuma qani hata amen tvic u avelacnuma elemnere
	{
		++count[arr[i]];
	}
	for (int i = 0; i < 10; ++i)
	{
		cout<<" "<<count[i];
	}
	cout << endl;
	for (int i = 1; i < 10; ++i)  //hashvuma amen tvic araj yngac tveri qanaknel
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
}*/