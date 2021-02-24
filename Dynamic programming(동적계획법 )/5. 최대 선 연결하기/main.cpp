#include <bits/stdc++.h>

using namespace std;

int N, inp [1001], dy [1001], ans = 0;

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//freopen("input.txt","rt", stdin);

	cin >> N;
	
	int max;
	for(int i = 1; i <= N; i++)
	{
		cin >> inp[i];
		dy[i] = 1;
	}

	for(int i = 2; i <= N; i++)
	{
		for(int j = i - 1; j > 0; j--)
		{
			if(inp[i] > inp[j])
			{
				dy[i] = std::max
						(dy[i], dy[j] + 1);
			}
		}
		
		ans = std::max(ans, dy[i]);
	}
	
	printf("%d", ans);
	return 0;
}
