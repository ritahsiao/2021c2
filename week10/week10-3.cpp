///Week10-3.cpp
#include <stdio.h>///(1)�ɮ�(2)�ƧǤ��Ƥj-�p(3)�ϥΪ���class
class Record///C++������,��class�ŧi,�̭����W�r�B���� �]�_��
{
public:///���}�����,�i�H�Q�O�Hmain()�ϥ�
    int grade;
    char name[30];
};
Record student[100];///��100���ǥͪ����
int main()
{
    FILE * fin=fopen("input.txt","r");
    int n;
    fscanf(fin,"%d",&n);
    for(int i=0;i<n;i++)
    {
        fscanf(fin,"%s %d",student[i].name,&student[i].grade);///.�O�����N��
    }

    for(int k=0;k<n-1;k++)
    {
        for(int i=0;i<n-1;i++)
        {
            if(student[i].grade<student[i+1].grade)///����N�洫
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
