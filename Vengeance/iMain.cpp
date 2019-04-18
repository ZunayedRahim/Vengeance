#include "iGraphics.h"
#include "bitmap_loader.h"
#include "variables.h"
#include "fileFunctions.h"
#include "imageLoader.h"
#include "miniGame1.h"
#include "userInterface.h"
#include "functionsForStory.h"
#include "mouseRelatedFunctions.h"
#include "vengeancepictures.h"
#include "gameplayVariables.h"
#include "gameplayFunctions.h"
#include "gameplayStructure.h"
#include "gameplayiDraw.h"
#include "gamePlayiMouse.h"
#include "gamePlayiSpecialKeyboard.h"
#include "gamePlayiKeyboard.h"


void iPassiveMouse(int mx, int my)
{
	cursorMX = mx;
	cursorMY = my;
	printf("x = %d, y= %d\n", cursorMX, cursorMY);
	
	/*
	name			: iPassiveMouseForMenu
	functionality	: 1. Used in iPassiveMouse()
					  2. whenever user moves the cursor around certain options a white rectangle appears to let the user know it is selected				  
*/	if(gamePlayStart == false)
	iPassiveMouseForMenu();

}

void soundPlaying(){
	
}
void iDraw()
{
	//place your drawing codes here
	if(gamePlayStart == false)
	{
	iClear();
	
	/*if(modeNewGame == true && chapter5Index == 1)
		{
			PlaySound("sound\\intro", NULL, SND_LOOP |SND_ASYNC);
			//chapter4Sound=false;
		*/
	//printf("Index 1: %d\nIndex 2: %d\nIndex 3: %d\nModenewChapter4 :%d\nMinigame: %d\n Load Game: %d\n",chapter1Index,chapter3Index,chapter4Index,modeNewChapter4,modeMiniGame,loadScreenMode);
	
	if(modeOpen==1) //modeOpen=1 in iMain(); when the game starts it is initialized
		iShowImage(0,0,screenWidth,screenHeight,image1);//Shows the warning image
	if(modeOpen==2) //modeOpen=2 after warning has been showed for a particular amount of time
	{
		iShowImage(0,0,screenWidth,screenHeight,image2);//Shows the Title Screen
	}

	/*
	name			: drawMenu
	functionality	: 1. Used in iDraw()
					  2. called to start showing the menu
					  3. shuffles through entities under different conditions					  
*/	if(chapter6Index == 63)
{
	exit(0);
}
	if(modeOpen>2) //modeOpen++ after title screen has been showed for a particular amount of time
		drawMenu(); //Shows the menu
	if(modeOpen>2 && modeBack==1) 
		drawMenu();//if you switch from menu to different places and press "back" to return it calls the drawMenu function again.

	if(modeQuit == true)
		quitGame();

	
/*
	name			: newGame
	functionality	: 1. Used in iDraw()
					  2. called to start playing the story mode
					  3. shuffles through chapters under different conditions					  
*/
	if(modeOpen>2 && modeNewGame == true)
		newGame();
/*
	name			: fileContinueFunction
	functionality	: 1. Used in iMouse()
					  2. Used for loading game
					  3. it reads specific indexes from a .txt	file
					  4. it assigns values from .txt file to load certain parts of games that user previously saved
*/
	if(modeContinueGame == true)
	{
		fileContinueFunction();

	}
	//minigame();
	/*if(chapter4Index==38 && modeNewGame==true)
		{
			soundForChapter5=true;
			printf("cond for 5 bool true");
				//soundPlaying();
	}
	if(soundForChapter5 ==true)
	{
		printf("sound will be played\n");
		PlaySound("sound\\Pudding & Pie", NULL, SND_LOOP |SND_ASYNC);
	}*/
	
	}

	//GAMEPLAYCODES STARTS ____________________________________________________________
if(gamePlayStart == true)
{
		gamePlay();
}



}


