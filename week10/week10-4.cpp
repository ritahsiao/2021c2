///Week10-4.cpp///(1)檔案(2)排序分數大-小(3)使用物件class
#include <stdio.h>
#include <vector>///include後面沒有.h
#include <algorithm>
class Record///C++的物件,用class宣告,裡面有名字、分數 包起來
{
public:///公開的欄位,可以被別人main()使用
    int grade;
    char name[30];
};
bool compare(Record a,Record b)
{
    return (a.grade>b.grade);
}
int main()
{
    FILE * fin=fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    std::vector<Record> student(20);
    for(int i=0;i<n;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);///.是的的意思
    }

    std::sort(student.begin(),student.end(),compare);

    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}

