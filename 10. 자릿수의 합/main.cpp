#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	int inp, temp, res = INT_MIN, ans;
	cin >> inp;

	for(int i = 0; i < inp; i++)
	{
		cin >> temp;

		int num = temp, sum = 0;
		while(temp != 0)
		{
			sum += temp % 10;
			temp /= 10;
		}

		if (res < sum)
		{
			res = sum;
			ans = num;
		} 
		else if (res == sum)
		{
			ans = (ans > num) ? ans : num;
		}
	}
	
	cout << ans;
	
	return 0;
}
