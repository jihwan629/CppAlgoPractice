#include <iostream>
#include <string>

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
	
	scanf("%d", &m);

	int arr2 [m];
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	
	int res[n + m] = {0};
	
	int cnt1 = 0, cnt2 = 0, cnt = 0;

	while(cnt1 < n && cnt2 < m)
	{
		if(arr1[cnt1] < arr2[cnt2])
			res[cnt++] =  arr1[cnt1++];
		else
			res[cnt++] =  arr2[cnt2++];
	}

	while(cnt1 < n) 
		res[cnt++] =  arr1[cnt1++];
	while(cnt2 < m) 
		res[cnt++] =  arr2[cnt2++];
	
	for(int i = 0; i < n + m; i++)
	{
		printf("%d ", res[i]);
	}
	
	return 0;
}
