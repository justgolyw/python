#include <stdio.h>
#include <string.h>

#define maxn 100000+5

int main()
{
    int N,ai[maxn],bi[maxn],ci[maxn];
    long long up;
    while(scanf("%d",&N)==1)
    {
        if(N==0)
            break;
        memset(ai,0,sizeof(ai));
        memset(bi,0,sizeof(bi));
        memset(ci,0,sizeof(ci));

        int n,a,b,c,m;
        scanf("%d %d",&m,&n);

        for(int j=0;j<m;j++)
        {
            scanf("%d %d %d",&a,&b,&c);
            bi[a]=bi[a]+c;
            bi[b+1]=bi[b+1]-c;

        }
        ci[1]=bi[1];
        for(int i=2;i<=N;i++)
        {
          bi[i]=bi[i-1]+bi[i];
        //  printf("bi[%d]=%d\n",i,bi[i]);
          ci[i]=ci[i-1]+bi[i]+ci[i];
        // printf("ci[%d]=%d\n",i,ci[i]);
        }
        for(int i=0;i<n;i++)
        {
            up=0;
            scanf("%d %d",&a,&b);
            up=ci[b]-ci[a-1];
            printf("%lld\n",up);
        }



    }
    return 0;
}
