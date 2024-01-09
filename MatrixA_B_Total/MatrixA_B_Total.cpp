/*
In this code, we will get value from the user for two matrix (A and B) and according to the matrix,
we will have a total matrix (T) which has total for each index of A and B (like A[0][0] + B[0][0]).

Developer: Barış Someroğlu
Date: 10.01.2024 / 12:50 p.m.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;

	cout << "Please Enter Size of Matrix: ";
	cin >> n;

	cout << "\n";

	vector<vector<int>> A(n, vector<int>(n));
	vector<vector<int>> B(n, vector<int>(n));
	vector<vector<int>> T(n, vector<int>(n));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "Please Enter A[" << i << "][" << j << "]: ";
			cin >> A[i][j];

			cout << "Please Enter B[" << i << "][" << j << "]: ";
			cin >> B[i][j];

			cout << "\n";
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			T[i][j] = A[i][j] + B[i][j];
		}
	}

	cout << "\n";

	cout << "Total Matrix is: " << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << T[i][j] << " ";
		}

		cout << "\n";
	}

	return 0;
}