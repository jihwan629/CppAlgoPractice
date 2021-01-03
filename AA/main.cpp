#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int n, m, i, sum = 0;
	cin >> n >> m;
	
	for(i = 1; i <= n; i++)
	{
		if(i%m==0)
		{
			sum += i;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
