#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	char inp [101];
	
	gets(inp);
	
	int arr [11] = {0};
	
	for(int i = 0; inp[i] != '\0'; i++)
	{
		arr[inp[i] - '0']++;
	} 
	
	int res = 1, max = INT_MIN;
	
	for(int i = 2; i < 11; i++)
	{
		res = (arr[i] >= arr[res]) ? i : res;
	}
	
	cout << res;
	
	return 0;
}
