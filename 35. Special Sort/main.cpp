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
	
	for(int i = 0; i < n - 1; i ++)
	{
		for(int j =  0; j < n - i - 1; j++)
		{
			if(arr[j] > 0 && arr[j + 1] < 0)
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}	
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}