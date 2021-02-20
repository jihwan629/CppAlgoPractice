#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	char inp [101];
	map<string, int> ch;
	map<string, int>::iterator it;
	
	int N;
	scanf("%d", &N);
	
	string tmp;
	for(int i = 0; i < N; i++)
	{
		scanf("%s", inp);
		tmp = inp;
		ch[tmp]++;
	}
	
	for(it = ch.begin(); it != ch.end(); it++)
	{
		printf("%s : %d\n", 
				it->first.c_str(), it->second);
	}
	
	return 0;
}
