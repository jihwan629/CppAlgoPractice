#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	int a, b, i, sum = 0;
	
	cin >> a >> b;
	
	for(i = a; i < b; i++)
	{
		cout << i << " + ";
		sum += i;
	}
	cout << i << " = ";
	cout << sum + i << endl;
	
	return 0;
}
