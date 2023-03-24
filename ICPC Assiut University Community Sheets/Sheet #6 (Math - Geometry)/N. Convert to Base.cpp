#include <iostream>
#include <math.h>
#include <string>
using namespace std;

void reverse(string &s)
{
	int i = 0, j = s.size() - 1;
	while (j > i)
	{
		swap(s[i], s[j]);
		i++; j--;
	}
}
string decimalTobase(long long n, int base)
{
	if (n == 0)
		return "0";
	string res;
	while (n != 0)
	{
		if((n % base) > 9)
			res.push_back((n % base) + 55);
		else
			res.push_back((n % base) + '0');
		n /= base;
	}
	reverse(res);

	return res;
}
long long baseTodecimal(string n, int base)
{
	long long dec = 0, p = 0;
	for (int i = n.size() - 1; i >= 0; i--)
	{
		if (n[i] > 64)
			dec += (n[i] - 55) * pow(base, p);
		else 
			dec += (n[i] - 48) * pow(base, p);
		p++;
	}
	return dec;
}

int main()
{
	int t, x;
	string n;
	cin >> t >> n >> x;
	
	if (t == 1)
		cout << baseTodecimal(n, x);
	else
	{
		int z = 0, j = 1;
		for (int i = n.size()-1; i >= 0; i--)
		{
			z += int(n[i] - 48) * j;
			j *= 10;
		}
		cout << decimalTobase(z, x);
	}
	
	return 0;
}

