//
//  main.c
//  HANGMAN GAME
//
//  Created by Jahina Al Jashmi on 08/11/2012.
//  Copyright (c) 2012 Jahina Al Jashmi. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define E 5
#define W 6
#define F 4

int main(void)
{
    
    
    
    char word1[F]={'s','m','a','l'};
    char word2[E]={'h','e','l','l','o'};
    char word3[E]={'s','w','e','e','t'};
    char word4[W]={'r','a','n','d','o','m'};
    char word5[W]={'w','i','z','e','r','d'};
    
    char x;
    char u1,u2,u3,u4,u5,u6;
    int lives=6;
    int enter;
    char play;
    
    
    
    u1='_';
    u2='_';
    u3='_';
    u4='_';
    u5='_';
    u6='_';
    
    int wincheck;
    
    
    srand(time(NULL));//order to generate different sequences with a unique value in 0 time
    
    int r=0;
    r=rand()%5;//random function to chose 5 word or array
    
    
    
    
    printf("Word guessing game\n");
    printf("--------------------\n");
    printf("choose one of the option :\n");
    printf("1)Start the game\n");
    printf("2)Exit\n");
    scanf("%d",&enter);
    
    if(enter==1)//start the game
    {
        printf("\nI have guessed a word...... \n");
        
        
        do {//begin 1 while loop
            
            do{
                
                
                
                while(lives!=0)//it will go untill the condition is true
                {//begin 2 while loop
                    
                    
                    
                    
                    switch(r)//to switch the random with word
                    {
                        case 0:
                        {//beging case 0
                            printf("lives= %d\n",lives);
                            printf("guess the word\n");
                            printf("word: %c %c %c %c \n",u1,u2,u3,u4);
                            scanf(" %c",&x);
                            printf("word guess so far: %c\n",x);
                            
                            
                            if(x==word1[0]  )
                            {
                                u1=x;
                                wincheck++;//to calculat every time he input a right letter
                            }
                            if(x==word1[1]  )
                            {
                                wincheck++;
                                u2=x;
                            }
                            if(x==word1[2]  )
                            {
                                wincheck++;
                                u3=x;
                            }
                            if(x==word1[3]  )
                            {
                                wincheck++;
                                u4=x;
                            }
                            
                            if(x!=word1[0] && x!=word1[1] && x!=word1[2] && x!=word1[3])
                            {
                                lives=lives-1;
                            }
                            if (wincheck==5)
                            {
                                printf("you win");
                                return 0;
                            }
                            
                            
                            break;
                            
                        }
                            
                        case 1:
                        {//beging case 1
                            
                            printf("lives= %d\n",lives);
                            printf("guess the word\n");
                            printf("word: %c %c %c %c %c\n",u1,u2,u3,u4,u5);
                            scanf(" %c",&x);
                            printf("word guess so far: %c\n",x);
                            
                            if(x==word2[0]  )
                            {
                                u1=x;
                                wincheck++;
                            }
                            if(x==word2[1]  )
                            {
                                u2=x;
                                wincheck++;
                            }
                            if(x==word2[2]  )
                            {
                                u3=x;
                                wincheck++;
                            }
                            if(x==word2[3]  )
                            {
                                u4=x;
                                wincheck++;
                            }
                            if(x==word2[4]  )
                            {
                                u5=x;
                                wincheck++;
                            }
                            
                            if(x!=word2[0] && x!=word2[1] && x!=word2[2] && x!=word2[3] && x!=word2[4])
                            {
                                lives=lives-1;
                            }
                            if (wincheck==5)
                            {
                                printf("you win");
                                x=NULL;
                            }
                            
                            
                            break;
                            
                            
                            
                            
                            
                        }//end case 1
                        case 2:
                        {//beging case 2
                            
                            
                            printf("lives= %d\n",lives);
                            printf("guess the word\n");
                            printf("word: %c %c %c %c %c\n",u1,u2,u3,u4,u5);
                            scanf(" %c",&x);
                            printf("word guess so far: %c\n",x);
                            
                            if(x==word3[0]  )
                            {
                                u1=x;
                                wincheck++;
                            }
                            if(x==word3[1]  )
                            {
                                u2=x;
                                wincheck++;
                            }
                            if(x==word3[2]  )
                            {
                                u3=x;
                                wincheck++;
                            }
                            if(x==word3[3]  )
                            {
                                u4=x;
                                wincheck++;
                            }
                            if(x==word3[4]  )
                            {
                                u5=x;
                                wincheck++;
                            }
                            
                            if(x!=word3[0] && x!=word3[1] && x!=word3[2] && x!=word3[3] && x!=word3[4])
                            {
                                lives=lives-1;
                            }
                            if (wincheck==5)
                            {
                                printf("you win");
                                return 0;
                            }
                            
                            
                            break;
                            
                            
                            
                            
                        } //end case 2
                        case 3:
                        {//beging case 3
                            
                            
                            
                            printf("lives= %d\n",lives);
                            printf("guess the word\n");
                            printf("word: %c %c %c %c %c %c \n",u1,u2,u3,u4,u5,u6);
                            scanf(" %c",&x);
                            printf("word guess so far: %c\n",x);
                            
                            if(x==word4[0]  )
                            {
                                u1=x;
                                wincheck++;
                            }
                            if(x==word4[1]  )
                            {
                                u2=x;
                                wincheck++;
                            }
                            if(x==word4[2]  )
                            {
                                u3=x;
                                wincheck++;
                            }
                            if(x==word4[3]  )
                            {
                                u4=x;
                                wincheck++;
                            }
                            if(x==word4[4]  )
                            {
                                u5=x;
                                wincheck++;
                            }
                            if(x==word4[5]  )
                            {
                                u6=x;
                                wincheck++;
                            }
                            
                            
                            if(x!=word4[0] && x!=word4[1] && x!=word4[2] && x!=word4[3] && x!=word4[4] && x!=word4[5])
                            {
                                lives=lives-1;
                            }
                            if (wincheck==6)
                            {
                                printf("you win");
                                return 0;
                            }
                            
                            
                            break;
                            
                        }//end case 3
                        case 4:
                        {//beging case 4
                            
                            printf("lives= %d\n",lives);
                            printf("guess the word\n");
                            printf("word: %c %c %c %c %c %c\n",u1,u2,u3,u4,u5,u6);
                            scanf(" %c",&x);
                            printf("word guess so far: %c\n",x);
                            
                            if(x==word5[0]  )
                            {
                                u1=x;
                                wincheck++;
                            }
                            if(x==word5[1]  )
                            {
                                u2=x;
                                wincheck++;
                            }
                            if(x==word5[2]  )
                            {
                                u3=x;
                                wincheck++;
                            }
                            if(x==word5[3]  )
                            {
                                u4=x;
                                wincheck++;
                            }
                            if(x==word5[4]  )
                            {
                                u5=x;
                                wincheck++;
                            }
                            if(x==word5[5]  )
                            {
                                u6=x;
                                wincheck++;
                            }
                            
                            if(x!=word5[0] && x!=word5[1] && x!=word5[2] && x!=word5[3] && x!=word5[4] && x!=word5[5])
                            {
                                lives=lives-1;
                            }
                            if (wincheck==6)
                            {
                                printf("you win");
                                return 0;
                            }
                            
                            
                            break;
                        }//end case 4
                    }////end switch
                    if(lives == 0)
                    {
                        printf("You Lose!!\n");
                    }
                }//end 2 while
            }while(x>0 && x<10);
            
            
            printf("Do you want to play again\n");
            scanf("%c",&play);
            
        }while(play != 'n'&& play != 'N');//end 1 while
        
        
        printf("\n**good bye**");
        
    }
    
    else if(enter==2)
    {
        printf("EXITING");
    }
    
}
