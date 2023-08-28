
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void DrawTitle(void);
void DrawGod(void);
void Hangman(void);
void DrawHangman(int turn);
char PlayerSelection(void);
char CpuSelection(void);
void CheckResult(char playerSelection, char cpuSelection, int* result);
void RockPaperScisors(void);

int main()
{
	int menuOption = 0;
	char playerName[30] = { 'E','r','m','e','n','e','g','i','l','d','o', };
	char playerAdvice[75] = { 0 };
	int keepPlaying = 0;

	while (keepPlaying == 0)
	{

		DrawTitle();

		printf("Welcome,\n I am the game narrator,\n and i decide what could happen in this world that you voluntarily enter in\n what happens to you...\n But do not exist in this world yet\n Your name is: ");
		gets(playerName);

		printf("\nSo your name is %s,\nthat too normal for this game\n", playerName);
		printf("You lost your oportunity,\n but i will let you choose your weird adventure\n Choose a WEIRD character:\n 1- Tony Macarroni\n 2- Jean de la Baguette\n 3- Soldier Youdon Tsee\n remember, you have one life\n if you die, you restart ( and read everything again )\n");/////////////////////////////////////////////////
		printf(" It's time to choose: ");
		scanf_s("%i", &menuOption);

		printf("\n But before you start, guive an advise to you in your next life: ");
		gets(playerAdvice);

		if ((menuOption >= 1) || (menuOption <= 3))
		{
			switch (menuOption)
			{
			case 1:
			{
				int num01 = 0;
				int num02 = 0;
				int num03 = 0;
				int num04 = 0;

				system("cls");

				printf("Hi Italian Player\nWelcome to Madrid, te capital of Spain\nYour name is Tony Macarroni\n");
				printf("You work as a Bartender at your bar called : Macarroni 4 U\n");


				printf("Sudently a weird person enters and ask you to guive him all the money you have\nYou're shocked \n");
				printf("A few seconds pass, and the thief grabs you by the shirt,\nit's a matter of time that you will get punched\nTo win you must avoid the robbery\n");
				printf("The time has come \nYou have 3 options:\n(To choose a choice write the number of the choice and press enter)\n1-You cry\n2-You defend yourself\n3-You try to call the police\n");
				scanf_s("%i", &num01);

				if (num01 == 1)
				{
					printf("You start crying, letting him know that you don't like this situation,\nthe thief, disturbed, do a step back \nbut you still scared and keep crying\n");
					printf("By chance you step brother, Jony Caneloni, comes into the bar\nhe notice the situation and try to call the police\nBut the thief turns arround guiving to you his back\n");
					printf("You have an oportunity:\n1-You keep crying\n2-Jump on the theif\n3-You throw at him the cash register\n");
					scanf_s("%i", &num04);

					if (num04 == 1)
					{
						printf("You keep crying, the thief start a struggle with Caneloni but your brother isn't strong enought,\n he gets killed, you cry so loud that the thief/murderer run away\n");
						printf("Well done, you avoided the robbery, but you have post traumatic stress\n");
						printf("You WIN");

					}
					else if (num04 == 2)
					{
						printf("You take the oportunity and jump on the thief,\nYou break your neck on the floor, you're not a good jumper\nCaneloni run to help you\nthe thief get scared and run away\n");
						printf("You broke your neck, but stopped the robbery, clearly you payed a fair price\n");
						printf("You WIN, (but the money is spend on your funeral)");

					}
					else if (num04 == 3)
					{
						printf("You trow to the thief the cash register, he fall inconscient,\n the police arrive after the call of Caneloni and take the thief to the hospital,\n but the cash register has disapeared, Was the real thief Caneloni? \n");
						printf("You LOOSE, \nNever trust you step brother, specially if is name is Jony Caneloni \n");

					}
					else printf("\n Plaaaaaaayyyyy the Gaaaaaaammmmmeeeeee\n Now\n");
				}

				else if (num01 == 2)
				{
					printf("You defend yourself,\n using the spaguetti martial art that your grandmother teached you during your childhood\nYou actually push him off of you but he gets angrier\n");
					printf("Your mother, Mami Tortellini, enter in the bar\nYou must do something:\n1-Fight the oponent with your mother\n2-Don't do anything\n3-Ignore the thief\n4-Purpose to the criminal a peperoni pizza\n");
					scanf_s("%i", &num02);

					if (num02 == 1)
					{
						printf("You ask your mother if she remembers spaguetti martial art\nShe does remember it and the fight beggins\nYou hit him with raw spaggetis, while you mother hit him whith a baggette,\na larger and frech spaggeti");
						printf("The thief get hurt by the raw pasta and the brutal bread, the wounds are serious\n");
						printf("Well done, the robbery was avoided\n You WIN\nThe police arrive and send the thief to the hospital\nThen stay to eat some spaggeti");
						printf("\nYou are not playing the game :-(,\n That makes me Sad\n Restart the game so you can be respectfull");

					}
					else if (num02 == 2)
					{
						printf("You don't do anything,\nNothing\nYour mother leave the bar, scared by the crime that was about to be comitted\nThe mitutes pass and the thief starts pulling out the money of the cash register,\nYou lost all of your money\n");
						printf("You LOOSE,\nCome on! You could have done something");

					}
					else if (num02 == 3)
					{
						printf("You ignore the thief and prepare some sandwiches for the costumers\nHe looks at the sandwiches and decide to steal some euros and buy you one of the sanwiches\n");
						printf("He starts a conversation, and present himself, his name is Alberti Macarroni\nHe is your disapeared brother!\nYou decide to do a robbery with him, to get some extra money\n");
						printf("You WIN,\nAnd got an extra money from the robbery $$$$ ");

					}
					else if (num02 == 4)
					{
						printf("You purpose to him a (very spicy) peperoni pizza\nHe accepts,\nA few minutes later the pizza is ready\n He starts eating it, but he suddently need to go to the toilet\n during this time your mother call the police\nHe gets arreste but get vthe pizza for free\n");
						printf("You LOOSE,\nWell done Tony Macarroni,\nYou're a master with the peperoni\nBut your restorant got close by the ministry of health\nYour money was in the bar :-( ");

					}
					else
					{
						printf("\nYou are not playing the game :-(,\n so i just killed you, even if you didn't noticed");

					}
				}
				else if (num01 == 3)
				{
					printf("You take you phone, and call the police,\nYour child enter in the bar\nThe thief release you, and in an emotional breakdown, start crying\nWhat do you say to the police?\n");
					printf("1-You tell the truth\n2-You tell them that your child tryed to rob you\n3-You hang up the call and guive a hug to the thief");
					scanf_s("%i", &num03);

					if (num03 == 1)
					{
						printf("You tell the police that a man is robbing you, the police is coming\nThe thief get enraged and punches the bar counter\n He broke his hand\n You guive him some ice to reduce his pain\n The police arrives and gets arrested\n");
						printf("You WIN, but your child got traumatized by the event\nYou pay him a psicologue for one year");

					}
					else if (num03 == 2)
					{
						printf("You tell the police that your child is robbing you\nThe police arrest you for accusing a 8 yaers old kid\nEven the thief support the kid, guiving to him a lolipop payed with the money he stole to you\n");
						printf("You LOOSE,\nYou lost the money, your liberty, your child respect and you're the worst father in the prison");

					}
					else if (num03 == 3)
					{
						printf("You turn off your phone during the conversation, and look in the eyes the thief,\nYou go arround the bar counter and hug him, he hugs you back\nBoth of you forguet what happened some minutes before and start a new life in a new country, Armenia\n");
						printf("You WIN,\nHe didn't stole your money but your heart ;-)");
					}
					else printf("\n Your phone blow up your head\n You don't die but you get robbed\n (you lost in case you didn't noticed)");
				}
				else
				{
					printf("\nYou are not playing the game :-( ,\n That makes me Sad\n Restart the game so you can be respectfull (your character dies in lonelyness)");
				}

			}break;
			case 2:
			{
				/*
				system("cls");

				printf("\n There is no option 2 yet\n play a hangman instead\n ok?\n (you don't have option to don't play it)\n Enjoi");
				getchar();

				Hangman();
				*/
			}break;
			case 3:
			{
				/*
				system("cls");

				printf("\n There is no option 3 yet\n Please insted, do nothing, thanks\n");
				getchar();

				printf("\n I'm kidding, play a rock paper scisors againts an evil cpu\n");

				RockPaperScisors();
				*/
			}break;
			default:break;
			}
		}
		else
		{
			int godOption = 0;

			system("cls");

			printf(" You didn't chosed\n That will cost your normal life as %s,\n GOD will make you weird!!!!!!!\n", playerName);
			system("pause");

			DrawGod();

			printf(" GOD is sad or angry (nobody will never know)\n What will %s do?\n 1- Nothing\n 2- Say sorry\n 3- Try to kill him\n Choose: ", playerName);
			scanf_s("%i", &godOption);

			switch (godOption)
			{
			case 1:
			{
				printf("\n You do nothing, %s die by natural causes\n Restart and play the game again...", playerName);
			}break;
			case 2:
			{
				printf("\n You say sorry,\n but the only way to get forbiden is to guive 5$ to the game creator\n Thanks ;-)\n Restart and play the game again...");
			}break;
			case 3:
			{
				printf("\n You punch him on his arm, he cryes, and run until you don't see him,\n is seems that he wasn't God,\n you die form depresion after ''probably'' killing god...\n Rsestart the game please");
			}break;
			default:
			{
				for (int lol = 0; lol <= 100; lol++)
				{
					printf(" I Give Up \n");
					printf(" %s \n", playerAdvice);
				}
				printf("\nRestart the game...");
			}break;
			}
		}

		if ((playerName == "Narrator") || (playerName == "narrator"))
		{
			printf(" The result is : \n");
			for (int i = 0; i <= 100; i++)
			{
				printf(" 1 = (2 / 2)");
			}
		}
		else if ((playerName == "God") || (playerName == "god"))
		{
			for (int i = 0; i <= 100; i++)
			{
				printf(" U R not GOD");
			}
		}
		else;
	}
	system("cls");

	printf(" The game just ended, do you want to restart?\n (0 = yes)\n   ");
	scanf_s("%i", &keepPlaying);

	system("cls");

	return 0;
}

