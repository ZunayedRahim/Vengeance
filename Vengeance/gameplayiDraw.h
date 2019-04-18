#ifndef GAMEPLAYIDRAW_H_INCLUDED
#define GAMEPLAYIDRAW_H_INCLUDED
#include "gamePlayiKeyboard.h"
void gamePlay()
{
if(flagfornewscreen==0){
		
		iClear();
		iShowImage(0, 0, 1920, 1080, backgroundimage1);

		baseballenemymove();

		if(characteralive){

			if(characterhitflag==0) {

				if(firing==1 && lookforward && !jump && duck==0)
				{
					iShowImage(x,y,153,292,characterfiringforward);
				}
				else if(firing==1 && lookbackward &&!jump &&duck==0)
				{
					iShowImage(x,y,153,292,characterfiringbackward);
				}
				else if(firing==1 && lookforward && jump &&duck==0)
				{
					iShowImage(x,y+jumpY,165,258,characterjumpandfiringforward);
				}
				else if(firing==1 && lookbackward && jump &&duck==0)
				{
					iShowImage(x,y+jumpY,165,258,characterjumpandfiringbackward);
				}
				else if(firing==1 && lookforward && !jump &&duck==1)
				{
					iShowImage(x,y+jumpY,153,201,characterduckedandfiringforward);
				}
				else if(firing==1 && lookbackward && !jump &&duck==1)
				{
					iShowImage(x,y+jumpY,153,201,characterduckedandfiringbackward);
				}
				if(lookforward||lookbackward){

					for(int i = 0; i < totalbullet; i++)
					{
						bullet_xnew[i]=bullet_xnew[i]+1;
						bullet_ynew[i]=bullet_ynew[i];
						bulletdemoforward(bullet_xnew[i], bullet_ynew[i]);
					}
				}
				if(lookbackward||lookforward){

					for(int i = 0; i < totalbullet2; i++)
					{
						bullet_xnew2[i]=bullet_xnew2[i]-1;
						bullet_ynew2[i]=bullet_ynew2[i];
						bulletdemobackward(bullet_xnew2[i], bullet_ynew2[i]);
					}
				}

				if(jump || lookforward || lookbackward){

					for(int i = 0; i < totalbullet3; i++)
					{
						bullet_xnew3[i]=bullet_xnew3[i]+1;
						bullet_ynew3[i]=bullet_ynew3[i];
						jumpandbulletdemoforward(bullet_xnew3[i], bullet_ynew3[i]);
					}
				}

				if(jump || lookbackward || lookforward){

					for(int i = 0; i < totalbullet4; i++)
					{
						bullet_xnew4[i]=bullet_xnew4[i]-1;
						bullet_ynew4[i]=bullet_ynew4[i];
						jumpandbulletdemobackward(bullet_xnew4[i], bullet_ynew4[i]);
					}
				}
				if(duck==1 || lookforward || lookbackward){

					for(int i = 0; i < totalbullet5; i++)
					{
						bullet_xnew5[i]=bullet_xnew5[i]+1;
						bullet_ynew5[i]=bullet_ynew5[i];
						duckedandbulletdemoforward(bullet_xnew5[i], bullet_ynew5[i]);
					}
				}

				if(duck==1 || lookbackward || lookforward){

					for(int i = 0; i < totalbullet6; i++)
					{
						bullet_xnew6[i]=bullet_xnew6[i]-1;
						bullet_ynew6[i]=bullet_ynew6[i];
						duckedandbulletdemobackward(bullet_xnew6[i], bullet_ynew6[i]);
					}
				}

				if(jump && lookforward && firing==0)
				{
					if(jumpup)
					{
						iShowImage(x,y+jumpY,162,210,characterjumpforward[0]);
					}
					else
					{
						iShowImage(x,y+jumpY,162,210,characterjumpforward[1]);
					}
				}
				else if(jump && lookbackward && firing==0)
				{
					if(jumpup)
					{
						iShowImage(x,y+jumpY,162,210,characterjumpbackward[0]);
					}
					else
					{
						iShowImage(x,y+jumpY,162,210,characterjumpbackward[1]);
					}
				}

				else
				{
					if(runmode==1)
					{
						activemode();
					}
					if(run == false && walk == false && duck==0 && firing==0&&punchkick==false)
					{
						iShowImage(x,y,130,244,characterforwardinitial);//0.15% & 0.2857 % less
					}
					else if(run == true && walk==false && duck==0 && firing==0&&punchkick==false){
						if(characterreverserun==0)
						{
							if(!runforward)
							{
								iShowImage(x,y,257,195,characterrunforward[characterindexrunforward]);
								countrunforward++;
								if(countrunforward>=3500)
								{
									countrunforward=0;
									characterindexrunforward=0;
									runforward = true;
								}
							}
							else 
							{
								iShowImage(x,y,130,244,characterforwardinitial);
							}
						}

						if(characterreverserun==1)
						{
							if(!runbackward)
							{
								iShowImage(x,y,257,195,characterrunbackward[characterindexrunbackward]);
								countrunbackward++;
								if(countrunbackward>=3500)
								{
									countrunbackward=0;
									characterindexrunbackward=0;
									runbackward = true;
								}
							}
							else 
							{
								iShowImage(x,y,130,244,characterbackwardinitial);
							}
						}
					}
					else if(run==false && walk==true && duck==0 && firing==0&&punchkick==false){
						if(characterreversewalk==0)
						{

							if(!walkforward)
							{
								iShowImage(x,y,130,244,characterwalkforward[characterindexwalkforward]);
								countwalkforward++;
								if(countwalkforward>=6000)
								{
									countwalkforward=0;
									characterindexwalkforward=1;
									walkforward = true;
								}
							}
							else 
							{
								iShowImage(x,y,130,244,characterforwardinitial);
							}
						}
						else if(characterreversewalk==1)
						{
							if(!walkbackward)
							{
								iShowImage(x,y,130,244,characterwalkbackward[characterindexwalkbackward]);
								countwalkbackward++;
								if(countwalkbackward>=6000)
								{
									countwalkbackward=0;
									characterindexwalkbackward=1;
									walkbackward = true;
								}
							}
							else 
							{
								iShowImage(x,y,130,244,characterbackwardinitial);
							}
						}
					}
					if(duck==1 && lookforward==true && lookbackward==false && firing==0)
					{
						iShowImage(x,y,118,151,characterduckforward);
					}
					else if(duck==1 && lookforward==false && lookbackward==true && firing==0)
					{
						iShowImage(x,y,134,144,characterduckbackward);
					}

					else if(punchkick==true&&lookforward)
					{
						if(lookforward && !lookbackward&&countpunchkick%2!=0)
						{

							iShowImage(x,y,319,222,punchforward);
						}
						else if(lookforward && !lookbackward&&countpunchkick%2==0)
						{

							iShowImage(x,y,319,222,kickforward);
						}

					}
					else if(punchkick==true && lookbackward)
					{
						if(lookbackward && !lookforward && countpunchkick%2!=0)
						{

							iShowImage(x-200,y,319,222,punchbackward);
						}
						else if(lookbackward && !lookforward && countpunchkick%2==0)
						{

							iShowImage(x-200,y,319,222,kickbackward);
						}

					}


				}

			}
			else if(characterhitflag==1 && lookforward)
			{
				iShowImage(x,y,210,220,characterhitforward);
			}
			else if(characterhitflag==1 && lookbackward)
			{
				iShowImage(x,y,210,220,characterhitbackward);
			}
		}
		else if(!characteralive && lookforward)
		{
			iShowImage(x,y,411,62,characterdeadforward);
			gamesovercount++;
			if(gamesovercount>=500)
			{
				iShowImage(0,0,1920,1080,gameover);
				adachidead = true;
			}
		}
		else if(!characteralive && lookbackward)
		{
			iShowImage(x,y,411,62,characterdeadbackward);
			gamesovercount++;
			if(gamesovercount>=500)
			{
				iShowImage(0,0,1920,1080,gameover);
				adachidead = true;
			}
		}


	}

	if(flagfornewscreen==1){
		iClear();

		iShowImage(0, 0, 1920, 1080, backgroundimage2);
	
		//if(x>1920){
			bossenemymove();
			//iSetTimer(50,hitbossenemywithbullet);
			//iSetTimer(50,bossenemychange);
		//}
		if(characteralive){

			if(characterhitflagforboss==0) {

		if(firing==1 && lookforward && !jump && duck==0)
		{
			iShowImage(p,q,153,292,characterfiringforward);
		}
		else if(firing==1 && lookbackward &&!jump &&duck==0)
		{
			iShowImage(p,q,153,292,characterfiringbackward);
		}
		else if(firing==1 && lookforward && jump &&duck==0)
		{
			iShowImage(p,q+jumpY,165,258,characterjumpandfiringforward);
		}
		else if(firing==1 && lookbackward && jump &&duck==0)
		{
			iShowImage(p,q+jumpY,165,258,characterjumpandfiringbackward);
		}
		else if(firing==1 && lookforward && !jump &&duck==1)
		{
			iShowImage(p,q+jumpY,153,201,characterduckedandfiringforward);
		}
		else if(firing==1 && lookbackward && !jump &&duck==1)
		{
			iShowImage(p,q+jumpY,153,201,characterduckedandfiringbackward);
		}
		if(lookforward||lookbackward){

			for(int i = 0; i < totalbullet_p; i++)
			{
				bullet_pnew[i]=bullet_pnew[i]+1;
				bullet_qnew[i]=bullet_qnew[i];
				bulletdemoforward(bullet_pnew[i], bullet_qnew[i]);
			}
		}
		if(lookbackward||lookforward){

			for(int i = 0; i < totalbullet_p2; i++)
			{
				bullet_pnew2[i]=bullet_pnew2[i]-1;
				bullet_qnew2[i]=bullet_qnew2[i];
				bulletdemobackward(bullet_pnew2[i], bullet_qnew2[i]);
			}
		}

		if(jump || lookforward || lookbackward){

			for(int i = 0; i < totalbullet_p3; i++)
			{
				bullet_pnew3[i]=bullet_pnew3[i]+1;
				bullet_qnew3[i]=bullet_qnew3[i];
				jumpandbulletdemoforward(bullet_pnew3[i], bullet_qnew3[i]);
			}
		}

		if(jump || lookbackward || lookforward){

			for(int i = 0; i < totalbullet_p4; i++)
			{
				bullet_pnew4[i]=bullet_pnew4[i]-1;
				bullet_qnew4[i]=bullet_qnew4[i];
				jumpandbulletdemobackward(bullet_pnew4[i], bullet_qnew4[i]);
			}
		}
		if(duck==1 || lookforward || lookbackward){

			for(int i = 0; i < totalbullet_p5; i++)
			{
				bullet_pnew5[i]=bullet_pnew5[i]+1;
				bullet_qnew5[i]=bullet_qnew5[i];
				duckedandbulletdemoforward(bullet_pnew5[i], bullet_qnew5[i]);
			}
		}

		if(duck==1 || lookbackward || lookforward){

			for(int i = 0; i < totalbullet_p6; i++)
			{
				bullet_pnew6[i]=bullet_pnew6[i]-1;
				bullet_qnew6[i]=bullet_qnew6[i];
				duckedandbulletdemobackward(bullet_pnew6[i], bullet_qnew6[i]);
			}
		}

		if(jump && lookforward && firing==0)
		{
			if(jumpup)
			{
				iShowImage(p,q+jumpY,162,210,characterjumpforward[0]);
			}
			else
			{
				iShowImage(p,q+jumpY,162,210,characterjumpforward[1]);
			}
		}
		else if(jump && lookbackward && firing==0)
		{
			if(jumpup)
			{
				iShowImage(p,q+jumpY,162,210,characterjumpbackward[0]);
			}
			else
			{
				iShowImage(p,q+jumpY,162,210,characterjumpbackward[1]);
			}
		}
		else
		{
			if(runmode==1)
			{
				activemode();
			}
			if(run == true && walk == true && duck == 0&&punchkick==false && firing==0)
			{
				iShowImage(p,q,130,244,characterforwardinitial);
			}
			else if(run == true && walk==false && duck==0&&punchkick==false && firing==0){
				if(characterreverserun==0)
				{
					if(!runforward)
					{
						iShowImage(p,q,257,195,characterrunforward[characterindexrunforward]);
						countrunforward++;
						if(countrunforward>=3500)
						{
							countrunforward=0;
							characterindexrunforward=0;
							runforward = true;
						}
					}
					else 
					{
						iShowImage(p,q,130,244,characterforwardinitial);
					}
				}

				if(characterreverserun==1)
				{
					if(!runbackward)
					{
						iShowImage(p,q,257,195,characterrunbackward[characterindexrunbackward]);
						countrunbackward++;
						if(countrunbackward>=3500)
						{
							countrunbackward=0;
							characterindexrunbackward=0;
							runbackward = true;
						}
					}
					else 
					{
						iShowImage(p,q,130,244,characterbackwardinitial);
					}
				}
			}
			else if(run==false && walk==true && duck==0&&punchkick==false && firing==0){
				if(characterreversewalk==0)
				{
					if(!walkforward)
					{
						iShowImage(p,q,130,244,characterwalkforward[characterindexwalkforward]);
						countwalkforward++;
						if(countwalkforward>=6000)
						{
							countwalkforward=0;
							characterindexwalkforward=1;
							walkforward = true;
						}
					}
					else 
					{
						iShowImage(p,q,130,244,characterforwardinitial);
					}
				}
				else if(characterreversewalk==1)
				{
					if(!walkbackward)
					{
						iShowImage(p,q,130,244,characterwalkbackward[characterindexwalkbackward]);
						countwalkbackward++;
						if(countwalkbackward>=6000)
						{
							countwalkbackward=0;
							characterindexwalkbackward=1;
							walkbackward = true;
						}
					}
					else 
					{
						iShowImage(p,q,130,244,characterbackwardinitial);
					}
				}
			}
			if(duck==1 && lookforward==true && lookbackward==false && firing==0)
			{
				iShowImage(p,q,118,151,characterduckforward);
			}
			else if(duck==1 && lookforward==false && lookbackward==true && firing==0)
			{
				iShowImage(p,q,134,144,characterduckbackward);
			}
			else if(punchkick==true&&lookforward)
			{
				if(lookforward && !lookbackward&&countpunchkick%2!=0)
				{

					iShowImage(p,q,319,222,punchforward);
				}
				else if(lookforward && !lookbackward&&countpunchkick%2==0)
				{

					iShowImage(p,q,319,222,kickforward);
				}

			}
			else if(punchkick==true && lookbackward)
			{
				if(lookbackward && !lookforward && countpunchkick%2!=0)
				{

					iShowImage(p-200,q,319,222,punchbackward);
				}
				else if(lookbackward && !lookforward && countpunchkick%2==0)
				{

					iShowImage(p-200,q,319,222,kickbackward);
				}

			}
		}

		}
		else if(characterhitflagforboss==1 && lookforward)
			{
				iShowImage(p,q,210,220,characterhitforward);
			}
			else if(characterhitflagforboss==1 && lookbackward)
			{
				iShowImage(p,q,210,220,characterhitbackward);
			}
		}
			else if(!characteralive && lookforward)
		{
			iShowImage(p,q,411,62,characterdeadforward);
			gamesovercount++;
			if(gamesovercount>=500)
			{
				iShowImage(0,0,1920,1080,gameover);
				adachidead = true;
			}
		}
		else if(!characteralive && lookbackward)
		{
			iShowImage(p,q,411,62,characterdeadbackward);
			gamesovercount++;
			if(gamesovercount>=500)
			{
				iShowImage(0,0,1920,1080,gameover);
				adachidead = true;
			}
		}

		if(characteralive && bossdead==true)
		{
			gameswincount++;
			if(gameswincount>=50)
			{
				gameWin();
			}
		}

	}
	}
#endif 