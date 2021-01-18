#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	int tmp = n - 1, cnt = 2, res = 0;
	while (tmp > 0)
	{
		if((tmp - cnt) % cnt == 0)
		{
			int a = (tmp - cnt) / cnt;
			
			printf("%d ", a + 1);
			for(int i = 2; i <= cnt; i++)
			{
				printf("+ %d ", a + i);
			}
			
			printf("= %d\n", n);
			
			res++;
		}
		
		tmp -= cnt++;
	}
	
	printf("%d ", res);
	
	return 0;
}
