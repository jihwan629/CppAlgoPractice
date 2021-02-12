#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int N, arr [11], total = 0;
bool ans = false;

void DFS(int cnt, int sum)
{
	if(ans) return;
	
	if(cnt == N) 
	{
		if(total == sum * 2) ans = true;
		return;
	}
	
	DFS(cnt + 1, sum);
	DFS(cnt + 1, sum + arr[cnt]);
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	
	DFS(0, 0);
	
	if(ans) printf("YES");
	else printf("NO");
	return 0;
}
