#ifndef GAMEPLAYIKEYBOARD_H_INCLUDED
#define GAMEPLAYIKEYBOARD_H_INCLUDED

void keyD()
{
	if(characterhitflag==0 && characteralive){
			if(runmode==0){
				lookforward=true;
				lookbackward=false;
				duck=0;
				firing=0;
				punchkick=false;
				if(duck==0&&firing==0&&punchkick==false){
					run = false;
					walk=true;
					characterreversewalk=0;
					if(bbenemy[3].bbe_coming==true && baseballenemyflag4==1)
					{
						x=x;
					}
					else 
					{
						x+=5;
					}
					characterindexwalkforward++;
					if(characterindexwalkforward>=48)
						characterindexwalkforward=0;
					walkforward = false;

					if(x>1920)
					{
						flagfornewscreen=1;
					}
					if(flagfornewscreen==1){
						characterreversewalk=0;
						p+=5;
					}
				}
			}
			else if(runmode==1)
			{
				lookforward=true;
				lookbackward=false;
				duck=0;
				firing=0;
				if(duck==0&&firing==0&&punchkick==false){
					run=true;
					walk=false;
					characterreverserun=0;
					if(bbenemy[3].bbe_coming==true && baseballenemyflag4==1)
					{
						x=x;
					}
					else 
					{
						x+=10;
					}
					characterindexrunforward++;
					if(characterindexrunforward>=32)
						characterindexrunforward=0;
					runforward = false;
					if(x>1920)
					{
						flagfornewscreen=1;
					}
					if(flagfornewscreen==1){
						characterreverserun=0;
						p+=10;
					}
				}
			}
		}
}

void keyA()
{
	if(characterhitflag==0 && characteralive){
			if(runmode==0)
			{
				lookforward=false;
				lookbackward=true;
				duck=0;
				firing=0;
				punchkick=false;
				if(duck==0&&punchkick==false){
					run = false;
					walk=true;
					characterreversewalk=1;
					if(bbenemy[6].bbe_coming==true && baseballenemyflag7==1)
					{
						x=x;
					}
					else 
					{
						x-=5;
					}
					characterindexwalkbackward++;
					if(characterindexwalkbackward>=48)
						characterindexwalkbackward=0;
					walkbackward = false;
					if(x>1920)
					{
						flagfornewscreen=1;
					}
					if(flagfornewscreen==1){
						characterreversewalk=1;
						p-=5;
					}
				}
			}
			else if(runmode==1)
			{
				lookforward=false;
				lookbackward=true;
				duck=0;
				if(duck==0&&punchkick==false){
					run=true;
					walk=false;
					characterreverserun=1;
						if(bbenemy[6].bbe_coming==true && baseballenemyflag7==1)
					{
						x=x;
					}
					else 
					{
						x-=10;
					}

					characterindexrunbackward++;
					if(characterindexrunbackward>=32)
						characterindexrunbackward=0;
					runbackward = false;
					if(x>1920)
					{
						flagfornewscreen=1;
					}
					if(flagfornewscreen==1){
						characterreverserun=1;
						p-=10;
					}
				}
			}
		}
}

void keyS()
{
	if(characterhitflag==0 && characteralive){
			if(!jump){
				duck=1;
			}
		}
}

void keyR()
{
	if(characterhitflag==0 && characteralive){
			countrunmode++;
			if(countrunmode%2!=0)
			{
				runmode=1;
			}
			else if(countrunmode%2==0)
			{
				runmode=0;
			}
		}
}

void keySpace()
{
	if(characterhitflag==0 && characteralive){
			if(!jump&&duck==0)
			{
				jump = true;
				jumpup = true;
			}
		}

}


void gameOverSpace()
	{
		
		gamelostSpaceBar =true;
		modeNewChapter5 =0;
		modeNewChapter6 =1;
		chapter6Index=16;
		gamePlayStart = false;
		
	}


void gameOverESC()
	{
		/*gamelostSpaceBar =true;
		modeNewChapter5 =0;
		modeNewChapter6 =1;
		chapter6Index=1;
		gamePlayStart = false;*/
		exit(0);
	}

void gameWin()
{
	//gamelostSpaceBar =true;
		modeNewChapter5 =0;
		modeNewChapter6 =1;
		//chapter6Index=16;
		gamePlayStart = false;
		printf("CAAAAAAAAAAAAAAAALLLLLLEEEEEEEEEEEEEEEDDDDDDDDDDDDD\n\n\n\n\n\n\n\n");
}
#endif