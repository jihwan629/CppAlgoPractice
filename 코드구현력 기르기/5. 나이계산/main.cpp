#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);
	
	string s;
	cin >> s;
	
	int curYear = 2019;
	int num = (s.at(0) - '0') * 10 + (s.at(1) - '0');
	
	switch(s[s.find('-') + 1])
	{
		case '1' : 
			cout << curYear - 1900 - num + 1;
			cout << " M";
			break;
		case '2' : 
			cout << curYear - 1900 - num + 1;
			cout << " W";
			break;
		case '3' : 
			cout << curYear - 2000 - num + 1;
			cout << " M";
			break;
		case '4' : 
			cout << curYear - 2000 - num + 1;
			cout << " W";
			break;
	}
	
	return 0;
}
