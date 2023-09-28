#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    scanf("\n");
    char c[100];
    while(n>0)
    {
        scanf(" %s", c);
        int size = strlen(c);
        if(size>10)
        {
            printf("%c%d%c\n", c[0],size-2,c[size-1]);
        }
        else
        {
            printf("%s\n", c);
        }
        n--;
    }
}
