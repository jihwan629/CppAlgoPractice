#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n, m, res = 0;
	
	scanf("%d %d", &n, &m);
	
	int cur, pre = 0;
	
	int temp, call = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		
		if(temp > m)
		{
			call++;
			
			if(i == n - 1)
				res = ( res > call) ? res : call;
		}
		else
		{
			res = ( res > call) ? res : call;
			call = 0;
		}
	}
	
	if (res == 0) res = -1;
	cout << res;
	return 0;
}
