#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);
	
	string s;
	cin >> s;
	
	int res = 0;
	for(int i = 0; i < s.length(); i++)
	{
		char c = s.at(i);
		
		if(c >= '0' && c <= '9')
		{
			if(i == 0 && c == '0') continue;
			
			res = res * 10 + (c - '0');
		}
	}
	
	int num = 0;
	for(int i = 1; i <= res; i++)
	{
		if(res % i == 0) num ++;
	}
	
	cout << res << " " << num << endl;
	
	return 0;
}
