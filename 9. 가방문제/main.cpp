#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	int N, M;
	cin >> N >> M;
	
	vector <int > dy (M + 1, 0);
	
	int W, P;
	for(int i = 0; i < N; i++)
	{
		cin >> W >> P;
		
		for(int j = W; j <= M; j ++)
		{
			dy[j] = max(dy[j], dy[j - W] + P);
		}
	}

	cout << dy[M];
	return 0;
}
