//#include<iostream>
//using namespace std;
//int yue(int x, int y);
//int bei(int x, int y);
//int main() {
//	int a, b;
//	cin >> a >> b;
//	cout <<"���������Լ��Ϊ"<< yue(a, b)<<endl<<"��С������Ϊ"<<bei(a,b) << endl;
//	return 0;
//}
//int yue(int x, int y) {
//	int z;
//	while (x % y != 0) {
//		z = x % y;
//		x = y;
//		y = z;
//	}
//	return y;
//}
//int bei(int x, int y) {
//	int z;
//	z = x * y / yue(x, y);
//	return z;
//}