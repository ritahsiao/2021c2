//c++
#include <iostream>
#include <vector>
using namespace std;
class student
{
public:
	char name[30];
	int grade;
};
int main()
{
	int n;
	cin>>n;
	vector<student>stu(n);//�ҥ�vector�ܼ�stu,�i�H��n�Ӿǥ�
	//���Ostudent,stu�o���ܼ�,�i�H��n�Ӿǥ�
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].grade;
		//cin>>name[i]>>grade[i];//�A����Ʃ��k�y���ܼƸ̭�
	}

	for(int i=0;i<n;i++)
	{
		cout<<stu[i].name<< " " <<stu[i].grade<<endl;
		//cout<<name[i]<<std::endl;//end line��ܴ���
	}
}
