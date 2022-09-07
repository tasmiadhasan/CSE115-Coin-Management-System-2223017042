#include<stdio.h>
struct login{
char fname[100];
char lname[100];
char username[100];
char password[100];
};
regis()
{
    FILE*log;
    log=fopen("login.txt","w");
    struct login l;
    printf("Enter first name:");
    scanf("%s",l.fname);
    printf("Enter last name:");
    scanf("%s",l.lname);
    printf("Enter Username:");
    scanf("%s",l.username);
    printf("Enter Password:");
    scanf("%s",l.password);
    fwrite(&l,sizeof(l),1,log);
    fclose(log);
    printf("\n Your user name is ur id");
    printf("any key for continue");
    getch();
    system("CLS");
    login();
}

login()
{
    char username[200],pasword[20];
    FILE*log;
    log=fopen("login.txt","r");
    struct login l;
    printf("Enter Username:");
    scanf("%s",&username);
    printf("Enter Password:");
    scanf("%s",&pasword);
    while(fread(&l,sizeof(l),1,log))
    {
        if(strcmp(username,l.username)==0 && strcmp(pasword,l.password)==0)
        {
            printf("Login Success\n");
        }
        else{
            printf("enter correct");
        }
    }
    fclose(log);
}

int main()
{
    int cho;
    printf("enter 1 for register\n 2 for login");
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
