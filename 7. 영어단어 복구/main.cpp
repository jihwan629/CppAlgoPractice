#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	char inp [101], res [101];
	
	gets(inp);
	
	int n = 0;
	for(int i = 0; inp[i] != '\0'; i++)
	{
		if(inp[i] != ' ')
		{
			res[n++] = 
				(inp[i] >= 'A' && inp[i] <= 'Z') ? 
					inp[i] + ('a' - 'A') : inp[i];
		}
	}
	
	res[n] = '\0';
	cout << res;
	
	return 0;
}
