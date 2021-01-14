#include <iostream>
#include <string>

using namespace std;

int reverse (int x)
{
	int res = 0;
	
	while(x != 0)
	{
		res = res * 10 + x % 10;
		x /= 10;
	}
	
	return res;
}

bool isPrime(int x)
{
	if (x <= 1) return false;

	for(int i = 2; i < x; i++)
	{
		if(x % i == 0) return false;
	}
	
	return true;
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int n;
	cin >> n;
	
	int temp;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		int rev = reverse(temp);
		if(isPrime(rev)) cout << rev << " ";
	}
	
	return 0;
}
