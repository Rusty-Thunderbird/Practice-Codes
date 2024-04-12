/*
Sign-up Sign-in

Implement a system that enables signing-up and signing-in as described below.

Description of actions
1: Sign-up
2: Sign-in
3: Exit

Action: 1
Username: varun
Password: 2004
New user registered!

Action: 2
Username: varun
Password: 2004
Successfully signed in!

Action: 1
Username: nurav
Password: 4002
New user registered!

Action: 2
Username: hello
Password: world
User not found!

Action: 2
Username: nurav
Password: 2004
Invalid password!

Action: 2
Username: nurav
Password: 4002
Successfully signed in!

Action: 3
Exiting
*/





//Code:
#include <stdio.h>
#include <string.h>
#define max 50
#define usernamelength 20
#define passwordlength 20

struct User
{
    char Username[max];
    char Password[max];
    int isregistered;
};

struct User signup; // Define signup as a global variable

void signup_func() 
{
    printf("Enter Username: ");
    scanf("%s", signup.Username);
    printf("Username is: %s ", signup.Username);
    printf("Enter Password: ");
    scanf("%s", signup.Password);
    printf("New User Registered!\n");
    signup.isregistered = 1;
}

void signin()
{   
    struct User login;
    printf("Enter Username: ");
    scanf("%s", login.Username); 
    int i, j;
    i = strcmp(signup.Username, login.Username);
    if(i == 0)
    {
        printf("Enter Password: ");
        scanf("%s", login.Password);
        j = strcmp(signup.Password, login.Password);
        if(j == 0)
        {
            printf("Successfully signed in!\n");
        }
        else
        {
            printf("Invalid Password.\n");
        }
    }
    else
    {
        printf("User not found\n");
    }
}

int main()
{
    int action;

    do {
        printf("\nDescription of actions\n");
        printf("1: Sign-up\n");
        printf("2: Sign-in\n");
        printf("3: Exit\n");
        printf("Action: ");
        scanf("%d", &action);

        switch (action) {
            case 1:
                signup_func();
                break;
            case 2:
                signin();
                break;
            case 3:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid action\n");
                break;
        }
    } while (action != 3);

    return 0;
}
