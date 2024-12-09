#include <stdio.h>

int main(){
    int i=0;
    int num1;
    int num2;

    while (i!=6)
    {
        
        printf("-----------------------------------\n");
        printf("Welcome to Simple Calculator\n");
        printf("\n");
        printf("1. Add\n");
        printf("2. subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        // printf("6. Power\n");
        printf("6. Exit\n");
        printf("Now, enter yout choice: ");
        scanf("%d",&i);
        printf("\n");

        if(i==6){
            break;
        }
        printf("Please enter the first number: ");
        scanf("%d", &num1);
        printf("Now, enter the second number: ");
        scanf("%d", &num2);

        switch (i)
        {
        case 1:
            printf("Result of operation is: %d\n", num1+num2);
            break;
        case 2 : 
            printf("Result of operation is: %d\n", num1-num2);
            break;
        case 3 :
            printf("Result of operation is: %d\n", num1*num2);
            break;
        case 4:
            if(num2 ==0){
                printf("Invalid Argument\n");
            }
            else{
            printf("Result of operation is: %d\n", num1/num2);
            }
            break;
        case 5:
            printf("Result of operation is: %d\n", num1%num2);
            break;
        
        }
    }
   
    
    
    return 0;
}