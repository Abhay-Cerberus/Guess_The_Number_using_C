#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int checker(int usr,int rnd);
int main()
{
    int un,rn,ch=0,cng=1,ag;
    printf("\t\t!!! WELCOME TO GUESS The NUMBER GAME !!!\n\n");
    printf("\tPress any key on The keyboard to Start The game.\n");
    printf("\t\tExcept of course power button\n");
    getch();
    do
    {
        if(cng==1)
        {
            printf("\nThe computer have taken a random Number from 1-100\n");
            rn=rand()%100;
        }
        printf("\n\t\tNow Guess The Number : ");
        scanf("%d",&un);
        ag=checker(un,rn);
        if(ag!=1)
        {
            printf("\tIf you want to guess The number again Enter 1\n\t => ");
            scanf("%d",&ch);
            printf("\tIf you want to change The Random number again Enter 1\n\t => ");
            scanf("%d",&cng);
        }
        else
        {
            printf("\n\t\tTO PLAY AGAIN ENTER 1\n\t\t => ");
            scanf("%d",&cng);
            ch=cng;
        }
    }while(ch==1);
    printf("\n\t\t!! Press any Key To Exit !!");
    getch();
    return 0;
}
int checker(int usr,int rnd)
{
    int d=0;
    if(rnd>usr)
    {
        if(usr<1)
        {
            printf("\nThe number you have entered is out of range\n\n");
        }
        else if(rnd-usr>90)
        {
            printf("\nThe number you have guessed is extremely less\n\n");
        }
        else if(rnd-usr>75)
        {
            printf("\nThe number you have guessed is very less\n\n");
        }
        else if(rnd-usr>50)
        {
            printf("\nThe number you have guessed is less\n\n");
        }
        else if(rnd-usr>25)
        {
            printf("\nThe number you have guessed is less but not so less\n\n");
        }
        else if(rnd-usr>10)
        {
            printf("\nThe number you have guessed is a little less\n\n");
        }
        else
        {
            printf("\nThe number you have guessed is just a little bit less\n\n");
        }
    }
    else if(rnd<usr)
    {
        if(usr>100)
        {
            printf("\nThe number you have entered is out of range\n\n");
        }
        else if(usr-rnd>90)
        {
            printf("\nThe number you have guessed is extremely high\n\n");
        }
        else if(usr-rnd>75)
        {
            printf("\nThe number you have guessed is very high\n\n");
        }
        else if(usr-rnd>50)
        {
            printf("\nThe number you have guessed is high\n\n");
        }
        else if(usr-rnd>25)
        {
            printf("\nThe number you have guessed is high but not so high\n\n");
        }
        else if(usr-rnd>10)
        {
            printf("\nThe number you have guessed is a little high\n\n");
        }
        else
        {
            printf("\nThe number you have guessed is just a little bit high\n\n");
        }
    }
    else
    {
        d=1;
        printf("\n\t\t!!! YOU HAVE GUESSED CORRECTLY !!!\n");
        printf("\teven if you did i am not giving anything to you  >w<\n");
    }
    return d;
}