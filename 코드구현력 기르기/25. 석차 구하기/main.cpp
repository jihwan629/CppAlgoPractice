#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	int score [n];
	int res [n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &score[i]);
		res[i] = 1;
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j ++)
		{
			if(score[i] < score[j])
			{
				res[i]++;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", res[i]);
	}
	return 0;
}