void iMouseMove(int mx, int my)
{
	dragMX = mx;
	dragMY = my;
	printf("x = %d, y= %d\n", dragMX, dragMY);
	//place your codes here
}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	
	if(gamePlayStart == false)
	{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
	/*
		name			: loadGameFunction
		functionality	: 1. Used in iMouse()
						  2. when user selects continue game, it calls fileContinueFunction() to load the game from the FILE
						  3. when user selects load game, it sets loadScreenMode = 1 so that load screen stuffs appear
						  4. when user selects chapters to load, this function bounds certain areas and the new chapter opens when it is pressed.
	*/ 
		loadGameFunction();		
/*
		name			: creditsFunction
		functionality	: 1. Used in iMouse()
						  2. when user selects credits, it calls creditsFunction() to show credits
						  3. when user selects "back", it calls creditsFunction() to go back to menu.					  
*/
		creditsFunction();// Menu --> Credits || Credits --> Menu
		//Menu to quit
		//change
		if(cursorMX>=112 && cursorMX<=190 && cursorMY>=590 && cursorMY<=623 && modeOpen>2)//going to
		{

			modeQuit = true;
		}

		//click click click quit

		if(cursorMX>=630 && cursorMX<=1001 && cursorMY>=731 && cursorMY<=761 && modeOpen>2 && modeQuit == true)
		{	//but icouldadljad give up now
			if(inGameQuit == true)// game theke quit theke game : resume
			{
				modeNewGame = true;
				//inGameQuit == false;
			}
			else
			{	modeBack=1; //menu theke quit menu
			drawMenu();
			modeQuit= false;}
		}

		if(cursorMX>=630 && cursorMX<=1001 && cursorMY>=770 && cursorMY<=800 && modeOpen>2 && modeQuit == true)
		{


			exit(0);//yes i want to quit
		}

/*
	name			: optionsFunction
	parameter		: none
	return type		: void
	functionality	: 1. Used in iMouse()
					  2. when user selects option, it calls optionsFunction() to show credits
					  3. when user selects "back", it calls optionsFunction() to go back to menu.					  
*/
		optionsFunction();// Menu --> Options || Options --> Menu
		//continue

	if(cursorMX>=117 && cursorMX<=262 && cursorMY>=835 && cursorMY<=857 && modeOpen>2 && modeNew==2)
		{
			//modeContinueGame = true;
			//flagForContinue=1;
			fileContinueFunction();
			//chapter1Sound = true;//thik
		}
		//newgameopens
		if(cursorMX>=114 && cursorMX<=267 && cursorMY>=890 && cursorMY<=921 && modeOpen>2)
		{
			modeNewGame = true;
			chapter1Sound = true;
		}
		if(modeNewGame==true && chapter1Sound==true)
		{
			PlaySound("sound\\The GIRL", NULL, SND_LOOP |SND_ASYNC);
		}
		

		minigameCodes();

		/*if(cursorMX>=164 && cursorMX<=309 && cursorMY>=621 && cursorMY<=809  && chapter1Index==71)
		{
		//modeMiniGame = 1;
		chapter1Index = 72;
		}
		if(cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter1Index>71 && chapter1Index<78)
		{
		//modeMiniGame = 1;
		chapter1Index = 73;
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter1Index>71 && chapter1Index<78)
		{
		//modeMiniGame = 1;
		chapter1Index = 74;
		}
		if(cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter1Index>71 && chapter1Index<78)
		{
		//modeMiniGame = 1;
		chapter1Index = 75;
		}
		if(cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634  && chapter1Index>71 && chapter1Index<78)
		{
		//modeMiniGame = 1;
		chapter1Index = 76;
		}
		if(cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=82  && chapter1Index>71 && chapter1Index<78)
		{

		chapter1Index = 77;
		}*/

		//choosing the first evidence----corpse//
/*
		if( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634    && chapter3Index==13)
		{
		chapter3Index = 34; //corpse-blood-hand

		}
		if(  cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634    && chapter3Index==13)
		{
		chapter3Index = 34; //corpse-blood-hand

		}
		if(  cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634    && chapter3Index==13)
		{
		chapter3Index = 34; //corpse-blood-hand
		}
		*/
		}
