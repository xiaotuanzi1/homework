#include<iostream>
using namespace std;
int fac(int n) {
	int a;
	if (n < 0) {
		cout << "n<0" << endl;
	}
	if (n == 1 || n == 0) a = 1;
	else a = n * fac(n - 1);
	return a;
}
int main() {
	int a, b, c;
	cout << "���������������������ǵĽ׳�֮��" << endl;
	cin >> a >> b >> c;
	cout <<"a��+b��+c��="<< fac(a) + fac(b) + fac(c) << endl;
	return 0;
}