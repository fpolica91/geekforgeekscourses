#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
	long long n, sum;
	cin >> n;
	if (n % 2 == 0)
		sum = (n / 2);
	else
		sum = ((n + 1) / 2) * (-1);
	cout << sum << endl;
	return 0;
}

