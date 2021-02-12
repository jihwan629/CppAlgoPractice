#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int N, K;
	scanf("%d %d", &N, &K);

	queue <int > Q;
	
	for(int i = 1; i <= N; i++)
	{
		Q.push(i);
	}
	
	int x, tmp, cnt = 0;
	while(Q.size() > 1)
	{
		x = Q.front();
		Q.pop();
		
		cnt++;
		
		if(cnt == K) cnt = 0;
		else Q.push(x);
	}
	
	printf("%d", Q.front());
	
	return 0;
}
