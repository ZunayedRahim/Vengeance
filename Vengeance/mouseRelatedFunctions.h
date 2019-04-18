#ifndef MOUSERELATEDFUNCTIONS_H_INCLUDED
#define MOUSERELATEDFUNCTIONS_H_INCLUDED

/*
	name			: iPassiveMouseForMenu
	parameter		: none
	return type		: void
	functionality	: 1. Used in iPassiveMouse()
					  2. whenever user moves the cursor around certain options a white rectangle appears to let the user know it is selected				  
*/
void iPassiveMouseForMenu()
{
	if(cursorMX>=115 && cursorMX<=266 && cursorMY>=892 && cursorMY<=920 && modeOpen>2)
	{

		modeNew=1;// White Box Appears on New Game

	}
	if(cursorMX>=117 && cursorMX<=262 && cursorMY>=835 && cursorMY<=857 && modeOpen>2)
	{

		modeNew=2;// White Box Appears on Continue Game
	}
	if(cursorMX>=119 && cursorMX<=272 && cursorMY>=774 && cursorMY<=800 && modeOpen>2)
	{

		modeNew=3;// White Box Appears on Load Game
	}
	if(cursorMX>=119 && cursorMX<=224 && cursorMY>=714 && cursorMY<=738 && modeOpen>2)
	{

		modeNew=4;// White Box Appears on Option
	}
	if(cursorMX>=115 && cursorMX<=241 && cursorMY>=656 && cursorMY<=681 && modeOpen>2)
	{

		modeNew=5;// White Box Appears on Credit
	}
	if(cursorMX>=114 && cursorMX<=190 && cursorMY>=593 && cursorMY<=618 && modeOpen>2)
	{

		modeNew=6;// White Box Appears on Quit
	}

	//If user presses Menu --> Quit 

	//Up Option
	if(cursorMX>=630 && cursorMX<=1001 && cursorMY>=731 && cursorMY<=761 && modeOpen>2 && modeQuit == true)
	{
		modeChoice = false; // White Box Appears on Quit Up
	}
	//Down Option
	if(cursorMX>=630 && cursorMX<=1001 && cursorMY>=770 && cursorMY<=800 && modeOpen>2 && modeQuit == true)
	{
		modeChoice = true; //White Box Appears on Quit Down
	}

	//If user pressed Menu --> Options
	if(cursorMX>=155 && cursorMX<=207 && cursorMY>=813 && cursorMY<=828 && modeOpen>2 && modeOption>0)
	{
		modeOption = 2; //White Box Appears on Story
	}
	if(cursorMX>=154 && cursorMX<=205 && cursorMY>=770 && cursorMY<=785 && modeOpen>2 && modeOption>0)
	{

		modeOption = 3; //White Box Appears on Audio
	}
	if(cursorMX>=121 && cursorMX<=236 && cursorMY>=723 && cursorMY<=744 && modeOpen>2 && modeOption>0)
	{
		modeOption = 4; //White Box Appears on Key Bindings
	}
	if(cursorMX>=154 && cursorMX<=202 && cursorMY>=682 && cursorMY<=696 && modeOpen>2 && modeOption>0)
	{
		modeOption = 5; //White Box Appears on Video
	}
	if(cursorMX>=150 && cursorMX<=208 && cursorMY>=637 && cursorMY<=657 && modeOpen>2 && modeOption>0)
	{
		modeOption = 6; //White Box Appears on back
	}
	if(cursorMX>=841 && cursorMX<=878 && cursorMY>=895 && cursorMY<=914 && modeOpen>2 && modeOption>0)
	{

		modeOption = 7; //White Box Appears on Audio --> On
	}
	if(cursorMX>=760 && cursorMX<=789 && cursorMY>=899 && cursorMY<=916 && modeOpen>2 && modeOption>0)
	{

		modeOption = 8; ////White Box Appears on Audio --> Off
	}

}

