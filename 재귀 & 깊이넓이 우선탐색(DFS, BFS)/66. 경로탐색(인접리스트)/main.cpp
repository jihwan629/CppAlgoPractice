#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> map [21];
bool flag [21] = {false};
int N, M, ans = 0;

void DFS(int cnt)
{
	if(cnt == N - 1)
	{
		ans++;
		return;
	}
	
	for(int i = 0; i < map[cnt].size(); i++)
	{
		if(!flag[map[cnt][i]])
		{
			flag[map[cnt][i]] = true;
			DFS(map[cnt][i]);
			flag[map[cnt][i]] = false;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &N, &M);
	
	int a, b;
	for(int i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		map[a - 1].push_back(b - 1);
	}
	
	flag[0] = true;
	DFS(0);
	printf("%d", ans);
	return 0;
}
