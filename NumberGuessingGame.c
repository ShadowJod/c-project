#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // int guess_num = 30;
    int count = 1;
    int num;

    srand(time(0));

    int guess_num = (rand()%100)+1;

    while (num!=guess_num)
    {
        printf("Enter a number between 1-100 : ");
        scanf("%d", &num);
        if (num>guess_num)
        {
            printf("Your number is greater than computer guess\n");
        }
        else if (num<guess_num)
        {
            printf("Your number is smaller than computer guess\n");
        }
        else{
            printf("You Guess the Number in %d attempt\n", count);
        }
        count++;
        
        
    }

    printf("Thanks for playing this Game!\n");
    printf("Developed by Nikhil Mishra");
    
    


    return 0;
}