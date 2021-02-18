#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, M, ans = INT_MAX;
int map [51][51] = {0}, out [13] = {0};
vector <pair<int, int> > home, pizza;

int getDist(pair<int, int> a, 
			pair<int, int> b)
{
	return abs(a.first - b.first) +
			abs(a.second - b.second);
}

int sum, tmp;
void DFS (int cnt, int cur)
{
	if(cnt == M)
	{
		sum = 0;
		for(int i = 0; i < home.size(); i++)
		{
			tmp = INT_MAX;
			for(int j = 0; j < M; j++)
			{
				tmp = min(tmp, getDist
					(pizza[out[j]], home[i]));
			}
			
			sum += tmp;
		}

		ans = min(ans, sum);
		return;
	}
	
	for(int i = cur; i < pizza.size(); i++)
	{
		out[cnt] = i;
		DFS(cnt + 1, i + 1);
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	scanf("%d %d", &N, &M);
	
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			scanf("%d", &map[i][j]);
			
			if(map[i][j] == 1)
				home.push_back
					(make_pair(i, j));
			else if(map[i][j] == 2)
				pizza.push_back
					(make_pair(i, j));
		}
	}

	DFS(0, 0);
	printf("%d", ans);
	return 0;
}
