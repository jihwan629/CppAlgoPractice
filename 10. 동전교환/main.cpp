#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	int N, M;
	cin >> N;
	
	vector <int > inp (N, 0);
	
	for(int i = 0; i < N; i++)
	{
		cin >> inp[i];
	}
	
	cin >> M;
	
	vector <int > dy (M + 1, INT_MAX);
	
	dy[0] = 0;
	
	int tmp;
	for(int i = 0; i < N; i++)
	{
		tmp = inp[i];
		for(int j = 1; j <= M; j++)
		{
			if(j - tmp >= 0)
			dy[j] = min(dy[j], dy[j - tmp] + 1);
		}
	}

	cout << dy[M];
	return 0;
}