if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
		{


		}
	}

	//GAMEPLAY CODES________________________________________________________

	if(gamePlayStart == true)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(gamePlayStart==true)
			{
				gamePlayiMouseLMBDOWN();
			}
	}

	if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
	{
		if(gamePlayStart==true)
			gamePlayiMouseLMBUP();
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{	
		if(gamePlayStart==true)
			gamePlayiMouseRMBDOWN();
	}
		
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_UP)
	{	
		if(gamePlayStart==true)
			gamePlayiMouseRMBUP();
	}
	
	}
	}


/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/

void iKeyboard(unsigned char key)
{
	if(key == 'p')
	{
		PlaySound(0,0,0);
	}
	if(gamePlayStart == false)
	{

	if(key == 'q')
	{
		modeQuit = true;
		modeNewGame = false;
		inGameQuit =true;
	}
	if(key == 'r')
	{
		bossConvoRoute=1;
		chapter4talk = false;
	}

	/*
	name			: fileSavingFunction
	functionality	: 1. Used in iMouse()
					  2. Used for saving game
					  3. it saves specific indexes to a .txt					 
*/
	if(key == 'm')
		fileSavingFunction();//game is saved
	if(key == ' ')
		changeScene();
	//for changing scene use formula : present to future : (present + 1, present + 1,future);

	/*
	name			: yesNoOption
	functionality	: 1. Used in iSpecialKeyboard()
					  2. Used in choice selection
					  3. When it is called by yesNoOption(a,b) then pic[a] changes to pic[b]
					  4. General syntax: 
										if(any_conditions && currentIndex+1)
											yesNoOption(currentIndex+1,theIndexYouWantToGo)
*/
	if(key == ' ' && chapter1Index == 38)
		yesNoOption(38,39);//BusStopChatting
	if(key == ' ' && chapter1Index == 55)
	{
		yesNoOption(55,56);//BossConvoPoliteRoute
		bossConvoRoute=0;
	}
	if(key == ' ' && chapter1Index == 57 && bossConvoRoute==0)
		yesNoOption(57,63);
	if(key == ' ' && chapter1Index == 56 && bossConvoRoute==1)
		yesNoOption(56,57);
	if(key == ' ' && chapter1Index == 58 && bossConvoRoute==1)
		yesNoOption(58,58);//kaaj kore nai 1
	if(key == ' ' && chapter1Index == 59 && bossConvoRoute==1)
		yesNoOption(59,60);// 58 to 60
	if(key == ' ' && chapter1Index == 60 && bossConvoRoute==1)
		yesNoOption(60,60); //59 to 60
	if(key == ' ' && chapter1Index == 64 )
		yesNoOption(64,65);

	if(key == ' ' && chapter4Index == 35 )
	{
		yesNoOption(35,36);
		chapter4talk = true;
	}
	if(key == ' ' && chapter4Index == 36 && chapter4talk == false )
		yesNoOption(36,37);
	if(key == ' ' && chapter4Index == 37 && chapter4talk == true )
		yesNoOption(37,38);
	// Chapter 5 begins
	
	//first branch - piano
	
	if(key == ' ' && chapter5Index == 8)
		{
			yesNoOption(8,9);
			chapter5Convo1=true;
			pianoRyoko=false;
		}
	if(key == ' ' && chapter5Index == 9 && chapter5Convo1==false)
		{
			yesNoOption(9,10);
			pianoRyoko=true;
		}
	if(key == ' ' && chapter5Index == 10 && chapter5Convo1==true)
		yesNoOption(10,11);

		//2nd branch life story selection
	//pAST
	if(key == ' ' && chapter5Index == 13)
		{
			yesNoOption(13,14);
		chapter5ConvoPast = true;
	}

	if(key == ' ' && chapter5Index == 20 && chapter5ConvoPast == true)
		{
			yesNoOption(20,29);

	}
	//present
	if(key == ' ' && chapter5Index == 14 && chapter5ConvoPast==false)
		{
			yesNoOption(14,20);
		}
	if(key == ' ' && chapter5Index == 31)
		{
			yesNoOption(31,32);
			chapter5ConvoCall= true;
			 pianoRyoko = false;
			 //printf("piano kinlam na\n");
		}
	if(key == ' ' && chapter5Index == 32  && chapter5ConvoCall == false)
		{
			yesNoOption(32,32);
			pianoRyoko=true;
			//printf("piano kini fellam\n");
		}
	
if(key == ' ' && chapter5Index == 51 && chapter5Zero==false)//zero
		{
			yesNoOption(51,52);
			chapter5Zero= true;
			 
		}
	if(key == ' ' && chapter5Index == 52  && chapter5Zero == false)//1
		{
			yesNoOption(52,55);

		}
	bool zero=false;
    if(key == ' ' && chapter5Index==55 && chapter5Zero ==true)//zero
	{
			yesNoOption(55,73);
			zero = true;
	}
	bool pathPiano=false;
	if(key == ' ' && chapter5Index==75 && pianoRyoko == false)
	{
		//printf("piano nai c1\n");
		yesNoOption(75,76);
		pathPiano=true;
	}

	if(key == ' ' && chapter5Index==76 && pianoRyoko == true)
	{
		//printf("piano ase c2\n");
		yesNoOption(76,77);
		pathPiano=true;
	}
	/*	if(key == ' ' && chapter5Index==75 && pianoRyoko == false && pathPiano==false)
	{
		yesNoOption(75,76);
		printf("piano nai c1\n");
	}*/

	if(key == ' ' && chapter5Index==76 && pianoRyoko==true && pathPiano == true)
		{
			yesNoOption(76,77);
			//printf("piano ase c2\n");
	}
	/*if(key == ' ' && chapter5Index==77 && pianoRyoko==false && pathPiano==false)
		{
			yesNoOption(77,77);
			printf("piano nai c2\n");
	}*/
	//minigame 2 starts //

	
	//THE KID --- THE GIRL --- THE GUY --- VALKENHAYN --- PATHS//

	//__________________P A T H  O N E_______________//chapter5Index
	if(key == ' ' && chapter5Index==58 && zero==false)
	{
		//printf("p1 c1 \n");
		//printf("\n%d %d %d %d %d\n",chapter5Index,chapter5Path1,chapter5Path2,chapter5Path3,chapter5Path4);
		yesNoOption(58,62);
		chapter5Path1 = true;

	}
	//bool chapter5Path1Way= false
	if(key == ' ' && chapter5Index==63 && chapter5Path1 ==true)
	{
       yesNoOption(63,69);//ded kid,gal
	  // chapter5Path1Way=true;
	}

	if(key == ' ' && chapter5Index==64 && chapter5Path1 ==false )
	{
			yesNoOption(64,70);//ded kid
	}

	if(key == ' ' && chapter5Index==70 && chapter5Path1 == true )
	{
		yesNoOption(70,72);// feelsbadman
	}
	if(key == ' ' && chapter5Index==71 && chapter5Path1 == false )
	{
		yesNoOption(71,72);// feelsbadman
	}

	//__________________P A T H   T W O______________________//
	
	if(key == ' ' && chapter5Index==59)
	{
		//printf("p2 c1 \n");
		//printf("\n%d %d %d %d %d\n",chapter5Index,chapter5Path1,chapter5Path2,chapter5Path3,chapter5Path4);
		yesNoOption(59,64);//dedgal
		chapter5Path2 = true;

	}
	//bool chapter5Path1Way= false
	if(key == ' ' && chapter5Index==65 && chapter5Path2 ==true)
	{
       yesNoOption(65,68);//ded kid,gal
	  // chapter5Path1Way=true;
	}

	if(key == ' ' && chapter5Index==66 && chapter5Path2 ==false )
	{
			yesNoOption(66,71);//ded gal,guy
	}

	if(key == ' ' && chapter5Index==69 && chapter5Path2 == true )
	{
		yesNoOption(69,72);// feelsbadman
	}
	if(key == ' ' && chapter5Index==72 && chapter5Path2 == false )
	{
		yesNoOption(72,72);// feelsbadman
	}

	//__________________P A T H   T H R E E______________________//
	
	if(key == ' ' && chapter5Index==60)
	{
		//printf("p3 c1 \n");
		//printf("\n%d %d %d %d %d\n",chapter5Index,chapter5Path1,chapter5Path2,chapter5Path3,chapter5Path4);
		yesNoOption(60,66);//dedgal
		chapter5Path3 = true;
	}
	//bool chapter5Path1Way= false
	if(key == ' ' && chapter5Index==67 && chapter5Path3 ==true)
	{
       yesNoOption(67,70);//ded kid,gal
	  // chapter5Path1Way=true;
	}

	if(key == ' ' && chapter5Index==68 && chapter5Path3 ==false )
	{
			yesNoOption(68,71);//ded gal,guy
	}

	if(key == ' ' && chapter5Index==71 && chapter5Path3 == true )
	{
		yesNoOption(71,72);// feelsbadman
	}
	if(key == ' ' && chapter5Index==72 && chapter5Path3 == false )
	{
		yesNoOption(72,72);// feelsbadman
	}
	//__________________P A T H   F O U R______________________//
	if(key == ' ' && chapter5Index==61)
	{
		printf("p4 c1 \n");
		printf("\n%d %d %d %d %d\n",chapter5Index,chapter5Path1,chapter5Path2,chapter5Path3,chapter5Path4);
			yesNoOption(61,61);//ded kid
			chapter5Path4=true;
	}
		
		if(key == ' ' && chapter5Index==62 && chapter5Path4==true)
	{
		printf("p4 c2 \n");
		printf("\n%d %d %d %d %d\n",chapter5Index,chapter5Path1,chapter5Path2,chapter5Path3,chapter5Path4);
			//yesNoOption(62,57);//ded kid
			chapter5Index=57;
			chapter5Path1 = false;
			chapter5Path2 = false;
			chapter5Path3 = false;
			chapter5Path4 = false;
	}

		}

		//GAMEPLAY CODES __________________________________________________________________
	if(gamePlayStart == true)
		{

			if(key == ' ' && adachidead == true)
			{
				gameOverSpace();
			}

			if(key == 27 && adachidead == true)
			{
				gameOverESC();
			}
			
	if (key == 'd')
	{
		if(gamePlayStart==true)
		keyD();
	}
	if (key == 'a' && x>0)
	{
		if(gamePlayStart==true)
		keyA();
	}
	if(key == 's')
	{
		if(gamePlayStart==true)
		keyS();

	}

	if(key == ' '||key=='w')
	{
		if(gamePlayStart==true)
		keySpace();
	}

	if(key == 'r')
	{
		if(gamePlayStart==true)
		keyR();
	}
	if(key == 27)
	{
		if(gamePlayStart==true)
		exit(0);
	}
		}
		}
