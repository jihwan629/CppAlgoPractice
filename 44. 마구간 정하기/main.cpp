#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N, C;
	scanf("%d", &N);
	scanf("%d", &C);
	
	int arr [N];
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr + N);
	
	int left = 1, right = arr[N - 1], ans = 0;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		
		int cnt = 1, pos = arr[0];
		for(int i = 1; i < N; i++)
		{
			if(arr[i] - pos >= mid)
			{
				cnt++;
				pos = arr[i];
			}
		}
		
		if(cnt >= C) 
		{
			ans = mid;
			left = mid + 1;
		}
		else if(cnt < C) right = mid - 1;
	}
	
	printf("%d", ans);
	return 0;
}
