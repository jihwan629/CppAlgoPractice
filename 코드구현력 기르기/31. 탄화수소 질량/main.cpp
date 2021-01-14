#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	char arr [10];
	scanf("%s", &arr);
	
	int a = 0, b = 0;
	int cnt = 0;
	for(int i = 1; arr[i] != '\0'; i++)
	{
		if(arr[i] == 'H') 
		{
			a = cnt;
			cnt = 0;
			continue;
		}
		
		cnt = cnt * 10 + arr[i] - '0';
	}
	b = cnt;
	
	printf("%d", 
		((a > 0) ? a : 1)  * 12 
		+ ((b > 0) ? b : 1));
	
	return 0;
}
