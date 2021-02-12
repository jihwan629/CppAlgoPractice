#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int check [10001] = {0};
int dist [] = {-1, 1, 5};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int S, E;
	scanf("%d %d", &S, &E);

	queue <int > Q;
	Q.push(S);
	
	int x, tmp;
	while(!Q.empty())
	{
		x = Q.front();
		Q.pop();
		
		for(int i = 0; i < 3; i++)
		{
			tmp = x + dist[i];
			
			if(tmp < 1 && tmp > 1000) 
				continue;
			
			if(check[tmp] == 0)
			{
				check[tmp] = check[x] + 1;
				Q.push(tmp);
			}
			
			if(tmp == E)
			{
				printf("%d", check[tmp]);
				return 0;
			}
		}
	}
	
	return 0;
}
