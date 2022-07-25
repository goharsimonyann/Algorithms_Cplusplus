#include <iostream>
#include <vector>
//  TRANSPOSED MATRIX

int main()
{
	int Row;
	int Column;
	std::cout << "Enter the number of columns" << std::endl;
	std::cin >> Column;
  
	std::cout << "Enter the number of rows" << std::endl;
	std::cin >> Row;
  
	std::cout << "Enter the elements of your matrix" << std::endl;
	std::vector<std::vector<int>> Matrix(Row, std::vector<int>(Column));
	for (int i = 0; i < Row; ++i) {
		for (int j = 0; j < Column; ++j) {
			std::cin >> Matrix[i][j];
		}
	}
  
	std::cout << "The elemantary matrix is" << std::endl;
	for (int i = 0; i < Row; ++i) {
		for (int j = 0; j < Column; ++j) {
			std::cout << Matrix[i][j] << '\t';
		}
		std::cout << '\n';
	}

	std::vector<std::vector<int>> TransposedMatrix(Column, std::vector<int>(Row));
	for (int i = 0; i < Column; ++i) {
		for (int j = 0; j < Row; ++j) {
			TransposedMatrix[i][j] = Matrix[j][i];
		}
	}
  
	std::cout << "The tramsposed matrix is" << std::endl;
	for (int i = 0; i < Column; ++i) {
		for (int j = 0; j < Row; ++j) {
			std::cout << TransposedMatrix[i][j] << '\t';
		}
		std::cout << '\n';
	}
  
	return 0;
}