void Hangman(void)
{
	int keepPlaying = 1;

	unsigned char words[10][20] = { "hotdog", "doghot", "god", "narrator", "thegermanbadguy", "trump", "guiveup", "staline", "stanly", "depresion" };
	int guessLetterHits[20] = { 0 };
	int wordLength = 0;

	int currentWord = -1;
	int triesCount = 0;
	char letter = 0;

	srand(time(NULL));

	currentWord = rand() % 10;

	wordLength = strlen(words[currentWord]);

	while (keepPlaying)
	{
		system("cls");

		for (int i = 0; i < wordLength; i++)
		{
			if (guessLetterHits[i])
			{
				printf(" %c", words[currentWord][i]);
			}
			else
			{
				printf(" _");
			}
		}

		printf("\n Write a letter coward: ");
		scanf_s(" %c", &letter);

		system("cls");

		for (int i = 0; i < wordLength; i++)
		{
			if (letter == words[currentWord][i])
			{
				guessLetterHits[i] = 1;
			}
			else;
		}

		int hitLetters = 0;

		for (int i = 0; i < wordLength; i++)
		{
			if (guessLetterHits[i])
			{
				hitLetters += 1;
			}
			else;
		}

		if (hitLetters == wordLength)
		{
			printf("\n You stay alive,\n For the moment\n");

			keepPlaying = 0;
		}
		else
		{
			triesCount++;

			DrawHangman(triesCount);

			if (triesCount == 6)
			{
				printf(" You got hangued but at least you can play again...  ;-)");

				keepPlaying = 0;
			}
			else;
		}
	}
}



