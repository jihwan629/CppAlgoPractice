#include <bits/stdc++.h>

using namespace std;

int N, dy [46];

int Recur(int cnt)
{
	if(dy[cnt] > 0) return dy[cnt];
	return dy[cnt] = 
		Recur(cnt - 1) + Recur(cnt - 2);
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	dy[1] = 1;
	dy[2] = 2;
	
	cin >> N;
	cout << Recur(N);
	return 0;
}
