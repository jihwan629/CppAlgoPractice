#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<int > map [21];
bool flag [21] = {false};
queue <int > Q;
int N, M, dist [21] = {0};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &N, &M);

	int a, b;
	for(int i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
	}
	
	flag[1] = true;
	Q.push(1);
	
	int x, tmp;
	while(!Q.empty())
	{
		x = Q.front();
		Q.pop();
		
		for(int i = 0; i < map[x].size(); i++)
		{
			tmp = map[x][i];
			if(!flag[tmp])
			{
				flag[tmp] = true;
				dist[tmp] = dist[x] + 1;
				Q.push(tmp);
			}
		}
	}
	
	for(int i = 2; i <= N; i++)
	{
		printf("%d : %d\n", i, dist[i]);
	}
	
	return 0;
}
