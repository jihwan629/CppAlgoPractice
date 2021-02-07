#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr [701][701], dp [701][701];
	
int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int H, W, tH, tW;
	scanf("%d %d", &H, &W);

	for(int i = 1; i <= H; i++)
	{
		int tmp = 0;
		for(int j = 1; j <= W; j++)
		{
			scanf("%d", &arr[i][j]);
			dp[i][j] = dp[i - 1][j]
					 + dp[i][j - 1]
					 - dp[i - 1][j - 1]
					 + arr[i][j];
		}
	}
	
	scanf("%d %d", &tH, &tW);
	
	int ans = 0;
	
	for(int i = tH; i <= H; i++)
	{
		for(int j = tW; j <= W; j++)
		{
			int tmp = dp[i][j]
					- dp[i - tH][j]
					- dp[i][j - tW]
					+ dp[i - tH][j - tW];

			ans = max(ans, tmp);
		}
	}
	
	printf("%d", ans);
	return 0;
}
