#include <iostream>

using namespace std;

int a[10],book[10],n;

void dfs(int step){//step��ʾվ�ڵڼ�������ǰ��
    int i;
    if(step == n+1){
        for(i=1;i<=n;i++)cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    for(i=1;i<=n;i++){
        if(book[i] ==0){//���i���˿���������
            a[step]=i;//��i���˿��Ʒ��뵽��step����������
            book[i]=1;
            dfs(step+1);
            book[i]=0;
        }
    }
    return;

}
int main()
{
    cin>>n;
    dfs(1);
    return 0;
}
