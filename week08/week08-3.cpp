#include <stdio.h>///檔案輸出

int main()
{///檔案     開啟檔案            模式w+  寫+
    FILE*f=fopen("檔案輸出.txt","w+");
    fprintf(f,"Hello我在這裡哦\n");

    printf("Hello World\n");
}
