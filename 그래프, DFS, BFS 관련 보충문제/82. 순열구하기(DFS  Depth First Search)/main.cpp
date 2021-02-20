#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, R, ans = 0;
int arr[16] = {0}, res[16] = {0};
bool ch [16] = {false};

void DFS (int cnt)
{
	if(cnt == R)
	{
		for(int i = 0; i < R; i++)
		{
			printf("%d ", res[i]);
		}
		printf("\n");
		
		ans++;
		return;
	}
	
	for(int i = 0; i < N; i++)
	{
		
		if(!ch[i])
		{
			ch[i] = true;
			res[cnt] = arr[i];
			DFS(cnt + 1);
			ch[i] = false;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d %d", &N, &R);

	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	DFS(0);
	printf("%d", ans);
	return 0;
}
