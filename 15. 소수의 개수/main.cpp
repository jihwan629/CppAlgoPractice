#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	int n, res = 0;
	cin >> n;

	for(int i = 2; i <= n; i++)
	{
		bool flag = false;
		for(int j = 2; j * j <= i; j++)
		{
			if(i % j == 0) 
			{
				flag = true;
				break;
			}
		}
		
		if(!flag) res++;
	}
	
	cout << res;
	
	return 0;
}
