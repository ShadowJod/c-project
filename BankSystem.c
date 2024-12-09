#include <stdio.h>
#include <string.h>

int main()
{
    int option;
    char name[10];
    char accountno[5];
    char tempac[5];
    int ammount;
    int balance = 0;

    while (1)
    {
        printf("\n*** Bank Management System ***");
        printf("\n1. Create Account");
        printf("\n2. Deposit Amount");
        printf("\n3. Withdraw Money");
        printf("\n4. Check Balance");
        printf("\n5. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &option);

        if (option == 5)
        {
            break;
        }

        switch (option)
        {
        case 1:
            printf("Enter Your name :");
            scanf("%s", name);
            printf("Enter Your Account Number :");
            scanf("%s", accountno);
            printf("Account Created Successfully!");
            break;

        case 2:
            printf("Enter Account Number: ");
            scanf("%s", tempac);
            if (strcmp(accountno, tempac) == 0)
            {
                printf("Enter the Amount: ");
                scanf("%d", &ammount);
                balance += ammount;
                printf("This %d amount is credit in Your %s Account number ", balance, tempac);
            }
            else
            {
                printf("Invalid Account Number");
            }
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%s", tempac);
            if (strcmp(accountno, tempac) == 0)
            {
                printf("Enter The Amount You want to Withdraw: ");
                scanf("%d", &ammount);
                if (ammount <= balance)
                {
                    balance -= ammount;
                    printf("Money withdraw Successfull!");
                    printf("Current Balance is %d", balance);
                }
                else
                {

                    printf("Insufficient Balance!");
                }
            }
            break;
        case 4:
            printf("Enter Account Number: ");
            scanf("%s", tempac);
            if (strcmp(accountno, tempac) == 0)
            {
                printf("\nYour Current Balance is %d", balance);
            }
            break;

        default:
            printf("Invalid Option!");
            break;
        }
    }

    return 0;
}