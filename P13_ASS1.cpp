#include <iostream>
#include <string>
#include <utility>
using namespace std;

pair<int,string> MatrixChainOrder(int** arr, int start, int end)
{
	if (start == end) // base case
	{
		string matrix = "A";
		matrix += 48 + (start + 1);//using ASCII
		return *new pair<int, string>(0, matrix);
	}
	int mid;
	int minCount = 1000000;
	int multCount;
	string multiplication;

	// place parenthesis at different places
	// between first and last matrix, recursively
	// calculate count of multiplications for
	// each parenthesis placement and return the
	// minimum count
	pair<int, string> left, right;
	for (mid = start; mid < end; mid++)
	{
		left = MatrixChainOrder(arr, start, mid);
		right = MatrixChainOrder(arr, mid + 1, end);
		multCount = left.first + right.first + arr[start][0] * arr[mid][1] * arr[end][1];

		if (multCount < minCount) 
		{
			multiplication = "(" + left.second + " x " + right.second + ')';
			minCount = multCount;
		}
	}
	return  *new pair<int, string>(minCount, multiplication);
}

int main()
{
	int n;
	cin >> n;
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[2];
		cin >> arr[i][0] >> arr[i][1];
	}
	cout << MatrixChainOrder(arr, 0, n - 1).second;
}