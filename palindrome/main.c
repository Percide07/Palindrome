#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,pal,rev = 0;
    printf("Enter your number : \n");
    scanf("%d", &number);
    pal = number ;

    while( pal != 0) {
        rev = rev * 10;
        rev = rev + pal%10;
        pal = pal/10;
    }
    if(number == rev) {
        printf("%d is a palindrome number. \n",number);
    }else {
        printf("%d is not a palindrome number. \n",number);
    }
    return 0;
}
