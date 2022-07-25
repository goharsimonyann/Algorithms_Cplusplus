#include <iostream>
#include <vector>
using namespace std;

void increasingSubsequence(int vec[], int n)
{
    vector<int> vec2(n);
    for (int i = 0; i < n; ++i)
    {
        vec2[i] = 0;
    }
    vec2[0] = 1;
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            if (vec[i] > vec[i - 1] && vec[i] > vec[i - 2])
            {
                vec2[j] = vec2[i] + 1;
            }    
        }
    }
   for (int i = 0; i < vec2.size(); ++i)
    {
        cout << vec2[i] << " ";
    }    
 }

int main()
{
    int n = 7;
    int v[] = { 10, 9, 2, 5, 3, 7, 101};
    increasingSubsequence(v,n);
    return 0;
}