void RockPaperScisors(void)
{
	int keepPlaying = 1;
	int gamesWonPlayer = 0;
	int gamesWonCpu = 0;
	int roundsWonPlayer = 0;
	int roundsWonCpu = 0;
	char playerSelection = '-';
	char cpuSelection = '-';
	int roundResult = 0;
	int roundsCount = 0;

	srand(time(NULL));

	while (keepPlaying == 1)
	{
		while ((roundsWonCpu < 2) && (roundsWonPlayer < 2))
		{

			playerSelection = PlayerSelection();

			cpuSelection = CpuSelection();

			CheckResult(playerSelection, cpuSelection, &roundResult);

			if (roundResult)
			{
				if (roundResult == 1)
				{
					printf("\n You win the round\n");
					roundsWonPlayer++;
				}
				else
				{
					printf("\nThe CPU won the round\n");
					roundsWonCpu++;
				}
			}
			else
			{
				printf("\n WOW, it's a drawn\n");
			}
			system("pause");
			system("cls");
		}

		if (roundsWonPlayer == 2)
		{
			printf("\n You WIN\n");
			gamesWonPlayer++;
		}
		else if (roundsWonCpu == 2)
		{
			printf("\n The CPU WINS\n");
			gamesWonCpu++;
		}

		roundsWonPlayer = 0;
		roundsWonCpu = 0;
		roundsCount = 0;

		printf(" Player Wins: %d \n", roundsWonPlayer);
		printf(" CPU Wins: %d\n", roundsWonCpu);

		system("cls");
		printf("Do you want to keep playing: \n Y - Yes\n N - No");
		scanf_s(" %c", &playerSelection);

		if ((playerSelection == 'y') || (playerSelection == 'Y'))
		{
			keepPlaying = 1;
		}
		else
		{
			keepPlaying = 0;
		}
	}
	return 0;
}

