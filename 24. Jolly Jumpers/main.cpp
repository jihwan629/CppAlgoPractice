#include <iostream>
#include <string>

using namespace std;

int abs (int n)
{
	if(n < 0) return n * -1;
	else return n;
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	bool arr [n]= {false};
	
	int pre, temp;
	scanf("%d", &pre);
	for(int i = 1; i < n; i++)
	{
		scanf("%d", &temp);

		if(abs(temp- pre) >= n) 
		{
			printf("NO");
			return 0;
		}

		if(arr[abs(temp- pre)]) 
		{
			printf("NO");
			return 0;
		}
		else arr[abs(temp- pre)] = true;
		
		pre = temp;
	}
	
	printf("YES");
	return 0;
}
