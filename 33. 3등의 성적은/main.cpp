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
		int idx = i;
		for(int j =  i + 1; j < n; j++)
		{
			if(arr[idx] < arr[j]) 
				idx = j;
			else if(arr[idx] == arr[j])
				arr[j] = INT_MIN;
		}
		
		int temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
		
		if(i == 2) break;
	}
	
	printf("%d ", arr[2]);
	
	return 0;
}
