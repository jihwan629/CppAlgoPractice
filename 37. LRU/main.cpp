#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int s, n;
	scanf("%d %d", &s, &n);

	int arr [s] = {0};
	int tmp;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		
		int pos = -1;
		
		for(int i = 0; i < s; i++)
		{
			if(arr[i] == 0) break;
			if(arr[i] == tmp) 
			{
				pos = i;
				break;
			}
		}

		for(int i = ((pos < 0) ? s : pos) - 1;
				i >= 0; i --)
		{
			arr[i + 1] = arr[i];
		}
		arr[0] = tmp;
		
	}
	
	for(int i = 0; i < s; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
