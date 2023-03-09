#include <bits/stdc++.h>
using namespace std;
int N, K;
int X[100];
void inkq()
{
	for (int i = 1; i <= K; i++) cout << char(X[i] + 96) << " ";
	cout << endl;
}
void tohop(int i)
{
	for(int j = X[i - 1] + 1; j <= N - K + i; j++)
	{
		X[i] = j;
		if(i == K) inkq();
		else tohop(i + 1);
	}
}

int main ()
{
	cin >> N >> K;
	X[0] = 0;
	tohop(1);
	return 0;
}
