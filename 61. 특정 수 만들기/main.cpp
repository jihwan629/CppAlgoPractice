#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int N, M, arr [11], ans = 0;

void DFS(int cnt, int sum)
{
	if(cnt == N)
	{
		if(sum == M) ans ++;
		return;
	}

	DFS(cnt + 1, sum);
	DFS(cnt + 1, sum + arr[cnt]);
	DFS(cnt + 1, sum - arr[cnt]);
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &N, &M);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	DFS(0, 0);
	
	if(ans == 0) printf("-1");
	else printf("%d", ans);
	return 0;
}
