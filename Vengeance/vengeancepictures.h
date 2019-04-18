#ifndef VENGEANCEPICTURES_H_INCLUDED
#define VENGEANCEPICTURES_H_INCLUDED
#include "gameplayVariables.h"
void loadpictures()
{
	backgroundimage1 = iLoadImage("images\\street2.png");
	backgroundimage2 = iLoadImage("images\\street2mirror.png");
	//backgroundimage3 = iLoadImage("images\\street1.jpg");

	characterforwardinitial=iLoadImage("image\\standf.png");
	characterbackwardinitial=iLoadImage("image\\standb.png");
	characterduckforward=iLoadImage("image\\ducked\\dr.png");
	characterduckbackward=iLoadImage("image\\ducked\\dl.png");
	characterfiringforward=iLoadImage("image\\shooting\\sf2.png");
	characterfiringbackward=iLoadImage("image\\shooting\\sb2.png");
	characterduckedandfiringforward=iLoadImage("image\\shooting\\dsf1.png");
	characterduckedandfiringbackward=iLoadImage("image\\shooting\\dsb1.png");
	characterdeadforward=iLoadImage("image\\dead\\deadforward.png");
	characterdeadbackward=iLoadImage("image\\dead\\deadbackward.png");
	bulletgoingforward=iLoadImage("image\\shooting\\bulletforward.png");
	bulletgoingbackward=iLoadImage("image\\shooting\\bulletbackward.png");
	punchforward=iLoadImage("image\\pk\\punchf.png");
	punchbackward=iLoadImage("image\\pk\\punchb.png");
	kickforward=iLoadImage("image\\pk\\kickf.png");
	kickbackward=iLoadImage("image\\pk\\kickb.png");

	characterhitforward = iLoadImage("image\\hit\\hitforward.png");
	characterhitbackward = iLoadImage("image\\hit\\hitbackward.png");
	//jumping forward images

	characterjumpforward[0]=iLoadImage("image\\jump\\jf1.png");
	characterjumpforward[1]=iLoadImage("image\\jump\\jf2.png");

	//jump & fire forward
	characterjumpandfiringforward=iLoadImage("image\\shooting\\jsf1.png");

	//jump & fire backward
	characterjumpandfiringbackward=iLoadImage("image\\shooting\\jsb1.png");

	//jumping backward images

	characterjumpbackward[0]=iLoadImage("image\\jump\\jb1.png");
	characterjumpbackward[1]=iLoadImage("image\\jump\\jb2.png");

	for(int i=0;i<=47;i++)
	{
		if(i>=0 && i<=3)
		{
			characterrunforward[i]=iLoadImage("image\\runf1.png");

			characterrunbackward[i]=iLoadImage("image\\runb1.png");

			characterwalkforward[i]=iLoadImage("image\\standf.png");

			characterwalkbackward[i]=iLoadImage("image\\standb.png");
		}
		if(i>=4 && i<=7)
		{
			characterrunforward[i]=iLoadImage("image\\runf2.png");

			characterrunbackward[i]=iLoadImage("image\\runb2.png");

			characterwalkforward[i]=iLoadImage("image\\walkf1.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb1.png");
		}
		if(i>=8 && i<=11)
		{
			characterrunforward[i]=iLoadImage("image\\runf3.png");

			characterrunbackward[i]=iLoadImage("image\\runb3.png");

			characterwalkforward[i]=iLoadImage("image\\walkf2.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb2.png");
		}
		if(i>=12 && i<=15)
		{
			characterrunforward[i]=iLoadImage("image\\runf4.png");

			characterrunbackward[i]=iLoadImage("image\\runb4.png");

			characterwalkforward[i]=iLoadImage("image\\walkf3.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb3.png");
		}
		if(i>=16 && i<=19)
		{
			characterrunforward[i]=iLoadImage("image\\runf5.png");

			characterrunbackward[i]=iLoadImage("image\\runb5.png");

			characterwalkforward[i]=iLoadImage("image\\walkf4.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb4.png");
		}
		if(i>=20 && i<=23)
		{
			characterrunforward[i]=iLoadImage("image\\runf6.png");

			characterrunbackward[i]=iLoadImage("image\\runb6.png");

			characterwalkforward[i]=iLoadImage("image\\walkf5.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb5.png");
		}
		if(i>=24 && i<=27)
		{
			characterrunforward[i]=iLoadImage("image\\runf7.png");

			characterrunbackward[i]=iLoadImage("image\\runb7.png");

			characterwalkforward[i]=iLoadImage("image\\walkf6.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb6.png");
		}
		if(i>=28 && i<=31)
		{
			characterrunforward[i]=iLoadImage("image\\runf8.png");

			characterrunbackward[i]=iLoadImage("image\\runb8.png");

			characterwalkforward[i]=iLoadImage("image\\walkf7.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb7.png");
		}
		if(i>=32 && i<=35)
		{


			characterwalkforward[i]=iLoadImage("image\\walkf8.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb8.png");
		}
		if(i>=36 && i<=39)
		{

			characterwalkforward[i]=iLoadImage("image\\walkf9.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb9.png");
		}
		if(i>=40 && i<=43)
		{


			characterwalkforward[i]=iLoadImage("image\\walkf10.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb10.png");
		}
		if(i>=44 && i<=47)
		{


			characterwalkforward[i]=iLoadImage("image\\walkf11.png");

			characterwalkbackward[i]=iLoadImage("image\\walkb11.png");
		}





	}



	for(int i=0;i<=35;i++)
	{
		if(i>=0 && i<=3)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b1.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b1.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b1.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b1.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f1.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f1.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f1.png");
			printf("hocche");
			baseballenemyattack1[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b1.png");
			baseballenemyattack2[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b1.png");
			baseballenemyattack3[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b1.png");
			baseballenemyattack4[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b1.png");
			baseballenemyattack5[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f1.png");
			baseballenemyattack6[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f1.png");
			baseballenemyattack7[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f1.png");
			printf("\nhahaha");
		}

		if(i>=4 && i<=7)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b2.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b2.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b2.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b2.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f2.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f2.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f2.png");

			baseballenemyattack1[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b2.png");
			baseballenemyattack2[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b2.png");
			baseballenemyattack3[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b2.png");
			baseballenemyattack4[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b2.png");
			baseballenemyattack5[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f2.png");
			baseballenemyattack6[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f2.png");
			baseballenemyattack7[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f2.png");
		}

		if(i>=8 && i<=11)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b3.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b3.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b3.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b3.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f3.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f3.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f3.png");

			baseballenemyattack1[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b3.png");
			baseballenemyattack2[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b3.png");
			baseballenemyattack3[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b3.png");
			baseballenemyattack4[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b3.png");
			baseballenemyattack5[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f3.png");
			baseballenemyattack6[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f3.png");
			baseballenemyattack7[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f3.png");
		}

		if(i>=12 && i<=15)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b4.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b4.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b4.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b4.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f4.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f4.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f4.png");

			baseballenemyattack1[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b4.png");
			baseballenemyattack2[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b4.png");
			baseballenemyattack3[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b4.png");
			baseballenemyattack4[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b4.png");
			baseballenemyattack5[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f4.png");
			baseballenemyattack6[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f4.png");
			baseballenemyattack7[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f4.png");
		}


		if(i>=16 && i<=19)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b5.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b5.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b5.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b5.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f5.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f5.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f5.png");

			baseballenemyattack1[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b6.png");
			baseballenemyattack2[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b6.png");
			baseballenemyattack3[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b6.png");
			baseballenemyattack4[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b6.png");
			baseballenemyattack5[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f6.png");
			baseballenemyattack6[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f6.png");
			baseballenemyattack7[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f6.png");
		}

		if(i>=20 && i<=23)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b6.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b6.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b6.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b6.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f6.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f6.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f6.png");


			baseballenemyattack1[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b7.png");
			baseballenemyattack2[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b7.png");
			baseballenemyattack3[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b7.png");
			baseballenemyattack4[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b7.png");
			baseballenemyattack5[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f7.png");
			baseballenemyattack6[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f7.png");
			baseballenemyattack7[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f7.png");
		}

		if(i>=24 && i<=27)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b7.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b7.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b7.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b7.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f7.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f7.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f7.png");

			baseballenemyattack1[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b8.png");
			baseballenemyattack2[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b8.png");
			baseballenemyattack3[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b8.png");
			baseballenemyattack4[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_b8.png");
			baseballenemyattack5[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f8.png");
			baseballenemyattack6[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f8.png");
			baseballenemyattack7[i]=iLoadImage("image\\enemy\\baseballattack\\baseballattack_f8.png");

		}

		if(i>=28 && i<=31)
		{
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b8.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b8.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b8.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b8.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f8.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f8.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f8.png");
		}

		if(i>=32 && i<=35)
		{
			printf("amra load hou?");
			baseballenemy1[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b9.png");
			baseballenemy2[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b9.png");
			baseballenemy3[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b9.png");
			baseballenemy4[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_b9.png");
			baseballenemy5[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f9.png");
			baseballenemy6[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f9.png");
			baseballenemy7[i]=iLoadImage("image\\enemy\\baseballwalk\\baseballwalk_f9.png");
		}
	}



	baseballdeadbackward1=iLoadImage("image\\enemy\\baseballdead\\baseballdeadbackward.png");
	baseballenemyhitbackward1 = iLoadImage("image\\enemy\\baseballhit\\baseballhit_b1.png");
	baseballdeadbackward2=iLoadImage("image\\enemy\\baseballdead\\baseballdeadbackward.png");
	baseballenemyhitbackward2 = iLoadImage("image\\enemy\\baseballhit\\baseballhit_b1.png");
	baseballdeadbackward3=iLoadImage("image\\enemy\\baseballdead\\baseballdeadbackward.png");
	baseballenemyhitbackward3 = iLoadImage("image\\enemy\\baseballhit\\baseballhit_b1.png");
	baseballdeadbackward4=iLoadImage("image\\enemy\\baseballdead\\baseballdeadbackward.png");
	baseballenemyhitbackward4 = iLoadImage("image\\enemy\\baseballhit\\baseballhit_b1.png");
	baseballdeadforward5=iLoadImage("image\\enemy\\baseballdead\\baseballdeadforward.png");
	baseballenemyhitforward5 = iLoadImage("image\\enemy\\baseballhit\\baseballhit_f1.png");
	baseballdeadforward6=iLoadImage("image\\enemy\\baseballdead\\baseballdeadforward.png");
	baseballenemyhitforward6 = iLoadImage("image\\enemy\\baseballhit\\baseballhit_f1.png");
	baseballdeadforward7=iLoadImage("image\\enemy\\baseballdead\\baseballdeadforward.png");
	baseballenemyhitforward7 = iLoadImage("image\\enemy\\baseballhit\\baseballhit_f1.png");


	//boss images

	for(int i=0;i<=3;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b1.png");
	}
	for(int i=4;i<=7;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b2.png");
	}
	for(int i=8;i<=11;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b3.png");
	}
	for(int i=12;i<=15;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b4.png");
	}
	for(int i=16;i<=19;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b5.png");
	}
	for(int i=20;i<=23;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b7.png");
	}
	for(int i=24;i<=27;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b8.png");
	}
	for(int i=28;i<=31;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b9.png");
	}
	for(int i=32;i<=35;i++)
	{
		bossenemy1[i]=iLoadImage("image\\enemy\\b10.png");
	}


	for(int i=0;i<=3;i++)
	{
		bossenemyattack1[i]=iLoadImage("image\\enemy\\bp1.png");
	}
	for(int i=4;i<=7;i++)
	{
		bossenemyattack1[i]=iLoadImage("image\\enemy\\bp2.png");
	}
	for(int i=8;i<=11;i++)
	{
		bossenemyattack1[i]=iLoadImage("image\\enemy\\bp3.png");
	}
	for(int i=12;i<=15;i++)
	{
		bossenemyattack1[i]=iLoadImage("image\\enemy\\bp4.png");
	}
	for(int i=16;i<=19;i++)
	{
		bossenemyattack1[i]=iLoadImage("image\\enemy\\bp5.png");
	}
	for(int i=20;i<=23;i++)
	{
		bossenemyattack1[i]=iLoadImage("image\\enemy\\bp6.png");
	}
	for(int i=24;i<=27;i++)
	{
		bossenemyattack1[i]=iLoadImage("image\\enemy\\bp7.png");
	}

	bossenemyhitbackward1=iLoadImage("image\\enemy\\bh.png");
	bossdeadbackward1=iLoadImage("image\\enemy\\bd.png");
	gameover = iLoadImage("image\\gameOver.jpg");
}

#endif