char PlayerSelection(void)
{
	char playerSelection = '0';
	int valid = 1;

	printf(" Select 'r' for Rock,'p' - Paper and 's' - Scissor\n  ");
	scanf_s(" %c", &playerSelection);

	while (valid == 1)
	{
		if (playerSelection == 'r')
		{
			valid = 0;

			return 'r';
		}
		else if (playerSelection == 'p')
		{
			valid = 0;

			return 'p';
		}
		else if (playerSelection == 's')
		{
			valid = 0;

			return 's';
		}
		else
		{
			valid = 1;
		}
	}
}

char CpuSelection(void)
{
	char cpuOptions[3] = { 'r', 'p', 's', };

	char cpuOption = cpuOptions[rand() % 3];

	return cpuOption;
}

void CheckResult(char playerSelection, char cpuSelection, int* result)
{
	if (playerSelection == 's')
	{
		if (cpuSelection == 'p')
		{
			*result = 2;
		}
		else if (cpuSelection == 's')
		{
			*result = 1;
		}
	}
	else if (playerSelection == 'p')
	{
		if (cpuSelection == 'r')
		{
			*result = 1;
		}
		else if (cpuSelection == 's')
		{
			*result = 2;
		}
	}
	else if (playerSelection == 's')
	{
		if (cpuSelection == 'r')
		{
			*result = 2;
		}
		else if (cpuSelection == 'p')
		{
			*result = 1;
		}
	}
}
void DrawTitle(void)
{
	printf("  \n");
	printf("  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("  X                                                                                               X\n");
	printf("  X  WWW         WWW          WWW   EEEEEEEEEEEEEEE   IIII   RRRRRRRRR        DDDDDDDDD           X\n");
	printf("  X  WWW        WWWWW         WWW   EEEE              IIII   RRRR    RRRR     DDDD   DDDD         X\n");
	printf("  X   WWW      WWW  WWW      WWW    EEEE              IIII   RRRR      RRRR   DDDD     DDDD       X\n");
	printf("  X   WWW      WWW  WWW      WWW    EEEE              IIII   RRRR     RRRR    DDDD      DDDD      X\n");
	printf("  X   WWW      WWW  WWW      WWW    EEEEEEEEEE        IIII   RRRRRRRRRR       DDDD      DDDD      X\n");
	printf("  X   WWW     WWW    WWW     WWW    EEEE              IIII   RRRR    RRRR     DDDD      DDDD      X\n");
	printf("  X    WWW    WWW    WWW    WWW     EEEE              IIII   RRRR     RRRR    DDDD     DDDD       X\n");
	printf("  X     WWW  WWW      WWW  WWW      EEEE              IIII   RRRR      RRRR   DDDD   DDDD         X\n");
	printf("  X      WWWWW         WWWWW        EEEEEEEEEEEEEEE   IIII   RRRR      RRRR   DDDDDDDDD           X\n");
	printf("  X                                                                                               X\n");
	printf("  X  LLLL             IIII   FFFFFFFFFFFFFF   EEEEEEEEEEEEEEE     SSSSSSSS                        X\n");
	printf("  X  LLLL             IIII   FFFFFFFFFFFFF    EEEE              SSSSS  SSSSS                      X\n");
	printf("  X  LLLL             IIII   FFFF             EEEE              SSSS                              X\n");
	printf("  X  LLLL             IIII   FFFFFFFFF        EEEE               SSS                              X\n");
	printf("  X  LLLL             IIII   FFFFFFFF         EEEEEEEEEE           SSS                            X\n");
	printf("  X  LLLL             IIII   FFFF             EEEE                   SSSSS                        X\n");
	printf("  X  LLLL             IIII   FFFF             EEEE               SS      SSSS                     X\n");
	printf("  X  LLLLLLLLLLLLLL   IIII   FFFF             EEEE               SSS    SSSSS                     X\n");
	printf("  X  LLLLLLLLLLLLLL   IIII   FFFF             EEEEEEEEEEEEEEE      SSSSSSS                        X\n");
	printf("  X                                                                                               X\n");
	printf("  X                                                                         REALLY!!!             X\n");
	printf("  X                                                                                               X\n");
	printf("  XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n");
	printf("  \n");
}


void DrawGod(void)
{
	printf("  \n");
	printf("  \n");
	printf("         God:\n");
	printf("  \n");
	printf("                       iiiiiiii \n");
	printf("                        iiiiiiiii\n");
	printf("                         iiiiiiiiiiii\n");
	printf("                         iiiiiiiiiiiiii\n");
	printf("                        (   ( 0)     ( 0)  )       \n");
	printf("                        (         I        )       \n");
	printf("                        (                  )       \n");
	printf("                        (        iii       )         \n");
	printf("     ANGRY / SAD ------>   ¡(   i   i   )¡           \n");
	printf("                            ¡¡¡¡¡¡¡¡¡¡¡¡             \n");
	printf("                             ¡¡¡¡¡¡¡¡¡¡               \n");
	printf("                               ¡¡¡¡¡¡                                 \n");
	printf("                                 ¡¡                              \n");
	printf("                                 I                                \n");
	printf("                              IIIIIII                     \n");
	printf("                             I   I   I                 \n");
	printf("                             I   I   I                              \n");
	printf("                             I   I   I                         \n");
	printf("                             I   I   I                            \n");
	printf("                                 I                        \n");
	printf("                                 I                      \n");
	printf("                                 I                       \n");
	printf("                              IIIIIII                          \n");
	printf("                              I     I                          \n");
	printf("                              I     I                                \n");
	printf("                              I     I                             \n");
	printf("                              I     I                                 \n");
	printf("                           ----     ---- \n");
	printf("  \n");
	printf("  \n");
}

void DrawHangman(int turn)
{
	switch (turn)
	{
	case 0:
	{
		printf("\n");
		printf("   ___________________________________\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                  //////\n");
		printf("                                //////////\n");
		printf("                                //////////\n");
		printf("                             ////////////////\n");
		printf("   ______________________///////////////////////\n");
		printf("\n");
	}
	case 1:
	{
		printf("\n");
		printf("   ___________________________________\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                  //////\n");
		printf("                                //////////\n");
		printf("                                //////////\n");
		printf("                             ////////////////\n");
		printf("   ______________________///////////////////////\n");
		printf("\n");
	}
	case 2:
	{
		printf("\n");
		printf("   ___________________________________\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         ^                         ||||\n");
		printf("      ( ;-) )                      ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                   ||||\n");
		printf("                                  //////\n");
		printf("                                //////////\n");
		printf("                                //////////\n");
		printf("                             ////////////////\n");
		printf("   ______________________///////////////////////\n");
		printf("\n");
	}
	case 3:
	{
		printf("\n");
		printf("___________________________________\n");
		printf("      |                         ||||\n");
		printf("      |                         ||||\n");
		printf("      |                         ||||\n");
		printf("      ^                         ||||\n");
		printf("   ( ;-) )                      ||||\n");
		printf("  ____|                         ||||\n");
		printf("      |                         ||||\n");
		printf("      |                         ||||\n");
		printf("      ^                        //////\n");
		printf("                             //////////\n");
		printf("                             //////////\n");
		printf("                          ////////////////\n");
		printf("______________________///////////////////////\n");
		printf("\n");
	}
	case 4:
	{
		printf("\n");
		printf("   ___________________________________\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         ^                         ||||\n");
		printf("      ( ;-) )                      ||||\n");
		printf("     ____|____                     ||||\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         ^                        //////\n");
		printf("                                //////////\n");
		printf("                                //////////\n");
		printf("                             ////////////////\n");
		printf("   ______________________///////////////////////\n");
		printf("\n");
	}
	case 5:
	{
		printf("\n");
		printf("  Ok\n that is not funny,\n nobody should die");
		printf("\n");
	}
	case 6:
	{
		printf("\n");
		printf(" I was kidding\ ;-)");
		printf("\n");
		printf("   ___________________________________\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         ^                         ||||\n");
		printf("      ( ;-) )                      ||||\n");
		printf("     ____|____                     ||||\n");
		printf("         |                         ||||\n");
		printf("         |                         ||||\n");
		printf("         ^                        //////\n");
		printf("        | |                     //////////\n");
		printf("        | |                     //////////\n");
		printf("     ---- ----               ////////////////\n");
		printf("   ______________________///////////////////////\n");
		printf("\n");
	}
	}
}