/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if(gamePlayStart == false)
	{
	if (key == GLUT_KEY_F6)
	{
		//exit(0);
		//modeQuit = true;
	}

	if (key == GLUT_KEY_DOWN && chapter1Index==37)
	{
		chapter1Index=38;//first choice
	}
	if (key == GLUT_KEY_UP && chapter1Index==38)
	{
		chapter1Index=37;//seconds choice
	}

	if (key == GLUT_KEY_DOWN && chapter1Index==54)
	{
		chapter1Index=55;
	}
	if (key == GLUT_KEY_UP && chapter1Index==55)
	{
		chapter1Index=54;
	}

	if (key == GLUT_KEY_DOWN && chapter1Index==58)
	{
		chapter1Index=59;
	}
	if (key == GLUT_KEY_UP && chapter1Index==59)
	{
		chapter1Index=58;
	}
	if (key == GLUT_KEY_DOWN && chapter1Index==63)
	{
		chapter1Index=64;
	}
	if (key == GLUT_KEY_UP && chapter1Index==64)
	{
		chapter1Index=63;
	}
	//for chapter4 option
	if (key == GLUT_KEY_DOWN && chapter4Index==34)
	{
		chapter4Index=35;
	}
	if (key == GLUT_KEY_UP && chapter4Index==35)
	{
		chapter4Index=34;
	}
   //chapter5
		if (key == GLUT_KEY_DOWN && chapter5Index==7)
	{
		chapter5Index=8;
	}
	if (key == GLUT_KEY_UP && chapter5Index==8)
	{
		chapter5Index=7;
	}
	if (key == GLUT_KEY_DOWN && chapter5Index==12)
	{
		chapter5Index=13;
	}
	if (key == GLUT_KEY_UP && chapter5Index==13)
	{
		chapter5Index=12;
	}
	if (key == GLUT_KEY_DOWN && chapter5Index==30)
	{
		chapter5Index=31;
	}
	if (key == GLUT_KEY_UP && chapter5Index==31)
	{
		chapter5Index=30;
	}
	if (key == GLUT_KEY_DOWN && chapter5Index==50)
	{
		chapter5Index=51;
	}
	if (key == GLUT_KEY_UP && chapter5Index==51)
	{
		chapter5Index=50;
	}


/*
	name			: changeBackScene
	functionality	: 1. Used in iKeyboard()
					  2. Used for developers only for debugging
					  3. Opposite of ChangeScene()
					  4. When it is called by pressing "END" then current index is decreased by one.
					  5. Does not work when Minigame1 is playing.
*/
	if(key == GLUT_KEY_END)
		changeBackScene();


	//minigame 2
	int flagForRight=0;

	if (key == GLUT_KEY_RIGHT && chapter5Index>=57 && chapter5Index<60)
	{
		chapter5Index++;
		//printf("%b\n",chapter57);
	//	flagForRight++;//1
		printf("1 in %d\n",flagForRight);
		//printf("\nYes1\n");
	}	if (key == GLUT_KEY_LEFT && chapter5Index>57 && chapter5Index<=60)
	{
		chapter5Index--;
	}
	//2nd hostage

	if (key == GLUT_KEY_RIGHT && chapter5Index==62)
	{
		chapter5Index=63;
		chapter5Path1=false;

	}

	if (key == GLUT_KEY_RIGHT && chapter5Index==64)
	{
		chapter5Index=65;
		chapter5Path2 = false;
	}

	if (key == GLUT_KEY_RIGHT && chapter5Index==66)
	{
		chapter5Index=67;
		chapter5Path3=false;
	}

	if (key == GLUT_KEY_LEFT && chapter5Index==63)
	{
		chapter5Index=62;
		chapter5Path1=true;
	}
	if (key == GLUT_KEY_LEFT && chapter5Index==65)
	{
		chapter5Index=64;
		 chapter5Path2 = true;
	}
	if (key == GLUT_KEY_LEFT && chapter5Index==67)
	{
		chapter5Index=66;
		chapter5Path3=true;
	}

	}

	if(gamePlayStart==true)
	{

	}
}


