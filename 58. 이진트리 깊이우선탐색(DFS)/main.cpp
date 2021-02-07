#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

void PreOrder(int x, int N)
{
	if(x > N) return;
	printf("%d ", x);
	PreOrder(x * 2, N);
	PreOrder(x * 2 + 1, N);
}

void InOrder(int x, int N)
{
	if(x > N) return;
	InOrder(x * 2, N);
	printf("%d ", x);
	InOrder(x * 2 + 1, N);
}

void PostOrder(int x, int N)
{
	if(x > N) return;
	PostOrder(x * 2, N);
	PostOrder(x * 2 + 1, N);
	printf("%d ", x);
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N;
	scanf("%d", &N);
	
	printf("전위순회 출력 : ");
	PreOrder(1, N);
	printf("\n");
	
	printf("중위순회 출력 : ");
	InOrder(1, N);
	printf("\n");
	
	printf("후위순회 출력 : ");
	PostOrder(1, N);
	printf("\n");
	
	return 0;
}
