///week01-4
#include <stdio.h>
char line[1000];///�~���ŧi���|��l����0
int main()
{
	///char line[1000];///�S����l��init����0,�N�|�~�P!!
	scanf("%s",line);

    int ans=0;///�j��e�� ans=0
    for(int i=0;i<1000;i++)
    {
        ///if(line[i]=='2') printf("���2\n");
        if(line[i]=='2') ans++;///�j�餤�� ans++
    }
    printf("%d\n",ans);///�j��᭱��ans�L�X��
}
