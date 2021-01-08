#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int A [10], B[10];
	
	for(int i = 0; i < 10; i ++)
	{
		scanf("%d", &A[i]);
	}
	
	for(int i = 0; i < 10; i ++)
	{
		scanf("%d", &B[i]);
	}
	
	int a = 0, b = 0;
	int aWin = -1;
	for(int i = 0; i < 10; i ++)
	{
		if(A[i] > B[i]) 
		{
			a += 3;
			aWin = 1;
		}
		else if(A[i] < B[i]) 
		{
			b += 3;
			aWin = 0;
		}
		else
		{
			a++;
			b++;
		}
	}
	
	printf("%d %d\n", a, b);
	if(a > b) printf("A");
	else if(a < b) printf("B");
	else
	{
		if(aWin == 1) printf("A");
		else if(aWin == 0) printf("B");
		else printf("D");
	}
	
	return 0;
}
