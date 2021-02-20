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
	map<char, int> ch;
	map<char, int>::iterator it;
	
	scanf("%s", &inp);
	
	for(int i = 0; inp[i] != '\0'; i++)
	{
		ch[inp[i]]++;
	}
	
	for(it = ch.begin(); it != ch.end(); it++)
	{
		printf("%c : %d\n", 
				it->first, it->second);
	}
	
	return 0;
}
