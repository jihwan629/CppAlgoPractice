#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	
	scanf("%d", &n);
	
	int A[n], B[n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &B[i]);
	}
	
	for(int i = 0; i < n; i++)
	{
		if(A[i] == B[i])
		{
			printf("D\n");
			continue;
		}
		
		if(A[i] == 1)
		{
			if(B[i] == 2)
			{
				printf("B\n");
				continue;
			}
			else if(B[i] == 3)
			{
				printf("A\n");
				continue;
			}
		}else if(A[i] == 2)
		{
			if(B[i] == 3)
			{
				printf("B\n");
				continue;
			}
			else if(B[i] == 1)
			{
				printf("A\n");
				continue;
			}
		}else if(A[i] == 3)
		{
			if(B[i] == 1)
			{
				printf("B\n");
				continue;
			}
			else if(B[i] == 2)
			{
				printf("A\n");
				continue;
			}
		}
	}
	
	return 0;
}
