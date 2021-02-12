#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

void Recur(int x)
{
	if(x == 0) return;
	Recur(x - 1);
	printf("%d ", x);
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N;
	scanf("%d", &N);
	Recur(N);
	return 0;
}
