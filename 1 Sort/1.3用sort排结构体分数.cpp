#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    char name[10];
    int score;
} stu[6];

int cmp(Student a, Student b) {
    //排在前面的数小
    return a.score < b.score;
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> stu[i].name >> stu[i].score;
    }
    sort(stu + 1, stu + 6, cmp);
    for (int i = 1; i <= n; ++i) {
        cout << stu[i].name << " " << stu[i].score << endl;
    }
    return 0;
}

/*
测试数据
5
huhu 5
haha 3
xixi 5
hengheng 2
gaohou 8
*/