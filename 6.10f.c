/*数组元素作为函数参数*/
#include <stdio.h>

void ShowMember(int iMember);

int main()
{
    int iCount[10];
    int i;
    
    for(i=0;i<10;i++)
    {
        iCount[i]=i;
    }
    
    for(i=0;i<10;i++)
    {
        ShowMember(iCount[i]);
    }
    return 0;
}

void ShowMember(int iMember)
{
    printf("Show the member is%d\n",iMember);
}
