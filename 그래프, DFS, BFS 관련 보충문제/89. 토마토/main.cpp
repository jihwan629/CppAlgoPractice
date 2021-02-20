#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int M, N, total = 0, ans = 0;
int box [1002][1002];
int idir [] = {-1, 1, 0, 0};
int jdir [] = {0, 0, -1, 1};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &M, &N);
	
	for(int i = 0; i <= N + 1; i++)
	{
		for(int j = 0; j <= M + 1; j++)
		{
			box[i][j] = 1;
		}
	}
	
	queue<pair<int, int> > Q;
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= M; j++)
		{
			scanf("%d", &box[i][j]);
			if(box[i][j] == 1)
				Q.push(make_pair(i, j));
				
			if(box[i][j] != 0) total++;
		}
	}
	
	int size;
	while(!Q.empty())
	{
		ans++;
		
		size = Q.size();
		for(int i = 0; i < size; i++)
		{
			int iq = Q.front().first;
			int jq = Q.front().second;
			Q.pop();
			
			for(int d = 0; d < 4; d++)
			{
				int id = iq + idir[d];
				int jd = jq + jdir[d];
				
				if(box[id][jd] == 0)
				{
					Q.push(make_pair(id, jd));
					box[id][jd] = 1;
					total++;
				}
			}
		}
	}
	
	if(total != M * N) printf("-1");
	else printf("%d", ans - 1);	
	return 0;
}
