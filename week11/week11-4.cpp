///week11-4.cpp///c++
#include <iostream>
#include <vector>
#include <algorithm>///「資料結構、演算法」的演算法
using namespace std;
class student
{
public:
	char name[30];
	int grade;
};
bool compare(student a,student b)
{
	return (a.grade>b.grade);
}
int main()
{
	int n;
	cin>>n;
	vector<student>stu(n);
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].grade;
		///cin>>name[i]>>grade[i];///你的資料往右流到變數裡面
	}

	stable_sort(stu.begin(),stu.end(),compare);

	for(int i=0;i<n;i++)
	{
		cout<<stu[i].name<< " " <<stu[i].grade<<endl;
		///cout<<name[i]<<std::endl;///end line表示換行
	}
}


