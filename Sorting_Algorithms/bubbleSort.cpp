#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> vec, int n){
    for (int j = 0; j < n - 1; ++j) {
      for (int i = 0; i < n - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
          std::swap(vec[i], vec[i + 1]);
        }
		}
	} 
	
	for(int i =0; i<n; ++i){
        std::cout<<vec[i] << " ";
    }
}

int main()
{
	int n;
	std::cin >> n;
	std::vector<int> vec(n);
  
	for (int i = 0; i < n; ++i) {
		std::cin >> vec[i];		
	}
	
  bubbleSort(vec, n);
	return 0;

}
