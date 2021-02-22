#include <bits/stdc++.h>

using namespace std;

int arr [21][21] = {0}, dy [21][21] = {0};
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
	
	dy[0][0] = arr[0][0];
	for(int i = 1; i < N; i++)
	{
		dy[0][i] = dy[0][i - 1] + arr[0][i];
		dy[i][0] = dy[i - 1][0] + arr[i][0];
	}
	
	for(int i = 1; i < N; i++)
	{
		for(int j = 1; j < N; j++)
		{
			dy[i][j] = arr[i][j] + std::min
			(dy[i - 1][j], dy[i][j - 1]);
		}
	}

	printf("%d", dy[N - 1][N - 1]);
	return 0;
}
