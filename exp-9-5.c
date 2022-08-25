/*Define a structure called cricket that will describe the following information:
Player name,Team name,Batting average,
using cricket declare an array player with 50 elements write a C program to read the information about
all the 50 players and print team wise list containing names of players with their batting average.*/

#include<stdio.h>
#include<string.h>

struct cricket
{
    char player_name[20];
    char team_name[20];
    float batting_average;
}p[4],t;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        printf("Enter Details of player %d\n",i+1);

        printf("Enter the name : ");
        scanf("%s",p[i].player_name);
        fflush(stdin);

        printf("Enter the team name : ");
        scanf("%s",p[i].team_name);
        fflush(stdin);

        printf("Enter the batting average : ");
        scanf("%f",&p[i].batting_average);
        fflush(stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if(strcmp(p[i].team_name,p[j].team_name)>0)
            {
                t = p[i];
                p[i]=p[j];
                p[j]=t;
            }
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (strcmp(p[i].team_name,p[j].team_name)!=0 || i == 0)
            {
                printf("Team name : %s\n",p[i].team_name);
                printf("Player name : %s\n",p[i].player_name);
                printf("Batting average : %d\n",p[i].batting_average);
            }
        }
        
    }
    return 0;
}

//printing part not cleared