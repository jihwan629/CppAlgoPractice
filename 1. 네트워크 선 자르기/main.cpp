#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("input.txt","rt", stdin);
	
	int N;
	cin >> N;
	
	int dy [N + 1];
	dy[1] = 1;
	dy[2] = 2;
	
	for(int i = 3; i <= N; i++)
	{
		dy[i] = dy[i - 1] + dy[i - 2];
	}
	
	cout << dy[N];
	return 0;
}
