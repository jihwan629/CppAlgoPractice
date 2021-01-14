#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	int inp, cnt = 1, num = 9, sum = 9, ans = 0;
	cin >> inp;
	
	while(inp >= sum)
	{
		ans += cnt * num;
		cnt ++;
		num *= 10;
		sum += num;
	}
	
	/*
	cout << ans  << " + " 
		<< (inp - sum / 10) << " * "
		<< cnt
		<< endl;
	*/
		
	ans += (inp - sum / 10) * cnt;
	
	cout << ans;
	
	return 0;
}