/*
	name			: loadGameFunction
	parameter		: none
	return type		: void
	functionality	: 1. Used in iMouse()
					  2. when user selects continue game, it calls fileContinueFunction() to load the game from the FILE
					  3. when user selects load game, it sets loadScreenMode = 1 so that load screen stuffs appear
					  4. when user selects chapters to load, this function bounds certain areas and the new chapter opens when it is pressed.					  
*/
void loadGameFunction()
{
		//loadScreenMode==1 when user is in the load game page
/*
	name			: fileContinueFunction
	functionality	: 1. Used in iMouse()
					  2. Used for loading game
					  3. it reads specific indexes from a .txt	file
					  4. it assigns values from .txt file to load certain parts of games that user previously saved
*/
		if(cursorMX>=117 && cursorMX<=262 && cursorMY>=835 && cursorMY<=857 && modeOpen>2 && modeNew==2 && modeNewGame==false)
		{
			//fileContinueFunction();
		}

		if(cursorMX>=119 && cursorMX<=272 && cursorMY>=774 && cursorMY<=800 && modeOpen>2 && modeNewGame==false)
		{
			loadScreenMode = 1;//loadinggame
		}
		//1st box : Chapter 1
		if(cursorMX>=415 && cursorMX<=705 && cursorMY>=865 && cursorMY<=995 && modeOpen>2 && loadScreenMode==1)
		{
			modeNewChapter4 = 0;
			chapter1Index = 0;
			chapter3Index = 0;
			chapter4Index = 0;
			modeNewGame = true;
			loadScreenMode = 0;
			chapter1Sound=true;
			//everything is 0 since it's the start
		}
		if(chapter1Sound == true && modeNewGame == true)
		{
			PlaySound("sound\\THE GIRL", NULL, SND_LOOP |SND_ASYNC);
		}
		

		//2nd box : Chapter 2
		if(cursorMX>=760 && cursorMX<=1050 && cursorMY>=865 && cursorMY<=995 && modeOpen>2 && loadScreenMode==1)
		{
			modeNewChapter4 = 0;
			chapter1Index = 49;
			chapter3Index = 0;
			chapter4Index = 0;
			modeNewGame = true;
			loadScreenMode = 0;
		    chapter2Sound = true;
			//certain chapter indexes are initialized
		}
		if(chapter2Sound == true && modeNewGame == true)
		{
			PlaySound("sound\\GUNS", NULL, SND_LOOP |SND_ASYNC);
		}
		//3rd box : Chapter 3
		if(cursorMX>=415 && cursorMX<=705 && cursorMY>=716 && cursorMY<=842 && modeOpen>2 && loadScreenMode==1)
		{
			modeNewChapter4 = 0;
			chapter1Index = 68;
			chapter3Index = 0;
			chapter4Index = 0;
			modeNewGame = true;
			loadScreenMode = 0;
			chapter3Sound=true;
			//certain chapter indexes are initialized
		}
		if(chapter3Sound == true && modeNewGame == true)
		{
			PlaySound("sound\\Pause Menu", NULL, SND_LOOP |SND_ASYNC);
		}

		//4th  box : Chapter 4
		if(cursorMX>=760 && cursorMX<=1050 && cursorMY>=716 && cursorMY<=842 && modeOpen>2 && loadScreenMode==1)
		{
			modeNewChapter4 = 1;
			chapter1Index = 70;
			chapter3Index = 33;
			chapter4Index = 12;
			modeNewGame = true;
			loadScreenMode = 0;
			chapter4Sound=true;
			//certain chapter indexes are initialized
		}
		if(chapter4Sound == true && modeNewGame==true)
		{
			PlaySound("sound\\Dark Forces", NULL, SND_LOOP |SND_ASYNC);
			chapter3Sound = false;
		}

		//5th box : Chapter 5
		if(cursorMX>=415 && cursorMX<=705 && cursorMY>=565 && cursorMY<=690 && modeOpen>2 && loadScreenMode==1)
		{
			modeNewChapter4 = 1;
			chapter1Index = 70;
			chapter3Index = 33;
			chapter4Index = 38;
			modeNewGame = true;
			loadScreenMode = 0;
			chapter5Sound=true;
			//certain chapter indexes are initialized
		}

		//6th box : Chapter 6
		if(cursorMX>=761 && cursorMX<=1051 && cursorMY>=568 && cursorMY<=694 && modeOpen>2 && loadScreenMode==1)
		{
			modeNewChapter4 = 0;
			chapter1Index = 70;
			chapter3Index = 33;
			chapter4Index = 38;
			chapter5Index = 90;
			chapter6Index = 1;
			modeNewGame = true;
			loadScreenMode = 0;
			modeNewChapter6=1;
			chapter5Sound=true;
			//certain chapter indexes are initialized
		}
		
	
		if(chapter5Sound == true && modeNewGame == true)
		{
			PlaySound("sound\\Pudding & Pie", NULL, SND_LOOP |SND_ASYNC);
			chapter4Sound=false;
		}
		if(cursorMX>=153 && cursorMX<=206 && cursorMY>=635 && cursorMY<=653 && modeOpen>2)
	{
		modeBack=1;
		loadScreenMode=0;
	}
}

/*
	name			: creditsFunction
	parameter		: none
	return type		: void
	functionality	: 1. Used in iMouse()
					  2. when user selects credits, it calls creditsFunction() to show credits
					  3. when user selects "back", it calls creditsFunction() to go back to menu.					  
*/
void creditsFunction()
{
	//Menu --> Credits
	if(cursorMX>=115 && cursorMX<=241 && cursorMY>=656 && cursorMY<=681 && modeOpen>2)
	{
		modeCredits=1;
	}

	// Credits --> Menu
	if(cursorMX>=150 && cursorMX<=208 && cursorMY>=637 && cursorMY<=657 && modeOpen>2)
	{
		modeBack=1;
		modeCredits=0;
	}
}
/*
	name			: optionsFunction
	parameter		: none
	return type		: void
	functionality	: 1. Used in iMouse()
					  2. when user selects option, it calls optionsFunction() to show credits
					  3. when user selects "back", it calls optionsFunction() to go back to menu.					  
*/
void optionsFunction()
{
	if(cursorMX>=119 && cursorMX<=224 && cursorMY>=714 && cursorMY<=738 && modeOpen>2)
		{

			modeOption = 1;
		}
		if(cursorMX>=153 && cursorMX<=206 && cursorMY>=634 && cursorMY<=654 && modeOpen>2)
		{

			modeOption = 0;
		}
		if(cursorMX>=841 && cursorMX<=878 && cursorMY>=895 && cursorMY<=914 && modeOpen>2 && modeOption>0)
	{

		modeOption = 7;
		
		//White Box Appears on Audio --> On
	}
	if(cursorMX>=760 && cursorMX<=789 && cursorMY>=899 && cursorMY<=916 && modeOpen>2 && modeOption>0)
	{

		modeOption = 8;////White Box Appears on Audio --> Off
		PlaySound("sound\\THE GIRL", NULL, SND_LOOP |SND_ASYNC);
	   
	}
}

#endif