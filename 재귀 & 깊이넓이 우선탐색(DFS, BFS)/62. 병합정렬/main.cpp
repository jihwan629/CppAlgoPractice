#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int N, lt = 0, rt = 0,
 arr [101], ans [101];

void DFS(int lt, int rt)
{
	if(lt >= rt) return;
	
	int mid = (lt + rt) / 2;
	int p1, p2, p3;

	DFS(lt, mid);
	DFS(mid + 1, rt);
	
	p1 = lt, p2 = mid + 1, p3 = lt;
	
	while(p1 <= mid && p2 <= rt)
	{
		if(arr[p1] < arr[p2])
			ans[p3++] = arr[p1++];
		else
			ans[p3++] = arr[p2++];
	}
	while(p1 <= mid) ans[p3++] = arr[p1++];
	while(p2 <= rt) ans[p3++] = arr[p2++];
	
	for(int i = lt; i <= rt; i++)
	{
		arr[i] = ans[i];
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	DFS(0, N - 1);
	
	for(int i = 0; i < N; i++)
	{
		printf("%d ", ans[i]);
	}
	
	return 0;
}
