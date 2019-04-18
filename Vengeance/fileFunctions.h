#ifndef	FILEFUNCTIONS_H_INCLUDED
#define FILEFUNCTIONS_H_INCLUDED
#include "gameplayVariables.h"
/*
	name			: fileSavingFunction
	parameter		: void
	return type		: void
	functionality	: 1. Used in iMouse()
					  2. Used for saving game
					  3. it saves specific indexes to a .txt file					 
*/
void fileSavingFunction()
{
	FILE *fp = fopen("continueGame.txt","a");

	//fprintf(fp,"%d %d %d %d %d\n",chapter1Index,modeNewChapter4,modeMiniGame,chapter3Index,chapter4Index);
	fprintf(fp,"%d %d %d %d %d %d %d %d %d\n",chapter1Index,chapter3Index,chapter4Index,chapter5Index,chapter6Index,modeNewChapter4,modeMiniGame,modeNewChapter5,modeNewChapter6);
	fclose(fp);
}


/*
	name			: fileContinueFunction
	parameter		: void
	return type		: void
	functionality	: 1. Used in iMouse()
					  2. Used for loading game
					  3. it reads specific indexes from a .txt	file
					  4. it assigns values from .txt file to load certain parts of games that user previously saved
*/
void fileContinueFunction()
{	
	if(flagForContinue>=0)
	{

		FILE *fp = fopen("continueGame.txt","r");
		while(fscanf(fp,"%d %d %d %d %d %d %d %d %d\n",&chapter1Index,&chapter3Index,&chapter4Index,&chapter5Index,&chapter6Index,&modeNewChapter4,&modeMiniGame,&modeNewChapter5,&modeNewChapter6)!=EOF)
		{
			
		}
		printf("%d %d %d %d %d %d %d %d %d\n",chapter1Index,chapter3Index,chapter4Index,chapter5Index,chapter6Index,modeNewChapter4,modeMiniGame,modeNewChapter5,modeNewChapter6);
		modeNewGame = true;
		gamePlayStart = false;
		modeOpen=3;
		fclose(fp);
		
	}


}


#endif
