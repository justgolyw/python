#include<stdio.h>
#define maxn 22
int main()
{
    //韩信点兵
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int a[maxn][2],b[maxn];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }//写入数据
        int mn=0;
        for(int i=0;i<n;i++)
        {
            if(a[i][1]==0)
                mn++;
        }
        if(mn==n)
        printf("%d\n",a[n-1][0]);
        else
        {

        int w=1;
        for(int i=0;i<n;i++)
        w=w*a[i][0];
        //printf("w=%d\n",w);//检查w的值是否正确
        for(int i=0;i<n;i++)
        {
            b[i]=w/a[i][0];
            for(int j=1;;j++)
            {
                if((b[i]*j)%a[i][0]==1)
                {
                    b[i]=b[i]*j;
                    break;
                }
            }
         //   printf("%d\n",b[i]);
        }
        int q=0;
        for(int i=0;i<n;i++)
        {
            q=q+b[i]*a[i][1];
        }
        int k;
        k=q%w;
        printf("%d\n",k);
        }
    }
}
