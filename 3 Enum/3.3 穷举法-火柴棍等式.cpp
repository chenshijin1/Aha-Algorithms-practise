#include <iostream>

using namespace std;

const int OPERATOR=4;
int sum=0;
int xtonum(int x){
	int num=0;
	int f[10]={6,2,5,5,4,5,6,3,7,6};
	while (x / 10 != 0) {
		num += f[x % 10];
		x/=10;
	}
	num += f[x];
	return num;
}

int main() {

	int numofmatches=18;
	cin >> numofmatches;
	for (int a = 0; a < 1111; ++a) {
		for (int b = 0; b < 1111; ++b) {
			int c=a+b;
			int numofa = xtonum(a);
			int numofb = xtonum(b);
			int numofc = xtonum(c);
			if (numofa + numofb + OPERATOR + numofc == 24) {
				cout<<a<<"+"<<b<<"="<<c<<endl;
				sum++;
			}

		}
	}
	cout<<"一共可以拼出"<<sum<<"个不等式"<<endl;
	return 0;
}

/*
测试数据
18
*/