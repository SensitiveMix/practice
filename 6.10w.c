/*使用字符函数判断输入字符*/
#include <stdio.h>
#include <math.h>

void SwitchShow(char c);

int main()
{
    char cCharPut;
    char cCharTemp;
    
    printf("First enter:");
    scanf("%c",&cCharPut);
    SwitchShow(cCharPut);
    cCharTemp=getchar();
    
    printf("Second enter:");
    scanf("%c",&cCharPut);
    SwitchShow(cCharPut);
    cCharTemp=getchar();
    
    printf("Third enter:");
    scanf("%c",&cCharPut);
    SwitchShow(cCharPut);
    
    return 0;
}

void SwitchShow(char cChar)
{
    if(isalpha(cChar))
    {
        printf("You entered a letter of the alphabet %c\n",cChar);
    }
    
    if(isdigit(cChar))
    {
        printf("You entered the digit %c\n",cChar);
    }
    
    if(isalnum(cChar))
    {
        printf("You enteren the alphanumeric character %c\n",cChar);
    }
    else
    {
        printf("You entered the character is not alpgabet or digit:%c\n",cChar);
    }
}
