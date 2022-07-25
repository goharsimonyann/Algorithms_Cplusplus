#include <iostream>
using namespace std;

void min_heap(int arr[], int size, int i) {
    int min = i;
    int l = 2 * i;
    int r = 2 * i + 1;
    if (l <= size && arr[l] > arr[i]) {
        min = l;
    }

    if (r <= size && arr[r] > arr[min]) {
        min = r;
    }
    if (min != i) {
        swap(arr[i], arr[min]);
        min_heap(arr, size, min);
    }
    return;
}
void heap_sort(int arr[], int size)
{
    int a;
    for (int a = size - 1; a >= 0; --a) {
        swap(arr[1], arr[a]);
        --size;
        min_heap(arr, size, 1);
    }
}
int main()
{
    int arr[] = { 1, 4, 8, 3, 7, 9 };
    heap_sort(arr, sizeof(arr) / sizeof(int));
    for (int i = 1; i <= sizeof(arr) / sizeof(int); ++i)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
