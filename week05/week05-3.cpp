///week05-3 ��֤@�I
#include <stdio.h>
#include <stdlib.h>///qsort()
int comp(const void *p1,const void *p2)
{
    int a=*(int*)p1,b=*(int*)p2;
    if(a>b) return +1;///�T�ت��A
    if(a<b) return -1;///�f�Z:��ka-b
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
