#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, total = 0, ans = 0;
int jungle [27][27] = {0};
bool ch [27][27] = {false};
int idir [] = {-1, 0, 0, 1};
int jdir [] = {0, -1, 1, 0};

struct State
{
	int i, j, dist;
	
	State(int a, int b, int c)
	{
		i = a;
		j = b;
		dist = c;
	}
	
	bool operator<(const State &s) const
	{
		if(dist == s.dist)
		{
			if(i == s.i) return j > s.j;
			else return i > s.i;
		} else
			return dist > s.dist;
	}
};

struct Lion
{
	int size, eat;
	
	Lion(int a, int b)
	{
		size = a;
		eat = b;
	}
	
	void grow()
	{
		size++;
		eat = 0;
	}
};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d", &N);
	
	for(int i = 0; i <= N + 1; i++)
	{
		for(int j = 0; j <= N + 1; j++)
		{
			jungle[i][j] = -1;
		}
	}
	
	priority_queue<State > Q;
	Lion simba (2, 0);
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			scanf("%d", &jungle[i][j]);
			if(jungle[i][j] == 9)
			{
				Q.push(State(i, j, 0));
				jungle[i][j] = 0;
			}
		}
	}
	
	int tmp;
	while(!Q.empty())
	{
		int iq = Q.top().i;
		int jq = Q.top().j;
		int distq = Q.top().dist;
		Q.pop();
		
		if(jungle[iq][jq] > 0 &&
			jungle[iq][jq] < simba.size)
		{
			//printf("%d %d %d\n",iq,jq,distq);
			jungle[iq][jq] = 0;
			simba.eat++;
			
			if(simba.eat >= simba.size)
				simba.grow();
			
			for(int i = 1; i <= N; i++)
			{
				for(int j = 1; j <= N; j++)
				{
					ch[i][j] = false;
				}
			}
			
			while(!Q.empty()) Q.pop();
			ans = distq;
		}
			
		for(int d = 0; d < 4; d++)
		{
			int id = iq + idir[d];
			int jd = jq + jdir[d];
			
			if(jungle[id][jd] < 0 ||
				jungle[id][jd] > simba.size ||
				ch[id][jd])
				continue;
				
			Q.push(State (id, jd, distq + 1));
			ch[id][jd] = true;
		}
	}
	
	printf("%d", ans);	
	return 0;
}
