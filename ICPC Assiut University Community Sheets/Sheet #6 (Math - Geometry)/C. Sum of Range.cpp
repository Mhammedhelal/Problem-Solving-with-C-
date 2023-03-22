#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

long long sumOdd(long long n) {
	long long res = (n + 1) / 2;
	long long finalRes = res * res;
	return finalRes;
}
long long sumEven(long long n) {
	long long res = (n * (n + 1));
	return res;
}
int main() {
	int a, b;
	cin >> a >> b;
	int start, end;
	start = min(a, b);
	end = max(a, b);
	long long evenRes = sumEven(end / 2) - sumEven((start - 1) / 2);
	long long oddRes = sumOdd(end) - sumOdd(start - 1);
	cout << evenRes + oddRes << endl;
	cout << evenRes << endl;
	cout << oddRes << endl;
}
