#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

//	RADIX SORT

void Radix_Sort(double arr[], int size) {
    queue<double> q[10];
    int d = 3;
    int j;
    int p = 1;
    for (int k = 0; k < d; ++k) {
        for (int i = 0; i < size; ++i) {
            q[arr[i] / p % 10].push(arr[i]);
        }
        j = 0;
        for (int i = 0; i < 10; ++i) {
            while (!q[i].empty()) {
                arr[j] = q[i].front();
                q[i].pop();
                j++;
            }
        }
        p = p * 10;
    }
}

//	BUCKET
void BucketSort(float arr[], int n)
{
	queue<float> b[5]; //create bucket
	for (int i = 0; i < 5; ++i)
	{
		int index = n * arr[i]; //index in bucket
		b[index].push(arr[i]);
	}
    for (int i = 0; i < 5; ++i)
    {
        sort(b[i].front(), b[i].back());
    }
	//Radix_Sort(arr,5);	
	
}

int main()
{
    float arr[] = { 0.897, 0.565, 0.656, 0.1234, 0.665};
    int n = (sizeof(arr) / sizeof(arr[0]));
    BucketSort(arr, n);
    for (int i = 0; i < 5; ++i)
    {
        cout << " " << arr[i];
    }
    return 0;
}
