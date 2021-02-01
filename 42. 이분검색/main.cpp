#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N, k;
	scanf("%d", &N);
	scanf("%d", &k);
	
	int arr [N];
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	sort(arr, arr + N);

	int left = 0, right = N - 1, ans = 0;
	while(left <= right)
	{
		int mid = (left + right) / 2;

		if(arr[mid] < k) left = mid + 1;
		else if(arr[mid] > k) right = mid - 1;
		else 
		{
			ans = mid;
			break;
		}
	}
	
	printf("%d", ans + 1);
	return 0;
}
