#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

bool ch [101] = {false};

struct city
{
	int a, b;
	
	city(int _a, int _b)
	{
		a = _a;
		b = _b;
	}
	
	bool operator<(const city &_city) const
	{
		return b > _city.b;
	}
};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int V, E;
	scanf("%d %d", &V, &E);

	vector<pair<int, int> > vec[101];
	priority_queue<city > Q;
	
	int a, b, c;
	for(int i = 0; i < E; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		vec[a].push_back(make_pair(b, c));
		vec[b].push_back(make_pair(a, c));
	}
	
	Q.push(city(1, 0));
	
	int ans = 0, x;
	while(!Q.empty())
	{
		x = Q.top().a;

		if(!ch[x])
		{
			ans += Q.top().b;
			ch[x] = true;
		}

		Q.pop();
		
		for(int i = 0; i < vec[x].size(); 
			i++)
		{
			if(!ch[vec[x][i].first])
			{
				Q.push(city(vec[x][i].first,
						vec[x][i].second));
			}
		}
	}
	
	printf("%d", ans);
	return 0;
}
