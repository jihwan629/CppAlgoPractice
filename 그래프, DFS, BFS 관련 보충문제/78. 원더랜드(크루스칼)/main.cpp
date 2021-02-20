#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int parent [101] = {0};

struct city
{
	int a, b, c;
	
	city(int _a, int _b, int _c)
	{
		a = _a;
		b = _b;
		c = _c;
	}
	
	bool operator<(const city &_city) const
	{
		return c < _city.c;
	}
};

int Find(int x)
{
	if(parent[x] == x) return x;
	else return parent[x] = Find(parent[x]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if(a != b) parent[a] = b;
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int V, E;
	scanf("%d %d", &V, &E);
	
	for(int i = 1; i <= V; i++)
	{
		parent[i] = i;
	}
	
	vector<city> vec;
	
	int a, b, c;
	for(int i = 0; i < E; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		vec.push_back(city(a, b, c));
	}
	
	sort(vec.begin(), vec.end());
	
	int ans = 0;
	for(int i = 0; i < E; i++)
	{
		a = Find(vec[i].a);
		b = Find(vec[i].b);
		c = vec[i].c;

		if(a != b) 
		{
			ans += c;
			Union(a, b);
		}
	}
	
	printf("%d", ans);
	return 0;
}
