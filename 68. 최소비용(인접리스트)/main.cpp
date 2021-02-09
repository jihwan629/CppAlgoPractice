#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<pair<int, int> > map [21];
bool flag [21] = {false};
int N, M, ans = INT_MAX;

void DFS(int cnt, int sum)
{
	if(sum > ans) return;
	
	if(cnt == N)
	{
		ans = min(ans, sum);
		return;
	}
	
	int num, dist;
	for(int i = 0; i < map[cnt].size(); i++)
	{
		num =  map[cnt][i].first;
		dist = map[cnt][i].second;
		
		if(!flag[num] && dist != 0)
		{
			flag[num] = true;
			DFS(num, sum + dist);
			flag[num] = false;
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
		map[a].
		push_back(make_pair(b, tmp));
	}
	
	flag[1] = true;
	DFS(1, 0);
	printf("%d", ans);
	return 0;
}
