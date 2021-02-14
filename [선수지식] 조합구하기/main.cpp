#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, R;
int ans[101] = {0};

void DFS (int a, int b)
{
	if(b == R)
	{
		for(int i = 0; i < R; i++)
		{
			printf("%d ", ans[i]);
		}
		printf("\n");
		return;
	}
	
	for(int i = a; i < N; i++)
	{
		ans[b] = i;
		DFS(i + 1, b + 1);
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &N, &R);
	
	DFS(0, 0);
	return 0;
}
