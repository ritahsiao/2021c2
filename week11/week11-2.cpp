///week11-2.cpp ////c++
#include <iostream>
#include <vector>
char name[100][30];
int grade[100];
using namespace std;///std::重複好多次 ,可以省略
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name[i]>>grade[i];///你的資料往右流到變數裡面
	}

	for(int i=0;i<n;i++)
	{
		cout<<name[i]<<std::endl;///end line表示換行
	}
}

