/*利用指向指针的指针输出以为数组中是偶数的元素*/
#include <stdio.h>

int main()
{
    int a[10],*p1,**p2,i,n=0;
    printf("please input:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    p1=a;
    p2=&p1;
    printf("the array is:\n");
    for(i=0;i<10;i++)
    {
        if(*(*p2+i)%2==0)
        {
            printf("%5d",*(*p2+i));
            n++;
        }
    }
    printf("\n");
    printf("the number is:%d\n");
    return 0;
}
