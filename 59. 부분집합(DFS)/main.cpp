#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int N;
bool arr [11] = {false};

void DFS(int cnt)
{
	if(cnt == N) 
	{
		for(int i = 0; i < N; i++)
		{
			if(!arr[i]) printf("%d ", i + 1);
		}
		printf("\n");
		return;
	}
	
	arr[cnt] = false;
	DFS(cnt + 1);
	arr[cnt] = true;
	DFS(cnt + 1);
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d", &N);

	DFS(0);
	return 0;
}
