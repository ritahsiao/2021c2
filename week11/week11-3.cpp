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
	vector<student>stu(n);//啟用vector變數stu,可以裝n個學生
	//單位是student,stu這個變數,可以裝n個學生
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].grade;
		//cin>>name[i]>>grade[i];//你的資料往右流到變數裡面
	}

	for(int i=0;i<n;i++)
	{
		cout<<stu[i].name<< " " <<stu[i].grade<<endl;
		//cout<<name[i]<<std::endl;//end line表示換行
	}
}
