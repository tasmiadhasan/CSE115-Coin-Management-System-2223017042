void menu()
{
    system("CLS");
  int choice=0;
   splash();
  puts("\n\n\n                                             Login Successfull\n");
  puts("\n                                            Welcome to The management System\n");
    while(choice !=5)
    {

        puts("\n                                           Choose Country\n");
        puts("                                             1.Bangladesh\n");
        puts("                                             2.India\n");
        puts("                                             3.Pakistan\n");
        puts("                                             4.Turkey\n");
        puts("                                             5.Exit\n");
        printf("\n                                         Enter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:

            {
               system("CLS");
               splash();
                puts("\n                                 Bangladeshi all coin list\n");
            int sub1=0;
            while(sub1!=4)
            {
                puts("\n                                    Choose one...........\n");
                puts("\n                                    1.One Taka");
                puts("\n                                    2.Two Taka");
                puts("\n                                    3.Five Taka");
                puts("\n                                    4.Main Menu");
                printf("\n                              Enter which coin you want to see:");
                scanf("%d",&sub1);
                if(sub1==1)
                    {
                        system("CLS");
                        splash();
                        int bd;
                    puts("\n                                    1.For Coin Image");
                    puts("\n                                    2.Description");
                    printf("\n                                  Your choice is:");
                    scanf("%d",&bd);
                    if(bd==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\one.jpg");}

                    else if(bd==2)
                        { system("CLS");
                        splash();
                            puts("\n                               Description");
                        puts("\n                                  Made with silver.");
                        puts("\n	                             The logo of father of the nation.");
                        }
                }
                else if(sub1==2)
                    { system("CLS");
                    splash();
                    int bd;
                    puts("\n                                      1.For Coin Image");
                    puts("\n                                      2.Description");
                    printf("\n                                    Your choice:");
                    scanf("%d",&bd);
                    if(bd==1)
                { system("CLS");
                splash();
                    system("C:\\Users\\Mitul\\Desktop\\trail\\two.jpg");}

                    else if(bd==2)

                      { system("CLS");
                      splash();
                        puts("\n                                       Description\n");
                      puts("\n                                        Made with silver.");
                      puts("\n                                   The logo of father of the nation.");
                      }

                }
                else if(sub1==3)
                    { system("CLS");
                    splash();
                    int bd;
                    puts("\n                                       1.For Coin Image");
                    puts("\n                                       2.Description");
                    printf("\n                                     Your choice:");
                    scanf("%d",&bd);
                    if(bd==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\five.jpg");}

                    else if(bd==2)
                        { system("CLS");
                        splash();
                        puts("\n                                     Description\n");
                         puts("\n                                    Made with silver.");
                         puts("\n                                   The logo of Jamuna Bridge.");
                         }

                }
                else if(sub1==4)
                {
                    system("CLS");
                    splash();
                    menu();
                }

            }
            }
            break;
        case 2:
            { system("CLS");
            splash();
             puts("\n                                                Indian all coin list\n");
            int sub2=0;
            while(sub2!=4)
            {
                puts("\n                                                Choose one...........\n");
                puts("\n                                               1.One Rupee");
                puts("\n                                               2.Two Rupee");
                puts("\n                                               3.Five Rupee");
                puts("\n                                               4.Main Menu");
                printf("\n                                      Enter which coin u want to see >>");
                scanf("%d",&sub2);
                if(sub2==1)
                    { system("CLS");
                    splash();
                        int in;
                    puts("\n                                          1.For Coin Image");
                    puts("\n                                          2.Description");
                    printf("\n                                        Your choice:");
                    scanf("%d",&in);
                    if(in==1)
                       { system("CLS");
                       splash();
                       system("C:\\Users\\Mitul\\Desktop\\trail\\oneru.jpg");}

                    else if(in==2)
                        { system("CLS");
                        splash();
                        puts("\n                                       Description\n");
                        puts("\n                                       Made with silver.");
                        puts("\n                                       The Logo of Paddy.");
                        }
                }
                else if(sub2==2)
                    { system("CLS");
                    splash();
                    int in;
                    puts("\n                                        1.For Coin Image");
                    puts("\n                                        2.Description");
                    printf("\n                                      Your choice:");
                    scanf("%d",&in);
                    if(in==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\tworu.jpg");}

                    else if(in==2)
                        { system("CLS");
                        splash();
                        puts("\n                                      Description\n");
                        puts("\n                                      Made with silver.");
                        puts("\n                                 The Logo of government of India.");}
                }
                else if(sub2==3)
                    { system("CLS");
                    splash();
                    int in;
                    puts("\n                                        1.For Coin Image");
                    puts("\n                                        2.Description");
                    printf("\n                                      Your choice:");
                    scanf("%d",&in);
                    if(in==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\5ru.jpg");}
                    else if(in==2)
                        { system("CLS");
                        splash();
                        puts("\n                                     Description\n");
                        puts("\n                                     Made with silver.");
                        puts("\n                                Coin Color Gold. The Logo of government of India.");}
                }
                else if(sub2==4)
                {
                    system("CLS");
                    splash();
                    menu();
                }
            }
            }
            break;
            case 3:
            { system("CLS");
            splash();
             puts("\n                                          Pakistani all coin list\n");
            int sub3=0;
            while(sub3!=4)
            {
                puts("\n                                         Choose one...........\n");
                puts("\n                                           1.One Rupee");
                puts("\n                                           2.Two Rupee");
                puts("\n                                           3.Five Rupee");
                puts("\n                                           4.Main Menu");
                printf("\n                                 Enter which coin u want to see:");
                scanf("%d",&sub3);
                if(sub3==1)
                    { system("CLS");
                    splash();
                    int pk;
                    puts("\n                                       1.For Coin Image");
                    puts("\n                                       2.Description");
                    printf("\n                                     Your choice:");
                    scanf("%d",&pk);
                    if(pk==1)
                       { system("CLS");\
                       splash();
                       system("C:\\Users\\Mitul\\Desktop\\trail\\p1.jpg");}

                    else if(pk==2)
                        { system("CLS");
                        splash();
                        puts("\n                                     Description\n");
                        puts("\n                                     Made with silver.");
                        puts("\n                                   The Logo of moon and star.");}
                }
                else if(sub3==2)
                    { system("CLS");
                    splash();
                    int pk;
                    puts("\n                                         1.For Coin Image");
                    puts("\n                                         2.Description");
                    printf("\n                                       Your choice:");
                    scanf("%d",&pk);
                    if(pk==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\p2.jpg");}

                    else if(pk==2)
                        { system("CLS");
                        splash();
                        puts("\n                                     Description\n");
                        puts("\n                                   Made with silver.");
                        puts("\n                                  The Logo of Mosque.");}
                }
                else if(sub3==3)
                    { system("CLS");
                    splash();
                    int pk;
                    puts("\n                                        1.For Coin Image");
                    puts("\n                                        2.Description");
                    printf("\n                                      Your choice:");
                    scanf("%d",&pk);
                    if(pk==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\p5.jpg");}
                    else if(pk==2)
                        { system("CLS");
                        splash();
                        puts("\n                                     Description\n");
                        puts("\n                                     Made with silver.");
                        puts("\n                                  The Logo of moon and star.");}
                }
                else if(sub3==4)
                {
                    system("CLS");
                    splash();
                    menu();
                }
            }
            }
            break;
            case 4:
            {
            splash();
             puts("\n                                         Turkish all coin list\n");
            int sub4=0;
            while(sub4!=4)
            {

               puts("\n                                           Choose one...........\n");
                puts("\n                                           1.One Lira");
                puts("\n                                           2.Two Lira");
                puts("\n                                           3.Five Lira");
                puts("\n                                           4.Main Menu");
                printf("\n                                  Enter which coin u want to see:");
                scanf("%d",&sub4);
                if(sub4==1)
                    { system("CLS");
                    splash();
                    int tk;
                    puts("\n                                     1.For Coin Image");
                    puts("\n                                     2.Description");
                    printf("\n                                    Your choice:");
                    scanf("%d",&tk);
                    if(tk==1)
                       { system("CLS");
                       splash();
                       system("C:\\Users\\Mitul\\Desktop\\trail\\1lira.jpg");}

                    else if(tk==2)
                        { system("CLS");
                        splash();
                        puts("\n                                 Description\n");
                        puts("\n                                Made with silver.");
                        puts("\n                              The Logo of Hagia Sophia.");

                        }
                }
                else if(sub4==2)
                    { system("CLS");
                    splash();
                    int tk;
                    puts("\n                                     1.For Coin Image");
                    puts("\n                                     2.Description");
                    printf("\n                                   Your choice:");
                    scanf("%d",&tk);
                    if(tk==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\2lira.jpg");}

                    else if(tk==2)
                        { system("CLS");
                        splash();
                        puts("\n                                 Description\n");
                        puts("\n                                Made with silver.");
                        puts("\n                              The Logo of a farmer.");}
                }
                else if(sub4==3)
                    { system("CLS");
                    splash();
                    int tk;
                    puts("\n                                      1.For Coin Image");
                    puts("\n                                      2.Description");
                    printf("\n                                    Your choice:");
                    scanf("%d",&tk);
                    if(tk==1)
                { system("CLS");
                splash();
                system("C:\\Users\\Mitul\\Desktop\\trail\\5lira.jpg");}
                    else if(tk==2)
                        { system("CLS");
                        splash();
                        puts("\n                               Description\n");
                        puts("\n                              Made with silver.");
                        puts("\n                            The Logo of a horse man.");}
                }
                else if(sub4==4)
                {
                    system("CLS");
                    splash();
                    menu();
                }
            }
            }
            break;
            case 5:
                { system("CLS");
                splash();
                    printf("\n                            You Exited the program.\n\n");
                    return 0;
                }

        }
}
}
