#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()

{
	const int m = 10, n = 10;

	int matr[m][n];

	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			matr[i][j] = i * n + j;
			cout << matr[i][j] << " ";
		}
	cout << endl;
	
}

