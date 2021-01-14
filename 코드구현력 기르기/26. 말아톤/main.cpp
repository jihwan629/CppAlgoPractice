#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int n;
	scanf("%d", &n);
	
	int skill [n];
	int res [n];
	
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &skill[i]);
		res[i] = 1;
		
		for(int j = 0; j < i; j++)
		{
			if(skill[j] >= skill[i]) res[i]++;
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		printf("%d ", res[i]);
	}
	
	return 0;
}
