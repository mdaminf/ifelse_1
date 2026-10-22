#include <stdio.h>
int main(){

    int x, i;
    printf("Enter a number: ");
    scanf("%d\n",&x);

    if(x>0)
    {
        printf("x is a positive number.\n");

        if(x%2==0)
        {
            printf("and x is an even number.");
        }

        else
        {
            printf("and x is a odd number.");
        }

    }

    else if(x==0)
    {

        for(i=0; i<3; i++)
        {
            printf("x is zero\n");
        }
    }

    else
    {
        printf("x is a negative number");
    }

return 0;
}