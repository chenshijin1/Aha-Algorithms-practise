#include <iostream>
#include <queue>
using namespace std;

int secret[11]={0,6,3,1,7,5,8,9,2,4};
queue<int> q;
queue<int> herQQ;

void decode(){
    while (!q.empty()) {
        herQQ.push(q.front());
        q.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {


    for (int i = 1; i <=11; ++i) {
        q.push(secret[i]);
    }

    decode();

    while(!herQQ.empty()){
        cout << herQQ.front();
        herQQ.pop();
    }

    return 0;
}

/*
测试数据
 0 6 3 1 7 5 8 9 2 4
*/