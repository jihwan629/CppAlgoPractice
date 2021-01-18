#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n, m;
	scanf("%d", &n);

	int arr1 [n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	
	sort(arr1, arr1 + n);
	
	scanf("%d", &m);

	int arr2 [m];
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	sort(arr2, arr2 + m);
	
	int res[n + m] = {0};
	
	int cnt1 = 0, cnt2 = 0, cnt = 0;

	while(cnt1 < n && cnt2 < m)
	{
		if(arr1[cnt1] == arr2[cnt2])
		{
			res[cnt++] =  arr1[cnt1++];
			cnt2++;
		}
		else if (arr1[cnt1] < arr2[cnt2]) cnt1++;
		else cnt2++;
	}
	
	for(int i = 0; i < cnt; i++)
	{
		printf("%d ", res[i]);
	}
	
	return 0;
}
