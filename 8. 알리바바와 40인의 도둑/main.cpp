#include <bits/stdc++.h>

using namespace std;

int arr [21][21] = {0}, dy [21][21] = {0};

int DFS (int i, int j)
{
	if(dy[i][j] > 0) return dy[i][j];
	
	if(i == 0 && j == 0) 
		return dy[i][j] = arr[0][0];
	
	if(i == 0 && j > 0) 
		return dy[i][j] = 
		arr[i][j] + DFS(i, j - 1);
	if(i > 0 && j == 0) 
		return dy[i][j] = 
		arr[i][j] + DFS(i - 1, j);
		
	return dy[i][j] = arr[i][j] + std::min
	(DFS(i - 1, j), DFS(i, j - 1));
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	int N;
	cin >> N;
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			cin >> arr[i][j];
		}
	}

	printf("%d", DFS(N - 1, N - 1));
	return 0;
}
