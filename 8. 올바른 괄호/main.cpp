#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	char inp [31];
	int num = 0;
	
	gets(inp);
	
	for(int i = 0; inp[i] != '\0'; i++)
	{
		if(inp[i] == '(') num++;
		else 
		{
			if (num == 0) 
			{
				num = -1;
				break;
			}
			else num--;
		}
		
		// cout << inp[i] << " : " << num << endl;
	}
	
	if(num == 0) cout << "YES";
	else cout << "NO";
	
	return 0;
}
