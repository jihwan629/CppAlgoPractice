#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	int N, M;
	cin >> N >> M;
	
	bool ch [51][51] = {false};
	int degree [51] = {0};
	queue <int > Q;
	
	int a, b;
	for(int i = 0; i < M; i++)
	{
		cin >> a >> b;
		degree[b]++;
		ch[a][b] = true;
	}
	
	for(int i = 1; i <= N; i++)
	{
		if(degree[i] == 0) Q.push(i);
	}
	
	int tmp;
	while(!Q.empty())
	{
		tmp = Q.front();
		cout << tmp << " ";
		Q.pop();
		
		for(int i = 1; i <= N; i++)
		{
			if(ch[tmp][i])
			{
				degree[i]--;
				if(degree[i] == 0)
					Q.push(i);
			}
		}
	}
	
	return 0;
}
