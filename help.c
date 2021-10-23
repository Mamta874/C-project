#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

struct user{
 	char name[20];
} player;

void play_game();

int main() {
	int menu, game, newgame;

	char reload = 'y';
	
	while(reload == 'y'){
		system("cls");
		printf("=====================================================================\n");
		printf("||		#     #    #    ######      #####  ####### ###### 			||\n"); 
		printf("||		##   ##   # #   #     #    #     # #     # #     #			||\n");
		printf("||		# # # #  #   #  #     #    #       #     # #     #			||\n");
		printf("||		#  #  # #     # #     #    #  #### #     # #     #			||\n");
		printf("||		#     # ####### #     #    #     # #     # #     #			||\n");
		printf("||		#     # #     # #     #    #     # #     # #     #			||\n");
		printf("||		#     # #     # ######      #####  ####### ###### 			||\n");  
		printf("=====================================================================\n");
		printf("||**************************RPG WORLD******************************||\n");
		printf("=========================By=Ayush & Mamta============================\n");
		printf("+++++++++++++++++++++++++  Main Menu  +++++++++++++++++++++++++++++\n");
		printf("+ 1 :: Play                                                       +\n");
		printf("+ 2 :: Exit                                                       +\n");
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf("Enter a menu no :");
		scanf("%d",&menu);
		printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
	 	switch (menu){
		  	case 1 : system("cls");
		           printf("======================================================\n");
		           printf("||        Welcome to Textual Battle Simulator       ||\n");
		           printf("======================================================\n");
		           printf("||        1 :: New game                        	   ||\n");
		           printf("||        2 :: Continue                  		   ||\n");
		           printf("======================================================\n");
		           printf("Enter your option :");
		           getchar();
		           scanf("%d",&game);
		           if(game == 1){
		             	printf("Enter your name :");
			            scanf("%s",&player.name);
			            FILE *ptr;
			            ptr = fopen("user.txt","w");
			            fprintf(ptr,"%s \t",player.name);
			            fclose(ptr);
			
			            system("cls");
			                printf("=====================================================\n");
			                printf("|| + Hello Mr %s Wellcome to the mad god.		   ||\n",player.name);
			                printf("||   My name is Saber. This game is a fun little   ||\n");
			                printf("||   try to make a rpg in text style.			   ||\n");
			                printf("||   Here you will fight against monsters and      ||\n");
			                printf("||	 once you clear the wave of monster you will   ||\n");
			                printf("||	 battle against the main villian			   ||\n");
			                printf("|| + Have you played this game before?		       ||\n");
			                printf("||   1) => Yes I have it is easy                   ||\n");
			                printf("||   2) => No i have not teach me                  ||\n");
			                printf("=====================================================\n");
			                printf("Choose your answer :  ");
			                scanf("%d",&newgame);
			                if (newgame == 1){
				                system("clear");
				                printf("=================================================\n");
				                printf("||  Great!! Here are the rules for the game.   ||\n");
				                printf("||   You are free to skip. Enjoy the game.   ||\n");
				                printf("=================================================\n");
				                printf("===================================================\n");
				                printf("||  Well Role playing games generally called RPG ||\n");
				                printf("||  are games in which you potray as a character ||\n");
				                printf("||	  given by the game or create your own.      ||\n");
				                printf("||  In this game you will be playing as the hero ||\n");
				                printf("||    Mamta whose only goal is to destroy the 	 ||\n");
				                printf("||  cosmic lord Ayush who has conquered over the ||\n");
				                printf("||    Andromeda galaxy and is heading toward	 ||\n");
				                printf("||			and is heading towards ours.	  	 ||\n");
				                printf("||  Help her defeat this evil trecherous emperor ||\n");
				                printf("||    and become the hero that you were always   ||\n");
				                printf("||					destined to be.			     ||\n");
				                printf("==================================================\n");
				                printf("============================================================\n");
				                printf("|| + Things to know befour you play this game             ||\n");
				                printf("|| - Its 1v1 trun base RPG game                           ||\n");
				                printf("|| - Attack the mosnter with your skills or basic attacks ||\n");
				                printf("|| - Monsters have low heath but they can deal massive    ||\n");
				                printf("|| - damage if they attack in group.                      ||\n");
				                printf("|| - Once you finish certain number of waves you will 	  ||\n");
				                printf("|| - Fight against the main boss						  ||\n");
				                printf("|| - Boss has high hp and difficult to kill.			  ||\n");
				                printf("============================================================\n");
				                getchar();
		                }
		                else if (newgame == 2){
			                system("clear");
			                printf("===================================================\n");
			                printf("||  Well Role playing games generally called RPG ||\n");
			                printf("||  are games in which you potray as a character ||\n");
			                printf("||	  given by the game or create your own.      ||\n");
			                printf("||  In this game you will be playing as the hero ||\n");
			                printf("||    Mamta whose only goal is to destroy the 	 ||\n");
			                printf("||  cosmic lord Ayush who has conquered over the ||\n");
			                printf("||    Andromeda galaxy and is heading toward	 ||\n");
			                printf("||			and is heading towards ours.	  	 ||\n");
			                printf("||  Help her defeat this evil trecherous emperor ||\n");
			                printf("||    and become the hero that you were always   ||\n");
			                printf("||					destined to be.			     ||\n");
			                printf("==================================================\n");
			                printf("============================================================\n");
			                printf("|| + Things to know befour you play this game             ||\n");
			                printf("|| - Its 1v1 trun base RPG game                           ||\n");
			                printf("|| - Attack the mosnter with your skills or basic attacks ||\n");
			                printf("|| - Monsters have low heath but they can deal massive    ||\n");
			                printf("|| - damage if they attack in group.                      ||\n");
			                printf("|| - Once you finish certain number of waves you will 	  ||\n");
			                printf("|| - Fight against the main boss						  ||\n");
			                printf("|| - Boss has high hp and difficult to kill.			  ||\n");
			                printf("============================================================\n");
			                getchar();
		                }
		                else {
			                printf("===================================================\n");
			                printf("||  Well Role playing games generally called RPG ||\n");
			                printf("||  are games in which you potray as a character ||\n");
			                printf("||	  given by the game or create your own.      ||\n");
			                printf("||  In this game you will be playing as the hero ||\n");
			                printf("||    Mamta whose only goal is to destroy the 	 ||\n");
			                printf("||  cosmic lord Ayush who has conquered over the ||\n");
			                printf("||    Andromeda galaxy and is heading toward	 ||\n");
			                printf("||			and is heading towards ours.	  	 ||\n");
			                printf("||  Help her defeat this evil trecherous emperor ||\n");
			                printf("||    and become the hero that you were always   ||\n");
			                printf("||					destined to be.			     ||\n");
			                printf("==================================================\n");
			                printf("============================================================\n");
			                printf("|| + Things to know befour you play this game             ||\n");
			                printf("|| - Its 1v1 trun base RPG game                           ||\n");
			                printf("|| - Attack the mosnter with your skills or basic attacks ||\n");
			                printf("|| - Monsters have low heath but they can deal massive    ||\n");
			                printf("|| - damage if they attack in group.                      ||\n");
			                printf("|| - Once you finish certain number of waves you will 	  ||\n");
			                printf("|| - Fight against the main boss						  ||\n");
			                printf("|| - Boss has high hp and difficult to kill.			  ||\n");
			                printf("============================================================\n");
			                getchar();
		                }
		            
					
					play_game();
		
		            printf("do you want to go to main menu [y/n] :");
		            scanf("%c",&reload);
		            
//		            if (reload == 'y') {
//		            	main();
//					}
//					else {
//						system("cls");
//			            printf("Have a great day bye bye ");
//			            reload = 'n';
//			            getchar();
//			            system("exit");
//					}
					
					getchar();
		
		            break ;
		  
		
		  
		
		  	case 2 :  	system("cls");
			            printf("Have a great day bye bye ");
			            reload = 'n';
			            getchar();
			            system("exit");
			            break ;
		
		
		
		  	default : 	printf("Enter a vailed number \n");
						printf("go to main menu [y/n] :");
						getchar();
						scanf("%c",&reload);
		}
}
}
}

