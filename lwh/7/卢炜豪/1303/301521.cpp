#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d",&n)==1)
    {
        int a[10000+5],b[10000+5],num,v=0;
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&num);
            a[num]=1;
        }
        scanf("%d",&m);
        for(int i=1;i<=m;i++)
        {
            scanf("%d",&num);
            if(a[num]==1)
            {
                b[v]=num;
                v++;
            }
        }
        sort(b,b+v);
        printf("%d ",v);
       // printf(" %d",b[0]);
        for(int i=0;i<v;i++)
        {
      //      if(b[v]!=b[v-1])
                if(i!=v-1)
                printf("%d ",b[i]);
                else
                    printf("%d\n",b[i]);
        }
    }
    return 0;
}
