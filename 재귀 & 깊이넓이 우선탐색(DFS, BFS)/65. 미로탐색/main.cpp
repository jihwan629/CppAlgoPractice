#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int maze [7][7] = {0, }, ans = 0;
int idir [] = {-1, 1, 0, 0};
int jdir [] = {0, 0, -1, 1};

void DFS(int i, int j)
{
	if(i == 6 && j == 6)
	{
		ans++;
		return;
	}

	for(int d = 0; d < 4; d++)
	{
		int ii = i + idir[d];
		int jj = j + jdir[d];
		
		if(i < 0 || j < 0) continue;
		if(i > 6 || j > 6) continue;
		
		if(maze[ii][jj] == 0) 
		{
			maze[ii][jj] = 1;
			DFS(ii, jj);
			maze[ii][jj] = 0;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	for(int i = 0; i < 7; i++)
	{
		for(int j = 0; j < 7; j++)
		{
			scanf("%d", &maze[i][j]);
		}
	}
	
	maze[0][0] = 1;
	DFS(0, 0);
	printf("%d", ans);
	return 0;
}
