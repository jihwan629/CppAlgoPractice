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

	for(int i = 1; i < n; i ++)
	{
		int tmp = arr[i], j;
		for(j =  i - 1; j >= 0; j--)
		{
			if(arr[j] > tmp) 
				arr[j + 1] = arr[j];
			else 
				break;
		}
		
		arr[j + 1] = tmp;
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
