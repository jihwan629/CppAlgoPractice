#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);
	
	int n;
	cin >> n;
	int max = INT_MIN, min = INT_MAX;
	// -2147000000, 2147000000
	
	int temp;
	for(int i = 0; i < n; i++)
	{
		cin >> temp;
		if(temp > max) max = temp;
		if(temp < min) min = temp;
	}
	
	cout << max - min << endl;
	
	return 0;
}
