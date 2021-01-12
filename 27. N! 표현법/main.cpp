#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	int res [n + 1] = {0};
	
	for(int i = 2; i < n + 1; i++)
	{
		int temp = i;

		int cnt = 2;
		while(temp != 1)
		{
			if(temp % cnt == 0) 
			{
				res[cnt] ++;
				temp /= cnt;
			}
			else cnt++;
	 	}
	}
	
	printf("%d!= ", n);
	for(int i = 2; i < n + 1; i++)
	{
		if(res[i] != 0)
			printf("%d ", res[i]);
	}
	
	return 0;
}
