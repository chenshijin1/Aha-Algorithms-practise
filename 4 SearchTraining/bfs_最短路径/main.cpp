#include <iostream>

using namespace std;
//bfs ֻҪһ�ҵ�·��������Ȼ�����
struct node{
    int x;
    int y;
    int f;//�����ڶ����еı�ţ�����·�����
    int s;//����
};

int main()
{
    struct node que[2501];

    int a[51][51]={0},book[51][51]={0};

    int next[4][2]={{0,1},//right
                    {1,0},//down
                    {0,-1},//left
                    {-1,0} };//up
    int head,tail;
    int i,j,k,n,m,startx,starty,p,q,tx,ty,flag;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)cin>>a[i][j];
    }
    cin>>startx>>starty>>p>>q;

    //queue init
    head=1;
    tail=1;
    que[tail].x =startx;
    que[tail].y =starty;
    que[tail].f =0;
    que[tail].s =0;
    tail++;
    book[startx][starty] =1;

    flag=0;//��������Ƿ�ﵽĿ��㣬0��ʾ��ʱ��û�У�1��ʾ����
    while(head<tail){
        //ö��4������
        for(k=0;k<=3;k++){
            tx =que[head].x +next[k][0];
            ty =que[head].y +next[k][1];
            if(tx<1 ||tx>n ||ty<1 || ty>m)continue;
            if(a[tx][ty] ==0 &&book[tx][ty] ==0){
                //���������Ϊ�Ѿ��߹�������ÿ����ֻ���һ��
                book[tx][ty] =1;
                que[tail].x =tx;
                que[tail].y =ty;
                que[tail].f =head; //��Ϊ������Ǵ�head��չ�������������ĸ��ڵ���head
                que[tail].s = que[head].s+1;
                tail++;
            }
            //���Ŀ��㵽�ˣ�ֹͣ��չ
            if(tx ==p &&ty ==q){
                flag =1;
                break;
            }
        }
        if(flag ==1)break;
        head++;//��һ������չ����֮��head++���ܶԺ���ĵ������չ
    }
    cout<<que[tail-1].s<<endl;
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
