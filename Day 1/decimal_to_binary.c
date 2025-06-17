#include <stdio.h>
int main()
{
    int num,base=1,sum =0;
    
    printf("Enter value ");
   
    scanf("%d",&num);
    
    while(num>0){
        printf("%d\t",(num%10*base));
        sum = sum + (num%10*base);
        base = base *2;
        num = num/10;
    }
    printf("\n%d",sum);
}
