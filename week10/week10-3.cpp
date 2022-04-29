///Week10-3.cpp
#include <stdio.h>///(1)檔案(2)排序分數大-小(3)使用物件class
class Record///C++的物件,用class宣告,裡面有名字、分數 包起來
{
public:///公開的欄位,可以被別人main()使用
    int grade;
    char name[30];
};
Record student[100];///有100筆學生的資料
int main()
{
    FILE * fin=fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    for(int i=0;i<n;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);///.是的的意思
    }

    for(int k=0;k<n-1;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(student[i].grade<student[i+1].grade)///不對就交換
            {
                Record temp=student[i];
                student[i]=student[i+1];
                student[i+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}
