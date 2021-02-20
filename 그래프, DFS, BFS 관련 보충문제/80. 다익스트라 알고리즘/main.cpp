#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct Edge
{
	int num, cost;
	Edge(int _num, int _cost)
	{
		num = _num;
		cost = _cost;
	}
	
	bool operator<(const Edge &e) const
	{
		return cost > e.cost;
	}
};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int N, M;
	scanf("%d %d", &N, &M);

	vector<int > dist (N + 1, INT_MAX);
	vector<pair<int, int> > vec[21];
	priority_queue<Edge > Q;

	int a, b, c;
	for(int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		vec[a].push_back(make_pair(b, c));
	}
	
	Q.push(Edge(1, 0));
	while(!Q.empty())
	{
		Edge e = Q.top();
		
		int num = e.num;
		int cost = e.cost;
		
		Q.pop();
		
		if(cost > dist[num]) continue;
		for(int i = 0; i < vec[num].size();
			i++)
		{
			int adnum = vec[num][i].first;
			int adcost = cost  + 
						vec[num][i].second;
			
			if(dist[adnum] > adcost)
			{
				dist[adnum] = adcost;
				Q.push(Edge(adnum, 
							dist[adnum]));
			}
		}
	}
	
	for(int i = 2; i <= N; i++)
	{
		if(dist[i] == INT_MAX)
			printf("%d : impossible\n", i);
		else
			printf("%d : %d\n", i, dist[i]);
	}
	return 0;
}
