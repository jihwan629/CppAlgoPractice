#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int H, W, tH, tW;
	scanf("%d", &H);
	scanf("%d", &W);
	
	int arr [H][W] = {0};
	
	for(int i = 0; i < H; i++)
	{
		for(int j = 0; j < W; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	scanf("%d", &tH);
	scanf("%d", &tW);
	
	int ans = 0;
	
	for(int i = 0; i < H - tH + 1; i++)
	{
		for(int j = 0; j < W - tW + 1; j++)
		{
			int tmp = 0;
			for(int h = 0; h < tH; h++)
			{
				for(int w = 0; w < tW; w++)
				{
					tmp += arr[i + h][j + w];
				}
			}
			
			ans = max(ans, tmp);
		}
	}
	
	printf("%d", ans);
	return 0;
}