int main()
{
	//place your own initialization codes here.
	
	//gameplay code _______________________________________________
	baseballenemyvariables();
	bossenemyvariables();
	iSetTimer(50,hitbaseballenemywithbullet);
	iSetTimer(50,baseballenemychange);
	iSetTimer(50,hitbossenemywithbullet);
	iSetTimer(50,bossenemychange);
	iSetTimer(15,jumping);
	//gameplaycode ends__________________________________________

	iInitialize(screenWidth, screenHeight, "Vengeance");
	//story mode code____________________________________________Loads all the images_________________________________________
	imageLoaderForMenu();
	imageLoaderForChapter1();
	imageLoaderForChapter3();
	imageLoaderForChapter4();
	imageLoaderForChapter5();
	imageLoaderForChapter6();
	modeOpen = 1;//for opening warning
	PlaySound("sound\\intro", NULL, SND_LOOP |SND_ASYNC);//plays menu music
	//PlaySound("sound\\intro", NULL, SND_LOOP |SND_ASYNC);
	iSetTimer(9000,opening);//changes chapter
	iSetTimer(14000,menu);

	//gameplay codes_________________________________________________________
	x=0;// Main Character Adachi's x -- Axis for first background
	y=20;// Main Character Adachi's y -- Axis for first background
	p=0;// Main Character Adachi's x -- Axis for second background
	q=20;// Main Character Adachi's y -- Axis for second background

	loadpictures();//loads picture of story modes
	iStart(); // it will start drawing
	

	return 0;
}
