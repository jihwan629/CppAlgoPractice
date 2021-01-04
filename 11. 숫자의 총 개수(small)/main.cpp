#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	int inp, ans = 0;
	cin >> inp;
	
	for(int i = 1; i <= inp; i++)
	{
		int temp = i;
		while(temp != 0)
		{
			ans ++;
			temp /= 10;
		}
	}
	
	cout << ans;
	
	return 0;
}
