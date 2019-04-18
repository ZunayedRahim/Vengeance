#ifndef USERINTERFACE_H_INCLUDED
#define USERINTERFACE_H_INCLUDED

void opening()
{
	modeOpen++;//opening the game
}
void menu()
{
	if(modeOpen<3)
		modeOpen++;//opening the menu
}
void loadGamePage()
{
	iShowImage(0,0,screenWidth,screenHeight,loadScreenImage);// load screen image showed
}
void quitGame()
{
	if(modeChoice == true)
	{
		iShowImage(0,0,screenWidth,screenHeight,gameQuit[0]);
		fileSavingFunction(); //last game is saved
	}
	if(modeChoice == false)
		iShowImage(0,0,screenWidth,screenHeight,gameQuit[1]);
}

/*
	name			: newGame
	parameter		: none
	return type		: void
	functionality	: 1. Used in iDraw()
	2. called to start playing the story mode
	3. shuffles through chapters under different conditions					  
*/
void newGame()
{
	if(chapter1Index != 38 && modeMiniGame == 0)
		iShowImage(0,0,screenWidth,screenHeight,chapter1[chapter1Index]);	//Chapter 1 begins untill a choice
	if(chapter1Index == 38 && modeMiniGame == 0)
		iShowImage(0,0,screenWidth,screenHeight,chapter1[chapter1Index]);	//A choice
	if(modeMiniGame == 1 && chapter1Index==70)
		iShowImage(0,0,screenWidth,screenHeight,chapter3[chapter3Index]);	// Chapter 3: Minigame starts playing
	if(modeNewChapter4 == 1)
	{
		iShowImage(0,0,screenWidth,screenHeight,chapter4[chapter4Index]);	// Chapter 4 begins
	     modeForSound = true;
	}
	/*if(modeForSound==true)
	{
		PlaySound("sound\\Dark Forces", NULL, SND_LOOP |SND_ASYNC);
	}*/
	if(modeNewChapter5 == 1)
	{
		iShowImage(0,0,screenWidth,screenHeight,chapter5[chapter5Index]);	//chapter 5 begins
	   //  PlaySound("sound\\Dark Forces", NULL, SND_LOOP |SND_ASYNC);
	}
	if(modeNewChapter6 == 1)
	{
		iShowImage(0,0,screenWidth,screenHeight,chapter6[chapter6Index]);	//chapters 6 begins
	}
	
}

/*void play()
{
if(introSound==true)
{
PlaySound(0,0,0);
}
}*/

/*
name			: drawMenu
parameter		: none
return type		: void
functionality	: 1. Used in iDraw()
2. called to start showing the menu
3. shuffles through entities under different conditions					  
*/
void drawMenu()
{
	if(modeOpen>2)
	{
		iShowImage(0,0,screenWidth,screenHeight,image3); // Main Menu Image Appears
	}
	if(modeNew==1)
	{
		iShowImage(0,0,screenWidth,screenHeight,image5);// White Box Appears on New Game
	}
	if(modeNew==2)
	{
		iShowImage(0,0,screenWidth,screenHeight,image6);// White Box Appears on continuebox
	}
	if(modeNew==3)
	{
		iShowImage(0,0,screenWidth,screenHeight,load);// White Box Appears on load game
	}
	if(modeNew==4)
	{
		iShowImage(0,0,screenWidth,screenHeight,option);// White Box Appears on option
	}
	if(modeNew==5)
	{
		iShowImage(0,0,screenWidth,screenHeight,credit);// White Box Appears on credit
	}
	if(modeNew==6)
	{
		iShowImage(0,0,screenWidth,screenHeight,quit);// White Box Appears on quit
	}
	if(modeCredits==1)
	{
		iShowImage(0,0,screenWidth,screenHeight,insidecredit);//Credits Picture is shown
	}
	if(modeOption==1)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionback);//Option Picture is shown
	}
	if(modeOption==2)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionstory);//Option Picture is shown 
	}
	if(modeOption==3)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionaudio);//Option Picture is shown
	}
	if(modeOption==4)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionkey);//Option Picture is shown
	}
	if(modeOption==5)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionvideo);//Option Picture is shown
	}
	if(modeOption==6)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionbackagain);//Option Picture is shown
	}
	if(modeOption==7)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionaudiooff);//Option Picture is shown
	}
	if(modeOption==8)
	{
		iShowImage(0,0,screenWidth,screenHeight,optionaudioon);//Option Picture is shown
	}

	if(loadScreenMode == 1)
	{
		loadGamePage();//load game page function is called
	}


}


/*void minigame()
{
if(modeMiniGame==1)
{
iShowImage(0,0,screenWidth,screenHeight,chapter1[72]);
}

}*/

#endif