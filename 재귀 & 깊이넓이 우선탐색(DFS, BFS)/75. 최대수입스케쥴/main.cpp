#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

struct Lec
{
	int M, D;
	
	Lec(int m, int d)
	{
		M = m;
		D = d;
	}
	
	bool operator<(const Lec &l) const
	{
		if(D != l.D) return D > l.D;
		else return M > l.M;
	}
};

int main(int argc, char** argv) {
	//freopen("input.txt","rt", stdin);

	int N;
	scanf("%d", &N);
	
	int d, m;
	vector<Lec> vec;
	priority_queue<int> Q;
	for(int i = 0; i < N; i++)
	{
		scanf("%d %d", &d, &m);
		vec.push_back(Lec(d, m));
	}
	
	sort(vec.begin(), vec.end());
	
	int date = vec[0].D, ans = 0, cnt = 0;
	for(int i = date; i > 0; i--)
	{
		while(cnt < vec.size() && 
				vec[cnt].D == i)
		{
			Q.push(vec[cnt++].M);
		}
		
		if(!Q.empty())
		{
			ans += Q.top();
			Q.pop();
		}
	}
	
	printf("%d", ans);
	return 0;
}
