#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int inp;
	cin >> inp;
	
	int arr [inp + 1] {0};
	
	for(int i = 1; i <= inp; i++)
	{
		for(int j = i; j <= inp; j += i)
		{
			arr[j]++;
		}
	}
	
	for(int i = 1; i <= inp; i++)
	{
		cout << arr[i] << " ";
	}
	
	return 0;
}
