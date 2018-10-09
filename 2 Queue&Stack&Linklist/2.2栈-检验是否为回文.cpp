#include <iostream>
#include <string.h>

using namespace std;

int main() {

    char a[101], s[101];
    int i, ken, mid, next, top;

    gets(a);
    int len = strlen(a);
    cout << "len " << strlen(a) << endl;
    //从0开始计数
    mid = len / 2 - 1;

    top = 0;
    for (int i = 0; i <= mid; ++i) {
        s[++top] = a[i];
    }

    if (len % 2 == 0) {
        next = mid + 1;
    } else {
        next = mid + 2;
    }

    for (int i = next; i < len; ++i) {
        if (a[i] != s[top]) {
            break;
        }
        --top;
    }

    if (top == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

/*
测试数据
ahaha
*/