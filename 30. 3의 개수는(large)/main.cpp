#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	int res = 0;
	int lt, cur, rt, k = 1;
	
	while(n / k != 0)
	{
		lt = n / (k * 10);
		cur = n / k % 10;
		rt = n % k;

		if (cur > 3) 
			res += (lt + 1) * k;
		else if (cur < 3) 
			res += lt * k;
		else if (cur == 3) 
			res += lt * k + (rt + 1);
		
		k *= 10;
	}

	printf("%d", res);
	
	return 0;
}
