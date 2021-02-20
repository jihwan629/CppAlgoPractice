#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, ans = 0;
vector <pair<int , int> > vec;

void DFS (int cnt, int money)
{
	if(cnt > N + 1) return;
	if(cnt == N + 1)
	{
		ans = max(ans, money);
		return;
	}
	
	DFS(cnt + 1, money);
	DFS(cnt + vec[cnt].first, money + vec[cnt].second);
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d", &N);
	
	int a, b;
	vec.push_back(make_pair(0, 0));
	for(int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		vec.push_back(make_pair(a, b));
	}

	DFS(1, 0);
	
	printf("%d", ans);
	return 0;
}
