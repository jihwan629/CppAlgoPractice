#include <bits/stdc++.h>

using namespace std;

struct brick
{
	int area, height, weight;
	
	brick(int a, int b, int c)
	{
		area = a;
		height = b;
		weight = c;
	}
	
	bool operator<(const brick &b) const
	{
		return area > b.area;
	}
};

int N, dy [101] = {0}, ans = 0;
vector <brick > vec;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	cin >> N;
	
	int a, b, c;
	for(int i = 0; i < N; i++)
	{
		cin >> a >> b >> c;
		vec.push_back(brick(a, b, c));
	}
	
	std::sort(vec.begin(), vec.end());
	
	for(int i = 0; i < N; i++)
	{
		dy[i] = vec[i].height;
		
		for(int j = i - 1; j >= 0; j--)
		{
			if(vec[i].weight < vec[j].weight)
			{
				dy[i] = std::max
				(dy[i], dy[j] + vec[i].height);
			}
		}
		
		ans = std::max(ans, dy[i]);
	}

	printf("%d", ans);
	return 0;
}
