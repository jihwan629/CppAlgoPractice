#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	
	scanf("%d", &n);
	
	int pre, temp, cnt = 1, res = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		
		if(i == 0)
		{
			pre = temp;
			continue;
		} 
		
		if(temp >= pre) cnt ++;
		else cnt = 1;

		res = (res > cnt) ? res : cnt;
		pre = temp;
	}
	
	printf("%d", res);
	
	return 0;
}
