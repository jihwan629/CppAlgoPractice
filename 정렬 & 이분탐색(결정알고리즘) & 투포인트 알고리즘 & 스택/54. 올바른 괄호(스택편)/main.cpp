#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	stack<char> st;
	char arr [31];
	
	scanf("%s", &arr);
	
	for(int i = 0; arr[i] != '\0'; i++)
	{
		if(arr[i] == '(') st.push(arr[i]);
		else
		{
			if(st.empty())
			{
				printf("NO");
				return 0;
			}
			st.pop();
		}
	}
	
	if(!st.empty())
	{
		printf("NO");
		return 0;
	}
	
	printf("YES");
	return 0;
}
