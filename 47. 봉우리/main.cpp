#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int N;

int idir [] = {-1, 1, 0, 0};
int jdir [] = {0, 0, -1, 1};

int inArr(int i, int j, int **arr)
{
	if(i < 0 || j < 0) return 0;
	if(i > N - 1 || j > N - 1) return 0;
	
	return arr[i][j];
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	scanf("%d", &N);
	
	int **arr = new int *[N];
	for(int i = 0; i < N; i++)
	{
		arr[i] = new int [N];
	}
	
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	int ans = 0;
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			bool flag = false;
			for(int d = 0; d < 4; d++)
			{
				int id = i + idir[d];
				int jd = j + jdir[d];
				
				if(arr[i][j] <= 
					inArr(id, jd, arr))
				{
					flag = true;
					break;
				}	
			}
			
			if(!flag) ans++;
		}
	}
	
	printf("%d", ans);
	
	for(int i = 0; i < N; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}
