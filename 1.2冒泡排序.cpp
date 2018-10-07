#include <iostream>
#include<algorithm>

using namespace std;

int n;

int main() {
    n = 5;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; ++i) {//n个数排序，只用n-1趟
        for (int j = 0; j < n - i - 1; ++j) {
            //小的数往后移
            if (a[j] < a[j + 1]) swap(a[j], a[j + 1]);
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;

}

/*
测试数据
10
8 100 50 22 15 6 1 1000 999 0
*/