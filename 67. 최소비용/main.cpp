#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int map [21][21] = {0};
bool flag [21] = {false};
int N, M, ans = INT_MAX;

void DFS(int cnt, int sum)
{
	if(sum > ans) return;
	
	if(cnt == N - 1)
	{
		ans = min(ans, sum);
		return;
	}
	
	for(int i = 0; i < N; i++)
	{
		if(!flag[i] && map[cnt][i] != 0)
		{
			flag[i] = true;
			DFS(i, sum + map[cnt][i]);
			flag[i] = false;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &N, &M);
	
	int a, b, tmp;
	for(int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &tmp);
		map[a - 1][b - 1] = tmp;
	}
	
	flag[0] = true;
	DFS(0, 0);
	printf("%d", ans);
	return 0;
}
