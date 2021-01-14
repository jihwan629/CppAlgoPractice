#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	int res = 0;
	
	for(int i = 1; i < n + 1; i ++)
	{
		int temp = i;
		while(temp != 0)
		{
			if(temp % 10 == 3) res++;
			temp /= 10;
		}
	}

	printf("%d", res);
	
	return 0;
}
