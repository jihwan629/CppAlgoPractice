#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N = 7;
int map [9][9], out [9][9];
int idir [] = {-1, 1, 0, 0};
int jdir [] = {0, 0, -1, 1};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			map[i][j] = 1;
			out[i][j] = INT_MAX;	
		}
	}

	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	
	queue<pair<int, int> > Q;
	Q.push(make_pair(1, 1));
	map[1][1] = 1;
	out[1][1] = 0;
	
	int cnt = 0;
	while(!Q.empty())
	{
		int iq = Q.front().first;
		int jq = Q.front().second;
		Q.pop();
		
		for(int d = 0; d < 4; d++)
		{
			int id = iq + idir[d];
			int jd = jq + jdir[d];
			
			if(map[id][jd] == 0)
			{
				out[id][jd] = min(
						out[id][jd], 
						out[iq][jq] + 1);
								
				map[id][jd] = 1;
				Q.push(make_pair(id, jd));
			}
		}
	}

	if(out[N][N] == INT_MAX)
		printf("-1");
	else
		printf("%d", out[N][N]);
	return 0;
}
