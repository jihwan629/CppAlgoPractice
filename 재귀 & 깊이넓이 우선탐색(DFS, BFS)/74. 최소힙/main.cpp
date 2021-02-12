#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	priority_queue <int > Q;
	
	int inp;
	while(1)
	{
		scanf("%d", &inp);
		
		if(inp == -1) break;
		else if (inp == 0)
		{
			if(Q.empty())
				printf("-1\n");
			else
			{
				printf("%d\n", -Q.top());
				Q.pop();
			}
		}
		else Q.push(-inp);
	}
	
	return 0;
}
