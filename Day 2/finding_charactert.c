#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
        printf("It is an Alphabet");
    }
    else if(ch>='0' && ch<='9'){
        printf("It is an Number");
    }
    else{
        printf("It is an Special Character");
    }
    
}
