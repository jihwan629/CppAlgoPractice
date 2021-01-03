#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int n, sum = 0;
	
	cin >> n;
	
	for(int i = 1; i < n; i ++)
	{
		if(n % i == 0)
		{
			if(i == 1)
				cout << i;
			else
				cout << " + " << i;
			sum += i;
		}	
	}
	cout << " = " << sum << endl;
	return 0;
}
