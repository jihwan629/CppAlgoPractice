#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int parent [1001] = {0};

int Find(int x)
{
	if(parent[x] == x) return x;
	else return parent[x] = Find(parent[x]);
}

void Union(int a, int b)
{
	a = Find(a);
	b = Find(b);
	if(a != b) parent[a] = b;
}

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int N, M;
	scanf("%d %d", &N, &M);
	
	for(int i = 1; i <= N; i++)
	{
		parent[i] = i;
	}
	
	int a, b;
	for(int i = 0; i < M; i++)
	{
		scanf("%d %d", &a, &b);
		Union(a, b);
	}
	
	scanf("%d %d", &a, &b);
	a = Find(a);
	b = Find(b);
	if(a == b) printf("YES");
	else printf("NO");
	return 0;
}
