#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, ans = 0;
int map [22][22] = {0};
int idir [] = {-1, 1, 0, 0, -1, -1, 1, 1};
int jdir [] = {0, 0, -1, 1, -1, 1, -1, 1};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	scanf("%d", &N);
	
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			scanf("%d", &map[i][j]);
		}
	}
	
	queue<pair<int, int> > Q;
	
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			if(map[i][j] == 1)
			{
				Q.push(make_pair(i, j));
				map[i][j] = 0;
				
				//printf("%d %d\n", i, j);
				
				while(!Q.empty())
				{
					int iq = Q.front().first;
					int jq = Q.front().second;
					Q.pop();
					
					for(int d = 0; d < 8; d++)
					{
						int id = iq + idir[d];
						int jd = jq + jdir[d];
						
						if(map[id][jd] == 1)
						{
							Q.push(make_pair
									(id, jd));
							map[id][jd] = 0;
						}
					}
				}
				
				ans++;
			}
		}
	}

	printf("%d", ans);
	return 0;
}
