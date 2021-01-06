#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	// freopen("input.txt","rt", stdin);

	char inp [102];
	int arr1 ['z' + 1] = {0}, 
		arr2 ['z' + 1] = {0};
		
	scanf("%s", &inp);
	
	for(int i = 0; inp[i] != '\0'; i++)
	{
		arr1[inp[i]] ++;
	}
	
	scanf("%s", &inp);
	
	for(int i = 0; inp[i] != '\0'; i++)
	{
		arr2[inp[i]] ++;
	}

	for(int i = 'A'; i <= 'z'; i++)
	{
		if(arr1[i] != arr2[i]) 
		{
			printf("NO");
			return 0;
		}
	}

	printf("YES");
	return 0;
}
