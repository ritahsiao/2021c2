///week11-6.cpp���xvector
#include <vector>///vector<???> STL�\��
#include <iostream>///cin �� cout
using namespace std;
int main()
{
    vector<int>v;///v�Ovector�̭���int
    ///�A�S�����n�h�j,�ҥHv��0��
    v.push_back(10);///��10��i�h,v��1��
    v.push_back(11);///��11��i�h,v��2��
    v.push_back(15);///��15��i�h,v��3��

    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end();it++)
    {
        cout << *it << endl;
    }
}

