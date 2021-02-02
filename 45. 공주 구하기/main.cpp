#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N, K;
	scanf("%d", &N);
	scanf("%d", &K);
	
	int i = 1, cnt = 0, sum = 1;
	bool arr [N + 1] = {false};
	
	while(cnt < N - 1)
	{
		if(i > N) i -= N;
		
		if(arr[i])
		{
			i++;
			continue;
		}
		
		if(sum == K)
		{
			sum = 0;
			arr[i] = true;
			cnt++;
		}

		i++;
		sum++;
	}
	
	for(int i = 1; i <= N; i++)
	{
		if(!arr[i])
		{
			printf("%d", i);
			break;
		}
	}

	return 0;
}
