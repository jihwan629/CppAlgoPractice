#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	
	scanf("%d", &n);
	
	int arr [n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int max = arr[n - 1], res = 0;
	for(int i = n - 2; i >= 0; i--)
	{
		if(max < arr[i])
		{
			max = arr[i];
			res++;
		}
	}
	
	printf("%d", res);
	
	return 0;
}
