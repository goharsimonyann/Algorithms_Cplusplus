#include <iostream>
#include <vector>

//Simple Matrix
int main()
{
	int Row;
	int Column;
  
	std::cout << "Enter the number of rows and columns";
	std::cin >> Row >> Column;
  
	std::vector<std::vector<int>> Matrix(Row, std::vector<int>(Column));
  
	for (int i = 0; i < Row; ++i) {
		for (int j = 0; j < Column; ++j) {
			std::cin >> Matrix[i][j];
		}
	}

	for (int i = 0; i < Row; ++i) {
		for (int j = 0; j < Column; ++j) {
			std::cout << Matrix[i][j] << '\t';
		}
		std::cout << '\n';
	}

  return 0;
}
