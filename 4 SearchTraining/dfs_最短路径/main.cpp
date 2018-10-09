#include <iostream>

using namespace std;

int n,m,p,q,minx=9999999999;
int a[51][51],book[51][51];

void dfs(int x,int y,int step){
    int next[4][2]={{0,1},//right
                    {1,0},//down
                    {0,-1},//left
                    {-1,0}//up
                    };
    int tx,ty,k;
    //�ж��Ƿ񵽴�ָ��λ��
    if(x==p && y==q){
        //������Сֵ
        if(step<minx)minx=step;
        return;
    }

    //ö��4���߷�
    for(k=0;k<=3;k++){
        //������һ������
        tx =x+next[k][0];
        ty =y+next[k][1];
        //�ж��Ƿ�Խ��
        if(tx<1 || tx>n || ty<1 || ty>m)continue;
        //�жϸõ��Ƿ�Ϊ�ϰ�������Ѿ���·����
        if(a[tx][ty] ==0 &&book[tx][ty] ==0){
            book[tx][ty] =1;
            dfs(tx,ty,step+1);
            book[tx][ty]=0;
        }
    }

    return;
}
int main()
{
    int i,j,startx,starty;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)cin>>a[i][j];
    }
    cin>>startx>>starty>>p>>q;

    book[startx][starty]=1;
    dfs(startx,starty,0);
    cout<<minx<<endl;
    return 0;
}


/*��������
5 4
0 0 1 0
0 0 0 0
0 0 1 0
0 1 0 0
0 0 0 1
1 1 4 3
*/
