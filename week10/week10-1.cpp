///Week10-1.cpp
#include <stdio.h>
int grade[100];
char name[100][30];
int main()
{
    FILE * fin=fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    for(int i=0;i<n;i++)
    {
        fscanf(fin,"%s %d",name[i],&grade[i]);
    }

    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",name[i],grade[i]);
    }
}
