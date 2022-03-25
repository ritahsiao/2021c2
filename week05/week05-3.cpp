///week05-3 更快一點
#include <stdio.h>
#include <stdlib.h>///qsort()
int comp(const void *p1,const void *p2)
{
    int a=*(int*)p1,b=*(int*)p2;
    if(a>b) return +1;///三種狀態
    if(a<b) return -1;///口訣:減法a-b
    if(a==b) return 0;
}
int main()
{
    int a[100];
    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");

    qsort(a,100,sizeof(int),comp);

    for(int i=0;i<100;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
