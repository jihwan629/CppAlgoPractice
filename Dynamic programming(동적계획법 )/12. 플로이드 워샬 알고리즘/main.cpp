#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	int N, M;
	cin >> N >> M;
	
	int dist [101][101];
	
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
	
	int a, b, c;
	for(int i = 0; i < M; i++)
	{
		cin >> a >> b >> c;
		dist[a][b] = c;
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
	
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= N; j++)
		{
			if(dist[i][j] == 10000)
				cout << "M ";
			else
				cout << dist[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}
