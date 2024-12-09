#include <stdio.h>
#include <string.h>

#define MAX_USERS 10
#define CREDENTIAL_LENGTH 30

typedef struct 
{
   char username[30];
   char password[30];
}User;

User users[MAX_USERS];
int user_count = 0;


void Register_user();
int Login_user();
void Fix_fgets(char*);
void input_password(char*);

int main()
{
    // char username[20];
    // int password;
    // char username1[20];
    // int password1;
    int i = 0;
    int user_index;

    while (1)
    {
        printf("\n------------------------");
        printf("\nWelcome to Login Page");
        printf("\n1. Create User");
        printf("\n2. Login User");
        printf("\n3. Exit");
        printf("\nChosse Your Option: ");
        scanf("%d", &i);
        getchar(); // consume extra enter

        switch (i)
        {
        case 1:
            Register_user();
            break;

        case 2:
            user_index = Login_user();
            if(user_index>=0){
            
                printf("\nLogin successful! Welcome, %s!", users[user_index].username);

            }
            else{
                printf("Login Failed! Try Again");
            }
            break;
        case 3:
            printf("Exiting Program\n");
            break;

        default:
            printf("Enter Valid Option!\n");
            break;
        }
    }

    return 0;
}

void Register_user(){
    if(user_count==MAX_USERS){
        printf("\nStorage Full! Can't Create a new user");
    }
    else{
    int new_index = user_count;
    printf("Register a new user");
    printf("\nEnter username: ");
    fgets(users[new_index].username, CREDENTIAL_LENGTH, stdin);
    Fix_fgets(users[new_index].username);
    input_password(users[new_index].password);
    user_count++;
    printf("Registration Successful! ");
    printf("\n-%s-%s-",users[new_index].username, users[new_index].password);
   
    }
}

int Login_user(){
    char username[CREDENTIAL_LENGTH];
    char password[CREDENTIAL_LENGTH];

    printf("\nEnter username: ");
    fgets(username, CREDENTIAL_LENGTH, stdin);
    Fix_fgets(username);
    input_password(password);

    for(int i=0; i<user_count; i++){
        if(strcmp(username, users[i].username) ==0 && strcmp(password, users[i].password)==0){
            return i;
        }
    }

    return -1;
    
}

void Fix_fgets(char *string){
    int index = strcspn(string, "\n");
    string[index] = '\0';

}

void input_password(char*password){
    printf("Enter Password: ");
    fgets(password, CREDENTIAL_LENGTH, stdin);
    Fix_fgets(password);

}