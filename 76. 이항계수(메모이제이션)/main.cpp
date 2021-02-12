#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int M[21][21] = {0};

int DFS(int n, int r)
{
	if(n == r ||  r == 0) return 1;
	if(M[n][r] > 0) return M[n][r];
	
	return DFS(n - 1, r - 1) +  DFS(n - 1, r);
}

int main(int argc, char** argv) {
	freopen("input.txt","rt", stdin);

	int N, R;
	scanf("%d %d", &N, &R);
	
	printf("%d", DFS(N, R));
	return 0;
}
