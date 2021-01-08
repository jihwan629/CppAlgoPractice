#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n,k;
	
	scanf("%d %d", &n, &k);
	
	int arr [n] = {0};
	int res = INT_MIN, sum = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
		if((i - k) >= 0)
		{
			sum -= arr[i - k];
			res = (res > sum) ? res : sum;
		} 
	}
	
	printf("%d", res);
	
	return 0;
}
