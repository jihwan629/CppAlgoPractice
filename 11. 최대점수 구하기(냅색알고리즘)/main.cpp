#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	//cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	int N, M;
	cin >> N >> M;
	
	vector <int > dy (M + 1, 0);
	
	int score, time;
	for(int i = 0; i < N; i++)
	{
		cin >> score >> time;
		
		for(int j = M; j >= time; j--)
		{
			dy[j] = 
				max(dy[j], dy[j - time] + score);
		}
	}

	cout << dy[M];
	return 0;
}
