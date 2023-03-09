#include <bits/stdc++.h>
using namespace std;
int N, K;
int X[100];
bool used[100] = {false};
void inkq()
{
	for (int i = 1; i <= N; i++) cout << char(X[i] + 96) << " ";
	cout << endl;
}
void tohop(int i)
{
	for(int j = 1; j <= N; j++)
	{
		if(!used[j])
		{
		used[j] = true;
		X[i] =  j;
		if(i == N) inkq();
		else tohop(i + 1);
		used[j] = false;
	}
	}
}

int main ()
{
	cin >> N;
	X[0] = 0;
	tohop(1);
	return 0;
}
