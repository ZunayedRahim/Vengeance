#ifndef FUNCTIONSFORSTORY_H
#define FUNCTIONSFORSTORY_H
#include "gameplayVariables.h"
/*
	name			: yesNoOption
	parameter		: 2 indexes ( 1 -- current index. 2 -- the index you want to jump to
	return type		: void
	functionality	: 1. Used in iKeyboard()
					  2. Used in choice selection
					  3. When it is called by yesNoOption(a,b) then pic[a] changes to pic[b]
					  4. General syntax: 
										if(any_conditions && currentIndex+1)
											yesNoOption(currentIndex+1,theIndexYouWantToGo)
*/
void yesNoOption(int presentindexOfchapter1Array,int changedindexOfchapter1Array)
{

	if(modeNewGame==true && chapter1Index!=presentindexOfchapter1Array && modeNewChapter4 == 0)
		chapter1Index++;//usual index++
	if(modeNewGame==true && chapter1Index==presentindexOfchapter1Array && modeNewChapter4 ==0)
		chapter1Index=changedindexOfchapter1Array;//current index changed for chapter 1
	if(modeNewGame==true && chapter1Index!=presentindexOfchapter1Array && modeNewChapter4!=0)
		chapter4Index++;//usual index++
	if(modeNewGame==true && chapter1Index==presentindexOfchapter1Array && modeNewChapter4!=0)
		chapter4Index=changedindexOfchapter1Array;//current index changed for chapter 4
	if(modeNewGame==true && chapter5Index==presentindexOfchapter1Array && modeNewChapter5!=0)
		chapter5Index=changedindexOfchapter1Array;//current index changed for chapter 5

}
/*
	name			: changeScene
	parameter		: void
	return type		: void
	functionality	: 1. Used in iKeyboard()
					  2. Used in story telling
					  3. When it is called by pressing "SPACE BAR" then current index is increased by one.
*/
void changeScene()
{
	//____________________________________________________________NEW CODES__________________________________________________________________________________
	if(chapter6Index == 23)
	{
		gamePlayStart = true; // // Chapter 1: OFF ____  Chapter 2: OFF ____  Chapter 3: OFF ____ MiniGame1 = OFF ____ Chapter 4: OFF ____ Chapter 5: OFF ____ Chapter 6: OFF ____ Gameplay: ON
	}
		// hypotheitcal
	bool gamewin = false;
	bool gamelostSpaceBar = false;
	bool gamelostESC = false;
	if(gamePlayStart == false && gamewin == true)
	{
		chapter6Index = 24;

	}

	if(gamePlayStart == false && gamelostSpaceBar == true)
	{
		chapter6Index = 16;

	}

	if(gamePlayStart == false && gamelostESC == true)
	{
		chapter6Index = 1;

	}
	//__________________________________________________________________________________ NEW CODES ends________________________________________________


	if(chapter6Index == 23)
	{
		gamePlayStart = true; // :)
		adachidead=false;
		gamesovercount=0;
	}
	if(chapter1Index==70 && modeMiniGame == 0)
	{
		modeMiniGame=1;// New Game : Starts|| Chapter-01 - 02 : On || Chapter-03 : off || Chapter-04 : off || Chapter-05  : off || Chapter-06 : off || Minigame : Off || new game starts && minigame is off && chapter 4 is off
	}
	if(modeNewGame==true && modeMiniGame==0 && modeNewChapter4==0)
		chapter1Index++;
	if(modeNewGame==true && modeNewChapter4==1)
		chapter4Index++; // new game starts && minigame is off && chapter 4 is onn
	if(chapter3Index == 33 && modeMiniGame==1)
	{
		modeMiniGame=0;//minigame ends
		modeNewChapter4=1;//new array of chapter 4 is loaded
		// New Game : Starts|| Chapter-01 - 02 : On || Chapter-03 : off || Chapter-04 : off || Chapter-05  : off || Chapter-06 : off || Minigame : Off || new game starts && minigame is off && chapter 4 is off
	}
	//if(modeNewGame==true && chapter1Index==38)
	//chapter1Index+=1;
	if(modeNewGame==true && modeMiniGame==1 &&( chapter3Index>114 && chapter3Index<2) || chapter3Index==33)
		chapter3Index++; // new game starts && minigame is on && chapter 4 is off
	/*if(chapter4Index == 33 && modeMiniGame==1)
	{
		modeMiniGame=0;//minigame ends
		modeNewChapter4=1;//new array of chapter 4 is loaded
	}*/
	if(chapter5Index == 90)
	{
		modeNewChapter5 =0;
		modeNewChapter6 =1;
		chapter6Sound = true;
		// New Game : Starts|| Chapter-01 - 02 : On || Chapter-03 : off || Chapter-04 : off || Chapter-05  : off || Chapter-06 : off || Minigame : Off || new game starts && minigame is off && chapter 4 is off
	}

	if(modeNewGame==true && chapter4Index ==39)
	{
		modeNewChapter5 =1;
		modeNewChapter4 =0;
		chapter5Sound=true;
		
		// New Game : Starts|| Chapter-01 - 02 : On || Chapter-03 : off || Chapter-04 : off || Chapter-05  : off || Chapter-06 : off || Minigame : Off || new game starts && minigame is off && chapter 4 is off
	}
	/* if(chapter5Sound == true && modeNewGame==true)
		{
			PlaySound("sound\\GUNS", NULL, SND_LOOP |SND_ASYNC);
		}*/
		
	/*if(chapter5Sound == true && modeNewChapter5==1)
		{
			///PlaySound("sound\\Dark Forces", NULL, SND_LOOP |SND_ASYNC);
			chapter3Sound = false;
		}*/

	
/*	if(chapter4Index>=38 && chapter5Index<=90)
	{
		flagsound5++;
	}*/
	if(chapter5Index == 90)
	{
		modeNewChapter5 =0;
		modeNewChapter6 =1;
		chapter6Sound = true;
		// New Game : Starts|| Chapter-01 - 02 : On || Chapter-03 : off || Chapter-04 : off || Chapter-05  : off || Chapter-06 : off || Minigame : Off || new game starts && minigame is off && chapter 4 is off
	}
	if(modeNewGame==true && modeNewChapter5==1) //&& (chapter5Index>0 && chapter5Index<57 || chapter5Index>=72))
		chapter5Index++; // new game starts && minigame is off && chapter 5 is onn
	if(modeNewGame==true && modeNewChapter6==1)
		chapter6Index++;

	if(chapter1Index==49 && modeNewGame==1)// && chapter1Index==68//)
	{
		
		chapter2Sound=true;
	}
/*	if(chapter2Sound == true && modeNewGame==true)
		{
			PlaySound("sound\\GUNS", NULL, SND_LOOP |SND_ASYNC);
		}

	
    if(chapter6Sound == true && modeNewGame==true)
		{
			PlaySound("sound\\GUNS", NULL, SND_LOOP |SND_ASYNC);
		}*/
}


/*
	name			: changeBackScene
	parameter		: void
	return type		: void
	functionality	: 1. Used in iKeyboard()
					  2. Used for developers only for debugging
					  3. Opposite of ChangeScene()
					  4. When it is called by pressing "END" then current index is decreased by one.
					  5. Does not work when Minigame1 is playing.
*/
void changeBackScene()
{

	//if(modeNewGame==true && chapter1Index==39)
	//chapter1Index=37;//bussconvooption

	/*if(modeNewGame==true && chapter1Index==56)
	chapter1Index=54;//bossconvopoliterude
	if(modeNewGame==true && chapter1Index==63 && bossConvoRoute==0)
	chapter1Index=56;//bossconvopolitejump
	if(modeNewGame==true && chapter1Index==57)
	chapter1Index=54;//bossconvoruderoute*/
	if(modeNewGame==true && chapter1Index>0 )
		chapter1Index--;//decreases for Chapter 1-2
	if(modeNewGame==true && chapter4Index>0 )
		chapter4Index--;//decreases for Chapter 4
	if(modeNewGame==true && chapter5Index>0 )
		chapter5Index--;//decreases for Chapter 5
	if(modeNewGame==true && chapter6Index>0 )
		chapter6Index--;//decreases for Chapter 6

}

#endif