/*数组名作为函数参数*/
#include <stdio.h>

void Evaluate(int iArrayName[10]);
void Display(int iArrayName[10]);

int main()
{
    int iArray[10];
    
    Evaluate(iArray[10]);
    Display(iArray[10]);
    return 0;
}

void Display(int iArrayName[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("the member number is %d\n",iArrayName[i]);
    }
}

void Evaluate(int iArrayName[10])
{
    int i;
    for(i=0;i<10;i++)
    {
        iArrayName[i]=i;
    }
}