void play_game()
{

    int counter = 0, x, y[5], hit, monster, hero, villian, score = 0, hit1, hit2, herolevel=1, j;
    
	    monster=60;
	    villian = 500;
	    hero=60;
	    int rand_int(int n);
	    int rand_int_lightning(int n);
	    int rand_int_fist(int n);
	    int rand_int_blackhole(int m);
	    srand(time(NULL));
	
		do{

			printf("\nCurrent Health of hero: %i\nAttack with what?\n 1:Sword\n 2:Lighting\n 3:Fist\n\n",hero);
			scanf("%i",&x);
			
			if(x==1)
			{
			
			        hit=rand_int(10);
			        monster=monster-hit;
			        printf("\nSWING!! Damage %i\n\n",hit);
			        if(monster < 0)
			        {
			            printf("You have killed the monster you win!\n\n");
			            printf("Congratulations!! You have passed to new level.\n\n");
			            herolevel += 1;
			            hero = hero + 50;
			            score = score + 100;
			            counter += 1;
			            printf("Your new hero level is %d\n\n", herolevel);
			            printf("New hero hp = %d\n\n", hero);
			            printf("Your score = %d\n\n", score);
			            break;
			        }
			        printf("The monsters life points are now %i\n\n",monster);
			        hit = rand_int(10);
			        hero = hero - hit;
			        printf("The monster takes a swing BANG! Damage %i!\n",hit);
			        if(hero < 0)
			        {
			            printf("You have been killed you lose.\n\n");
			            break;
			        }
			}
			else if(x==2)
			{
			        hit=rand_int_lightning(10);
			        monster=monster-hit;
			        printf("\nThe god Zues comes to your aid CLAAASH!! Damage %i\n\n",hit);
			        if(monster < 0)
			        {
			            printf("You have killed the monster you win!\n\n");
			            printf("Congratulations!! You have passed to new level.\n\n");
			            herolevel += 1;
			            hero = hero + 50;
			            score = score + 50;
			            printf("Your new hero level is %d\n\n", herolevel);
			            printf("New hero hp = %d\n\n", hero);
			            printf("Your score = %d\n\n", score);
			            counter += 1;
			            break;
			        }
			        printf("The monsters life points are now %i\n\n",monster);
			
			        hit = rand_int(10);
			        hero = hero - hit;
			        printf("The monster takes a swing BANG! Damage %i!\n\n",hit);
			        if(hero < 0)
			        {
			            printf("You have been killed you lose.\n\n");
			            break;
			        }
			
			}
			
			else if(x==3)
			{
			
			        hit = rand_int_fist(10);
			        monster = monster - hit;
			        printf("\nPUNCH!! Damage %i\n\n",hit);
			        if(monster < 0)
			        {
			            printf("You have killed the monster you win!\n\n");
			            printf("Congratulations!! You have passed to new level.\n\n");
			            herolevel += 1;
			            hero = hero + 50;
			            score = score + 100;
			            printf("Your new hero level is %d\n\n", herolevel);
			            printf("New hero hp = %d\n\n", hero);
			            printf("Your score = %d\n\n", score);
			            counter += 1;
			            break;
			        }
			        printf("The monster life points are now %i\n",monster);
			        hit=rand_int(10);
			        hero=hero-hit;
			        printf("\nThe monster takes a swing BANG! Damage %i!\n\n",hit);
			        if(hero < 0)
			        {
			            printf("You have been killed you lose.\n\n");
			            break;
			        }
			
			}
	}while(herolevel < 5);
			
	printf("====================================================================\n");
	printf("||        Congratulations!! You have cleared the monster waves    ||\n");
	printf("||        		   It is now time for boss fight   		          ||\n");
	printf("||          Be Cautious the final boss has huge hp and attack     ||\n");
  	printf("====================================================================\n");
  	
	
	do{
		
		printf("====================================================================\n");
		printf("||        Here you will be given 5 attack chances to defeat       ||\n");
		printf("||        		     the games main villian.       		          ||\n");
		printf("||           However if you mess up one attack is enough          ||\n");
		printf("||        		     		to kill you.       		              ||\n");
		printf("||        		     	   GoodLuck!!  %s						  ||\n", player.name);
  		printf("====================================================================\n");
  		
  		printf("\nCurrent Health of hero: %i\n Currrent Health of the Villian = %i\n Attack with what?\n 1:Sword\n 2:Lighting\n 3:Fist\n\n", hero, villian);
		for (j = 0; j < 5; j++) {
			scanf("%i", &y[j]);
			if (y[j] == 1) {
				hit = rand_int(10);
			}
			else if (y[j] == 2){
				hit = rand_int_lightning(10);
			}
			else if (y[j] == 3) {
				hit = rand_int_fist(10);
			}
			else if (y[j] == 4) {
				hit = rand_int(10) + rand_int_lightning(10) + rand_int_fist(10) + 200;
			}
			else {
				printf("Invalid Input.\n\n");
				printf("Please Enter Input From 1-3\n\n");
			}
		}	
		
		printf("\nDamage to the bose is %i\n\n", hit);
		villian = villian - hit;
			
		if(villian<0) {
			printf("You have now defeated the final boss.\n\n");
			printf("Congratualtions!! You have now completed the game.\n\n");
			score = score + 5000;
			FILE *ptr;
		       	ptr = fopen("user.txt","w");
		    	fprintf(ptr,"Player name =%s \t",player.name);
		        fprintf(ptr,"Final Score = %d \t", score);
		        fclose(ptr);
			break;
		}
		
		printf("The villian life point now is %i\n", villian);
		
		hit = rand_int_blackhole;
		hero = hero-hit;
		
		printf("\nHere comes a blackhole attack from Ayush.\n\n", hit);
		printf("\nYou have taken %i damage from Ayush.\n\n");
		
		if(hero < 0) {
			score = score + 100;
			printf("Your current score is %i.\n\n", score);
			printf("Here is a 1000 points tip for playing the game. Better luck next time.\n\n");
			score = score + 1000;
			FILE *ptr;
		       	ptr = fopen("user.txt","w");
		    	fprintf(ptr,"Player name =%s \t",player.name);
		        fprintf(ptr,"Final Score = %d \t", score);
		        fclose(ptr);
			printf("You have been killed you lose.\n\n");
			printf("The cosmic lord wins again.\n\n");
			printf("Your total score is %i.\n\n", score);
			break;
		}
		
  		
	} while (hero <= 0 || villian <= 0);
	
	printf("====================================================================\n");
	printf("||        			Thank you for playing our game.    			  ||\n");
	printf("||        		  	  Goodluck for your future %s 		          ||\n", player.name);
  	printf("====================================================================\n");
	
	system("exit");	
	
}
	int rand_int (int n)
	{
	    return rand()%n + 10;
	}
	int rand_int_lightning (int n)
	{
	    return rand()%n + 20;
	}
	int rand_int_fist(int n)
	{
	    return rand()%n +2;
	}
	int rand_int_blackhole(int m) {
		return rand()%m + 100;
	}

