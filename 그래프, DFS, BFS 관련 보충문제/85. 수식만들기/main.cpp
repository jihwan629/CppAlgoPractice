#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int N, maxvalue = INT_MIN, minvalue = INT_MAX;
vector <int > vec;
int oper [4] = {0};

void DFS (int cnt, int sum)
{
	if(cnt == N)
	{
		maxvalue = max(maxvalue, sum);
		minvalue = min(minvalue, sum);
		return;
	}
	
	if(oper[0] > 0)
	{
		oper[0]--;
		DFS(cnt + 1, sum + vec[cnt + 1]);
		oper[0]++;
	}
	
	if(oper[1] > 0)
	{
		oper[1]--;
		DFS(cnt + 1, sum - vec[cnt + 1]);
		oper[1]++;
	}
	
	if(oper[2] > 0)
	{
		oper[2]--;
		DFS(cnt + 1, sum * vec[cnt + 1]);
		oper[2]++;
	}
	
	if(oper[3] > 0)
	{
		oper[3]--;
		DFS(cnt + 1, sum / vec[cnt + 1]);
		oper[3]++;
	}
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	scanf("%d", &N);
	
	int a;
	vec.push_back(0);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &a);
		vec.push_back(a);
	}
	
	for(int i = 0; i < 4; i ++)
	{
		scanf("%d", &oper[i]);
	}

	DFS(1, vec[1]);
	
	printf("%d\n", maxvalue);
	printf("%d\n", minvalue);
	return 0;
}
