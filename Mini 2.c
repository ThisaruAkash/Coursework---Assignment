// Password Strength checker

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
char pw[20];
char strong_pw[20];
int has_low = 0; int has_up = 0 ; int has_num = 0;int has_sym = 0;

printf("-----Password strength checker------");
printf("\n                                 By TA.");
printf("\n\n Please enter the password you want to check : ");
scanf("%s", pw);    // Input the password to pw variable.

// Developing function to adding random letters to current password.


//Check the conditions
if (strlen(pw) < 8 ){
    printf("\nPassword's contain is too weak. Add more letters.."); // check the password have at leat 8 characters.
    printf("\n We recommand some example passwords for you : \n");

    for(int j = 0 ;j <= 5 ; j++){
            strcpy(strong_pw,pw);
            for(int j = strlen(pw); j< 8 ; j++ ){
                          int random_char  = rand() % 26; // We get modify of the random number to get numbers between range 0 -25
                          strong_pw[j] = 'a' + random_char;
                          }
                          strong_pw[8] = '\0'; // Null-terminate the string
                          printf(strong_pw);
                          printf("\n");
    }}
else {
    for(int i = 0 ; i< strlen(pw);i++){
        if(isupper(pw[i]))
            has_up++;        // if password have a uppercase program increase has_up value by One.
        else if (islower(pw[i]))
            has_low++;      // if password have a lowercase program increase has_low value by One.
        else if(isdigit(pw[i]))
            has_num ++;    // if password have a digit program increase has_num value by One.
        else
            has_sym++;
        }
     if(has_up < 1)
            printf("\nPassword too weak. please add at least one uppercase letter.");
     else if(has_low < 1)
            printf("\n Password too weak. please add at least one lowercase letter.");
     else if (has_num < 1)
            printf("\n password too weak . please add at least one number.");
     else if(has_sym < 1)
            printf("\n password too weak. add at least one Symbol.");
     else
        printf("\n---Now,Your password is enough of strong--- ");
}
return 0;
}
