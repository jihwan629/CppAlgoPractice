#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int N, M;
	scanf("%d %d", &N, &M);
	
	vector< vector <int> > vec 
		(N, vector<int>(N, 0));
		
	int i, j, tmp;
	for(int k = 0; k < M; k++)
	{
		scanf("%d %d %d", &i, &j, &tmp);
		vec[i - 1][j - 1] = tmp;
	}

	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			printf("%d ", vec[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
