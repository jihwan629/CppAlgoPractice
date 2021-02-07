#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N, K;
	scanf("%d", &N);
	
	int arr [N], sum = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	
	scanf("%d", &K);
	
	if(K >= sum)
	{
		printf("-1");
		return 0;
	}
	
	int cnt = 0, i = -1;
	while(1)
	{
		i++;
		if(i > N - 1) i = 0;
		
		if(cnt == K) break;
		if(arr[i] <= 0) continue;
		
		arr[i]--;
		cnt++;
	}
	
	while(arr[i] <= 0) 
	{
		i++;
		if(i > N - 1) i = 0;
	}
	
	printf("%d", i + 1);
	return 0;
}
