#include <stdio.h>
#include <string.h>
int main() {

    printf("==========================================\n");
    printf("     USER AUTHENTICATION & STRING DEMO    \n");
    printf("==========================================\n\n");

    //Asking User to Enter full name
    char fullname[30];
    printf("Enter your full name:\n");
    fgets(fullname, sizeof(fullname),stdin);
    fullname[strcspn(fullname, "\n")] = '\0';

    //checking length of the fullname using string function
    int length= strlen(fullname);

    //Greeting the user by a welcome message
    char welcome_message[100];
    strcpy(welcome_message,"Hello ");
    strcat(welcome_message, fullname);
    printf("%s\n", welcome_message);

    //Asking User for the password
    printf("Enter your password:");
    char secret_pin[]="Admin123";
    char user_pin[15];
    scanf("%s",user_pin);

    //Checking if the password is correct
    if (strcmp(user_pin, secret_pin)==0)
    {
        printf("===Access-Granted===");
    }else {
        printf("===Access-Denied===");
    }
    
return 0;    
}