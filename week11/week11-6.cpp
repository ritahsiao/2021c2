///week11-6.cpp熟悉vector
#include <vector>///vector<???> STL功能
#include <iostream>///cin 或 cout
using namespace std;
int main()
{
    vector<int>v;///v是vector裡面裝int
    ///你沒說它要多大,所以v有0個
    v.push_back(10);///把10放進去,v有1個
    v.push_back(11);///把11放進去,v有2個
    v.push_back(15);///把15放進去,v有3個

    vector<int>::iterator it;
    for(it=v.begin() ; it!=v.end();it++)
    {
        cout << *it << endl;
    }
}

