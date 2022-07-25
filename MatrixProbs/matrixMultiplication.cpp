#include <iostream>
#include <vector>

int main()
{
	int N, M, K;
	std::cout << "Enter first matrix's rows and columns" << std::endl;
	std::cin >> N >> M;
  
	std::cout << "Enter second matrix's rows and columns" << std::endl;
	std::cin >> M >> K;
  
	std::vector<std::vector<int>> MatrixNM(N, std::vector<int>(M));
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				std::cin >> MatrixNM[i][j];
			}
		}
  
		std::cout << "The first matrix is:" << std::endl;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				std::cout << MatrixNM[i][j] << '\t';
			}
			std::cout << '\n';		
		}
		std::vector<std::vector<int>> MatrixMK(M, std::vector<int>(K));
		for (int i = 0; i < M; ++i) {
			for (int j = 0; j < K; ++j) {
				std::cin >> MatrixMK[i][j];
			}
		}
		std::cout << "The second matrix is:" << std::endl;
		for (int i = 0; i < M; ++i) {
			for (int j = 0; j < K; ++j) {
				std::cout << MatrixMK[i][j] << '\t';
			}
			std::cout << '\n';
		}

		std::vector<std::vector<int>> MatrixNK(N, std::vector<int>(K));
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < K; ++j) {
				MatrixNK = MatrixNM[i][j] *+ MatrixMK[j][i];
			}
		}

		system("pause");
		return 0;
}
