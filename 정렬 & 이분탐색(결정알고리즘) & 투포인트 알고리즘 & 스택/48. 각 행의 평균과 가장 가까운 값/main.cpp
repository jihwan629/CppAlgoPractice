#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int arr [9][9] = {0};
	
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(int i = 0; i < 9; i++)
	{
		double sum = 0;
		for(int j = 0; j < 9; j++)
		{
			sum += arr[i][j];
		}
		
		sum /= 9;
		int avg = (sum - (int)sum > 0.5) ?
					sum + 1 : sum;
		
		int ans = arr[i][0];
		for(int j = 1; j < 9; j++)
		{
			if(abs(avg - arr[i][j]) <
				abs(ans - avg))
			{
				ans = arr[i][j];
			}
			else if(abs(avg - arr[i][j]) ==
				abs(ans - avg))
			{
				ans = max(ans, arr[i][j]);
			}
		}
		
		printf("%d %d\n", avg, ans);
	}

	return 0;
}
