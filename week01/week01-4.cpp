///week01-4
#include <stdio.h>
char line[1000];///外面宣告的會初始成為0
int main()
{
	///char line[1000];///沒有初始化init成為0,將會誤判!!
	scanf("%s",line);

    int ans=0;///迴圈前面 ans=0
    for(int i=0;i<1000;i++)
    {
        ///if(line[i]=='2') printf("找到2\n");
        if(line[i]=='2') ans++;///迴圈中間 ans++
    }
    printf("%d\n",ans);///迴圈後面把ans印出來
}
