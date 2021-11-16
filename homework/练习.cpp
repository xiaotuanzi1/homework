#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << age(n) << endl;
	return 0;
}
int age(int x) {
	int a;
	if (n == 1) a = 1;
	else a = age(x - 1) + 2;
	return a;
}