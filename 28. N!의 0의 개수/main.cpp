#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	int arr [6] = {0};
	int fact = 1, res = 0;
	
	for(int i = 2; i < n + 1; i ++)
	{
		int temp = i;
		
		int cnt = 2;
		while(temp != 1)
		{
			if(temp % cnt == 0)
			{
				if(cnt == 2 || cnt == 5)
					arr[cnt]++;
				
				temp /= cnt;
			}
			else
			{
				cnt++;
			}
		}
	}

	printf("%d", (arr[2] < arr[5]) ? arr[2] : arr[5]);
	
	return 0;
}
