#include <stdio.h>
#include "splash.h"
#include "menu.h"
struct login{
char fname[100];
char lname[100];
char username[100];
char password[100];
};

int main()
{
    int cho;
    puts("                                             Welcome to Coin Management System\n");
    puts("\n                                              Please Follow the security Steps\n");
    printf("                                           1.Sign Up\n");
    printf("                                           2.Sign In\n\n");

    puts("                                             Press the number & Enter\n");
    printf("                                           >>>>");

    scanf("%d",&cho);
    if(cho==1)
    {
        system("CLS");
        regis();
    }
    else if(cho==2)
        {
        system("CLS");
        login();}
}



login()
{
    char username[200],password[20];
    FILE*log;
    log=fopen("login.txt","r");
    struct login l;
    puts("                                                  Sign In\n");
    printf("                                             Enter Username:");
    scanf("%s",&username);
    printf("                                             Enter Password:");
    scanf("%s",&password);
    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(password,l.password)==0)
        {
            printf("                                      Login Successful\n\n");
            menu();
        }
        else{
            printf("                                        Incorrect Password...type again");
            system("CLS");

            login();
        }
    }
    fclose(log);
}


regis()
{
    FILE*log;
    log=fopen("login.txt","w");
    struct login l;
    puts("                                     Coin Management Security system Registration\n\n");
    printf("                                               Enter first name:");
    scanf("%s",l.fname);
    printf("                                               Enter last name:");
    scanf("%s",l.lname);
    printf("                                               Enter Username:");
    scanf("%s",l.username);
    printf("                                               Enter Password:");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n                                   Please Remember your user name & password!!!\n\n");
    printf("                                           PRESS ANY KEY TO CONTINUE");
    getch();
    system("CLS");
    login();
}
