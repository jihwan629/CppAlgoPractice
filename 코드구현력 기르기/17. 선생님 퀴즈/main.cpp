#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);
	
	int n;
	
	scanf("%d", &n);

	string str [n];
	
	for(int i = 0; i < n; i++)
	{
		int num, ans;
		
		scanf("%d %d", &num, &ans);
		
		int sum = 0;
		for(int j = 1; j <= num; j++)
		{
			sum += j;
		}
		
		if(sum == ans) str[i] = "YES";
		else str[i] = "NO";
	}
	
	for(int i = 0; i < n; i++)
	{
		cout << str[i] << endl;
	}
	
	return 0;
}
