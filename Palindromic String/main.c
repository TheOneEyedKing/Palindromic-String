#include <stdio.h>
#include<string.h>
void main()
{
    char line[100];
    int i,flag=1;
    scanf("%s",line);
    for(i=0;i<strlen(line)/2;i++)
    {
        if(line[i]!=line[strlen(line)-1-i])
        {
            flag=0;
        }
    }
    if(flag==1)
        printf("%s","YES");
    else if(flag==0)
        printf("%s","NO");
}
