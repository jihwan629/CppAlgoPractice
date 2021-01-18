#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);

	int arr [n + 1], res[n + 1] = {0};
	
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(int i = n; i >= 1; i--)
	{
		int pos = i;
		
		for(int j = 0; j < arr[i]; j++)
		{
			res[pos] = res[pos + 1];
			pos++;
		}
		res[pos] = i;
	}
	
	for(int i = 1; i <= n; i++)
	{
		printf("%d ", res[i]);
	}
	
	return 0;
}
