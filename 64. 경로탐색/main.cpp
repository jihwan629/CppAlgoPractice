#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int N, M, ans = 0;
vector< vector <int> > vec;
bool flag [21] = {false};

void DFS(int cnt)
{
	if(cnt == N - 1)
	{
		ans++;
		return;
	}

	for(int i = 0; i < N; i++)
	{
		if(!flag[i] && vec[cnt][i] == 1) 
		{
			flag[i] = true;
			DFS(i);
			flag[i] = false;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &N, &M);
	
	vec.assign(N, vector<int>(N, 0));
		
	int i, j;
	for(int k = 0; k < M; k++)
	{
		scanf("%d %d", &i, &j);
		vec[i - 1][j - 1] = 1;
	}

	flag[0] = true;
	DFS(0);
	printf("%d", ans);
	return 0;
}
