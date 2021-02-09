#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int > map [101];
bool flag [101] = {false};
int Q [101] = {0}, front = -1, back = -1;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int a, b;
	for(int i = 0; i < 7; i++)
	{
		scanf("%d %d", &a, &b);
		map[a].push_back(b);
		map[b].push_back(a);
	}
	
	flag[1] = true;
	Q[++back] = 1;
	
	int x, tmp;
	while(front < back)
	{
		x = Q[++front];
		
		for(int i = 0; i < map[x].size(); i++)
		{
			tmp = map[x][i];
			if(!flag[tmp])
			{
				flag[tmp] = true;
				Q[++back] = tmp;
			}
		}
	}
	
	for(int i = 0; i < 7; i++)
	{
		printf("%d ", Q[i]);
	}
	
	return 0;
}
