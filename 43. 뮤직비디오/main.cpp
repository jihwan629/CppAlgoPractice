#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N, M;
	scanf("%d", &N);
	scanf("%d", &M);
	
	int arr [N];
	int sum = 0, max = INT_MIN;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		max = min(max, arr[i]);
	}
	
	int left = 1, right = sum, ans = 0;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		
		int cnt = 1, amount = 0;
		for(int i = 0; i < N; i++)
		{
			if(amount + arr[i] > mid)
			{
				cnt++;
				amount = arr[i];
			}
			else amount += arr[i];
		}
		
		if(mid >= max && cnt <= M) 
		{
			ans = mid;
			right = mid - 1;
		}
		else if(cnt > M) left = mid + 1;
	}
	
	printf("%d", ans);
	return 0;
}
