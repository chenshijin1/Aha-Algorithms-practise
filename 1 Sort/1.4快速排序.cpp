#include <iostream>
#include <algorithm>

using namespace std;

int n;
int a[11];

void quicksort(int left, int right){
    int i, j, t, temp;
    if (left > right) {
        return;
    }
    i=left;
    j=right;
    temp = a[left];
    while (i != j) {
        //首先，从右往左找
        while (a[j] >= temp && i < j) {
            j--;
        }
        //从左往右找
        while (a[i] <= temp && i < j) {
            i++;
        }
        if (i < j) {
            swap(a[i], a[j]);
        }

    }
    //哨兵与相遇点交换
    swap(a[left], a[i]);
    quicksort(left, i - 1);
    quicksort(i + 1, right);
}

int main() {
    n = 5;
    cin>>n;
    for (int i = 1; i <=n; ++i) {
        cin >> a[i];
    }

    quicksort(1, n);

    for (int i = 1; i <=n; ++i) {
        cout << a[i] << " ";
    }

    return 0;

}

/*
测试数据
10
6 1 2 7 9 3 4 5 10 8
*/