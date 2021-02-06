#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	stack<int> st;
	int N;
	char ans [61];
	
	scanf("%d", &N);
	
	int temp, cnt = 1, ans_num = 0;
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &temp);
		st.push(temp);
		ans[ans_num++] = 'P';

		while(!st.empty() && st.top() == cnt)
		{
			st.pop();
			ans[ans_num++] = 'O';
			cnt++;
		}
	}
	
	if(!st.empty()) printf("impossible");
	else 
	{
		for(int i = 0; i < ans_num; i++)
		{
			printf("%c", ans[i]);
		}
	}
	return 0;
}
