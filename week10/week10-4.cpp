///Week10-4.cpp///(1)�ɮ�(2)�ƧǤ��Ƥj-�p(3)�ϥΪ���class
#include <stdio.h>
#include <vector>///include�᭱�S��.h
#include <algorithm>
class Record///C++������,��class�ŧi,�̭����W�r�B���� �]�_��
{
public:///���}�����,�i�H�Q�O�Hmain()�ϥ�
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
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);///.�O�����N��
    }

    std::sort(student.begin(),student.end(),compare);

    for(int i=0;i<n;i++)
    {
        printf("%s %d\n",student[i].name,student[i].grade);
    }
}

