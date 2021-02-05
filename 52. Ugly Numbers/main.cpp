#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int arr [1501];	
int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);
	
	int N;
	scanf("%d", &N);
	
	int p2 = 1, p3 = 1, p5 = 1;
	
	arr[1] = 1;
	for(int i = 2; i <= N; i++)
	{
		int tmp = min(
			min(arr[p2] * 2, arr[p3] * 3),
			arr[p5] * 5);
		
		arr[i] = tmp;
		
		if(tmp == arr[p2] * 2) p2++;
		if(tmp == arr[p3] * 3) p3++;
		if(tmp == arr[p5] * 5) p5++;
	}
	
	printf("%d ", arr[N]);
	return 0;
}
