#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

// D E M N O R S Y
int N = 10, R = 8;
int arr[8] = {0};
bool ch [10] = {false};

int send()
{
	return arr[6] * 1000 + 
			arr[1] * 100 + 
			arr[3] * 10 + 
			arr[0] * 1;
}

int more()
{
	return arr[2] * 1000 + 
			arr[4] * 100 + 
			arr[5] * 10 + 
			arr[1] * 1;
}

int money()
{
	return arr[2] * 10000 + 
			arr[4] * 1000 + 
			arr[3] * 100 + 
			arr[1] * 10 +
			arr[7] * 1;
}

void DFS (int cnt)
{
	if(cnt == R)
	{
		if(send() + more() == money())
		{
			if(arr[6] == 0 || arr[2] == 0)
				return;
				
			printf("%d + %d = %d\n",
					send(), more(), money());
		}
		return;
	}
	
	for(int i = 0; i < N; i++)
	{
		if(!ch[i])
		{
			ch[i] = true;
			arr[cnt] = i;
			DFS(cnt + 1);
			ch[i] = false;
		}
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	DFS(0);
	return 0;
}
