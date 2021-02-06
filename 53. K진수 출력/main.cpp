#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N, K;
	scanf("%d %d", &N, &K);
	
	int stack [10] = {0};
	
	int top = 0;
	while(N > 0)
	{
		stack[top++] = N % K;
		N /= K;
	}
	
	for(int i = top - 1; i >= 0; i--)
	{
		if(stack[i] > 9)
			printf("%c", 'A' + stack[i] - 10);
		else
			printf("%d", stack[i]);
	}
	
	return 0;
}
