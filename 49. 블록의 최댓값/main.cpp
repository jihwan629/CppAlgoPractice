#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N;
	scanf("%d", &N);
	
	int arr [N][N] = {0};
	int temp;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		for(int j = 0; j < N; j++)
		{
			arr[j][i] = temp;
		}
	}
	
	int ans = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		for(int j = 0; j < N; j++)
		{
			arr[N - i - 1][j] 
			= min(arr[N - i - 1][j], temp);
			ans += arr[N - i - 1][j];
		}
	}

	printf("%d", ans);
	return 0;
}
