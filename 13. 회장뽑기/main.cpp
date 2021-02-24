#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	int N;
	cin >> N;
	
	int dist [51][51], ans [51] = {0};
	
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			if(i == j)
				dist[i][j] = 0;
			else
				dist[i][j] = 10000;
		}
	}
	
	int a, b;
	while(1)
	{
		cin >> a >> b;
		
		if(a < 0 || b < 0) break;
		
		dist[a][b] = 1;
		dist[b][a] = 1;
	}
	
	for(int k = 1; k <= N; k++)
	{
		for(int i = 1; i <= N; i++)
		{
			for(int j = 1; j <= N; j++)
			{
				dist[i][j] = min(dist[i][j], 
					dist[i][k] + dist[k][j]);
			}
		}
	}
	
	int res = 10000, num = 0;
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			ans[i] = max(ans[i], dist[i][j]);
		}
		
		res = min(res, ans[i]);
	}
	
	queue <int > Q;
	for(int i = 1; i <= N; i++)
	{
		if(ans[i] == res) 
		{
			num++;
			Q.push(i);
		}
	}
	
	cout << res << " " << num << endl;
	while(!Q.empty())
	{
		cout << Q.front() << " ";
		Q.pop();
	}
	
	return 0;
}
