#include <iostream>

using namespace std;

int main() {
    int book[1001] = {0};
    int i, j, t;
    int n = 0, maxNum = 1000;
    //n是输入数据的个数，maxNum是输入数据的最大值
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        book[t]++;
    }
    for (int i = maxNum; i >= 0; --i) {
        while (book[i] != 0) {
            cout << i << " ";
            book[i]--;
        }
    }

    return 0;
}

/*
测试数据
10
8 100 50 22 15 6 1 1000 999 0
*/
