#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct Edge
{
	int a, b, c;
	
	Edge(int _a, int _b, int _c)
	{
		a = _a;
		b = _b;
		c = _c;
	}
};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int N, M;
	scanf("%d %d", &N, &M);
	
	vector <int > dist(101, INT_MAX);
	vector <Edge > vec;
	
	int a, b, c;
	for(int i = 0; i < M; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		vec.push_back(Edge(a, b, c));
	}
	
	int start, end;
	scanf("%d %d", &start, &end);
	
	dist[start] = 0;
	for(int i = 1; i < N; i++)
	{
		for(int j = 0; j < vec.size(); j++)
		{
			int u = vec[j].a;
			int v = vec[j].b;
			int w = vec[j].c;
			
			if(dist[u] != INT_MAX &&
				dist[u] + w < dist[v])
			{
				dist[v] = dist[u] + w;
			}
		}
	}
	
	for(int j = 0; j < vec.size(); j++)
	{
		int u = vec[j].a;
		int v = vec[j].b;
		int w = vec[j].c;
			
		if(dist[u] != INT_MAX &&
			dist[u] + w < dist[v])
		{
			printf("-1");
			return 0;
		}
	}
	
	printf("%d", dist[end]);
	return 0;
}
