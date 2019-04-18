#ifndef GAMEPLAYSTRUCTURE_H_INCLUDED
#define GAMEPLAYSTRUCTURE_H_INCLUDED
struct BaseballEnemy
{
	int bbe_x;
	int bbe_y;
	int bbe_index;
	int bbe_health;
	int bbe_attack_index;
	bool bbe_hit_index;
	bool bbe_coming;
	bool bbe_attack;

};

BaseballEnemy bbenemy[10];

void baseballenemyvariables() //done
{
	for(int i=0;i<1;i++)
	{

		bbenemy[i].bbe_x=1950;
		bbenemy[i].bbe_y=45;
		bbenemy[i].bbe_index=0;
		bbenemy[i].bbe_attack_index=0;
		bbenemy[i].bbe_health=300;
		bbenemy[i].bbe_coming=true;
		bbenemy[i].bbe_hit_index=false;
		bbenemy[i].bbe_attack=false;
	}
	for(int i=1;i<2;i++)
	{

		bbenemy[i].bbe_x=2150;
		bbenemy[i].bbe_y=20;
		bbenemy[i].bbe_index=0;
		bbenemy[i].bbe_attack_index=0;
		bbenemy[i].bbe_health=300;
		bbenemy[i].bbe_coming=true;
		bbenemy[i].bbe_hit_index=false;
		bbenemy[i].bbe_attack=false;
	}
	for(int i=2;i<3;i++)
	{

		bbenemy[i].bbe_x=2250;
		bbenemy[i].bbe_y=10;
		bbenemy[i].bbe_index=0;
		bbenemy[i].bbe_attack_index=0;
		bbenemy[i].bbe_health=300;
		bbenemy[i].bbe_coming=true;
		bbenemy[i].bbe_hit_index=false;
		bbenemy[i].bbe_attack=false;
	}

	for(int i=3;i<4;i++)
	{

		bbenemy[i].bbe_x=2550;
		bbenemy[i].bbe_y=20;
		bbenemy[i].bbe_index=0;
		bbenemy[i].bbe_attack_index=0;
		bbenemy[i].bbe_health=300;
		bbenemy[i].bbe_coming=true;
		bbenemy[i].bbe_hit_index=false;
		bbenemy[i].bbe_attack=false;
	}

	for(int i=4;i<5;i++)
	{

		bbenemy[i].bbe_x=-1000;
		bbenemy[i].bbe_y=25;
		bbenemy[i].bbe_index=0;
		bbenemy[i].bbe_attack_index=0;
		bbenemy[i].bbe_health=300;
		bbenemy[i].bbe_coming=true;
		bbenemy[i].bbe_hit_index=false;
		bbenemy[i].bbe_attack=false;
	}

	for(int i=5;i<6;i++)
	{

		bbenemy[i].bbe_x=-1550;
		bbenemy[i].bbe_y=20;
		bbenemy[i].bbe_index=0;
		bbenemy[i].bbe_attack_index=0;
		bbenemy[i].bbe_health=300;
		bbenemy[i].bbe_coming=true;
		bbenemy[i].bbe_hit_index=false;
		bbenemy[i].bbe_attack=false;
	}

	for(int i=6;i<7;i++)
	{

		bbenemy[i].bbe_x=-1850;
		bbenemy[i].bbe_y=22;
		bbenemy[i].bbe_index=0;
		bbenemy[i].bbe_attack_index=0;
		bbenemy[i].bbe_health=300;
		bbenemy[i].bbe_coming=true;
		bbenemy[i].bbe_hit_index=false;
		bbenemy[i].bbe_attack=false;
	}
}

void baseballenemychange(){ //done
	for(int i=0;i<1;i++)
		{
		if(bbenemy[i].bbe_coming==true && gamePlayStart==true && x<=1920){
			bbenemy[i].bbe_x-=5;
			if(bbenemy[i].bbe_x<=x+100)//<=0)
			{

				baseballenemyflag1=1;
				bbenemy[i].bbe_x=x+100;//1920+rand()%300;
				baseballenemyattackindex1=1;
				if(baseballenemyattackindex1==1){
					bbenemy[i].bbe_attack=true;
					//printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_attack_index++;
					if(bbenemy[i].bbe_attack_index>=16 && bbenemy[i].bbe_attack_index<=19 && characterhealth>=0 && bbenemy[i].bbe_attack==true && bbenemy[i].bbe_coming==true &&!jump)
					{	characterhitflag=1;
					//printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflag=0;
						bbenemy[i].bbe_attack=false;
					}
					if(characterhealth<=0)
					{
						bbenemy[i].bbe_attack=false;
						characteralive = false;
						baseballenemyattackindex1=0;
					}
					if(bbenemy[i].bbe_attack_index>=28)
					{
						bbenemy[i].bbe_attack_index=0;
					}
				}
			}
			else{
				baseballenemyflag1=0;
				baseballenemyattackindex1=0;
				if(baseballenemyattackindex1==0){
					//printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_index++;
					if(bbenemy[i].bbe_index>=36)
					{
						bbenemy[i].bbe_index=0;
					}
				}
			}

		}
		else if(bbenemy[i].bbe_coming==false){
			characterhitflag=0;
		}
	}

	for(int i=1;i<2;i++)
	{
		if(bbenemy[i].bbe_coming==true && gamePlayStart==true && x<=1920){
			bbenemy[i].bbe_x-=5;
			if(bbenemy[i].bbe_x<=x+100)//<=0)
			{

				baseballenemyflag2=1;
				bbenemy[i].bbe_x=x+100;//1920+rand()%300;
				baseballenemyattackindex2=1;
				if(baseballenemyattackindex2==1){
					bbenemy[i].bbe_attack=true;
					//printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_attack_index++;
					if(bbenemy[i].bbe_attack_index>=16 && bbenemy[i].bbe_attack_index<=19 && characterhealth>=0 && bbenemy[i].bbe_attack==true && bbenemy[i].bbe_coming==true &&!jump)
					{	characterhitflag=1;
					//printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflag=0;
						bbenemy[i].bbe_attack=false;
					}
					if(characterhealth<=0)
					{
						bbenemy[i].bbe_attack=false;
						characteralive = false;
						baseballenemyattackindex2=0;
					}
					if(bbenemy[i].bbe_attack_index>=28)
					{
						bbenemy[i].bbe_attack_index=0;
					}
				}
			}
			else{
				baseballenemyflag2=0;
				baseballenemyattackindex2=0;
				if(baseballenemyattackindex2==0){
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_index++;
					if(bbenemy[i].bbe_index>=36)
					{
						bbenemy[i].bbe_index=0;
					}
				}
			}

		}
		else if(bbenemy[i].bbe_coming==false){
			characterhitflag=0;
		}
	}

	for(int i=2;i<3;i++)
	{
		if(bbenemy[i].bbe_coming==true && gamePlayStart==true && x<=1920){
			bbenemy[i].bbe_x-=5;
			if(bbenemy[i].bbe_x<=x+100)//<=0)
			{

				baseballenemyflag3=1;
				bbenemy[i].bbe_x=x+100;//1920+rand()%300;
				baseballenemyattackindex3=1;
				if(baseballenemyattackindex3==1){
					bbenemy[i].bbe_attack=true;
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_attack_index++;
					if(bbenemy[i].bbe_attack_index>=16 && bbenemy[i].bbe_attack_index<=19 && characterhealth>=0 && bbenemy[i].bbe_attack==true && bbenemy[i].bbe_coming==true &&!jump)
					{	characterhitflag=1;
					printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflag=0;
						bbenemy[i].bbe_attack=false;
					}
					if(characterhealth<=0)
					{
						bbenemy[i].bbe_attack=false;
						characteralive = false;
						baseballenemyattackindex3=0;
					}
					if(bbenemy[i].bbe_attack_index>=28)
					{
						bbenemy[i].bbe_attack_index=0;
					}
				}
			}
			else{
				baseballenemyflag3=0;
				baseballenemyattackindex3=0;
				if(baseballenemyattackindex3==0){
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_index++;
					if(bbenemy[i].bbe_index>=36)
					{
						bbenemy[i].bbe_index=0;
					}
				}
			}

		}
		else if(bbenemy[i].bbe_coming==false){
			characterhitflag=0;
		}
	}

	for(int i=3;i<4;i++)
	{
		if(bbenemy[i].bbe_coming==true && gamePlayStart==true && x<=1920){
			bbenemy[i].bbe_x-=5;
			if(bbenemy[i].bbe_x<=x+100)//<=0)
			{

				baseballenemyflag4=1;
				bbenemy[i].bbe_x=x+100;//1920+rand()%300;
				baseballenemyattackindex4=1;
				if(baseballenemyattackindex4==1){
					bbenemy[i].bbe_attack=true;
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_attack_index++;
					if(bbenemy[i].bbe_attack_index>=16 && bbenemy[i].bbe_attack_index<=19 && characterhealth>=0 && bbenemy[i].bbe_attack==true && bbenemy[i].bbe_coming==true &&!jump)
					{	characterhitflag=1;
					printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflag=0;
						bbenemy[i].bbe_attack=false;
					}
					if(characterhealth<=0)
					{
						bbenemy[i].bbe_attack=false;
						characteralive = false;
						baseballenemyattackindex4=0;
					}
					if(bbenemy[i].bbe_attack_index>=28)
					{
						bbenemy[i].bbe_attack_index=0;
					}
				}
			}
			else{
				baseballenemyflag4=0;
				baseballenemyattackindex4=0;
				if(baseballenemyattackindex4==0){
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					bbenemy[i].bbe_index++;
					if(bbenemy[i].bbe_index>=36)
					{
						bbenemy[i].bbe_index=0;
					}
				}
			}

		}
		else if(bbenemy[i].bbe_coming==false){
			characterhitflag=0;
		}
	}

		for(int i=4;i<5;i++)
	{
		if(bbenemy[i].bbe_coming==true && gamePlayStart==true && x<=1920){
			bbenemy[i].bbe_x+=5;
			if(bbenemy[i].bbe_x>=x-200)//<=0)
			{

				baseballenemyflag5=1;
				bbenemy[i].bbe_x=x-200;//1920+rand()%300;
				baseballenemyattackindex5=1;
				if(baseballenemyattackindex5==1){
					bbenemy[i].bbe_attack=true;
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					printf("reverse enemy x = %d & y = %d\n", bbenemy[i].bbe_x, bbenemy[i].bbe_y);
					bbenemy[i].bbe_attack_index++;
					if(bbenemy[i].bbe_attack_index>=16 && bbenemy[i].bbe_attack_index<=19 && characterhealth>=0 && bbenemy[i].bbe_attack==true && bbenemy[i].bbe_coming==true &&!jump)
					{	characterhitflag=1;
					printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflag=0;
						bbenemy[i].bbe_attack=false;
					}
					if(characterhealth<=0)
					{
						bbenemy[i].bbe_attack=false;
						characteralive = false;
						baseballenemyattackindex5=0;
					}
					if(bbenemy[i].bbe_attack_index>=28)
					{
						bbenemy[i].bbe_attack_index=0;
					}
				}
			}
			else{
				baseballenemyflag5=0;
				baseballenemyattackindex5=0;
				if(baseballenemyattackindex5==0){
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					printf("reverse enemy x = %d & y = %d\n", bbenemy[i].bbe_x, bbenemy[i].bbe_y);
					bbenemy[i].bbe_index++;
					if(bbenemy[i].bbe_index>=36)
					{
						bbenemy[i].bbe_index=0;
					}
				}
			}

		}
		else if(bbenemy[i].bbe_coming==false){
			characterhitflag=0;
		}
	}
	for(int i=5;i<6;i++)
	{
		if(bbenemy[i].bbe_coming==true && gamePlayStart==true && x<=1920){
			bbenemy[i].bbe_x+=5;
			if(bbenemy[i].bbe_x>=x-200)//<=0)
			{

				baseballenemyflag6=1;
				bbenemy[i].bbe_x=x-200;//1920+rand()%300;
				baseballenemyattackindex6=1;
				if(baseballenemyattackindex6==1){
					bbenemy[i].bbe_attack=true;
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					printf("reverse enemy x = %d & y = %d\n", bbenemy[i].bbe_x, bbenemy[i].bbe_y);
					bbenemy[i].bbe_attack_index++;
					if(bbenemy[i].bbe_attack_index>=16 && bbenemy[i].bbe_attack_index<=19 && characterhealth>=0 && bbenemy[i].bbe_attack==true && bbenemy[i].bbe_coming==true &&!jump)
					{	characterhitflag=1;
					printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflag=0;
						bbenemy[i].bbe_attack=false;
					}
					if(characterhealth<=0)
					{
						bbenemy[i].bbe_attack=false;
						characteralive = false;
						baseballenemyattackindex6=0;
					}
					if(bbenemy[i].bbe_attack_index>=28)
					{
						bbenemy[i].bbe_attack_index=0;
					}
				}
			}
			else{
				baseballenemyflag6=0;
				baseballenemyattackindex6=0;
				if(baseballenemyattackindex6==0){
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					printf("reverse enemy x = %d & y = %d\n", bbenemy[i].bbe_x, bbenemy[i].bbe_y);
					bbenemy[i].bbe_index++;
					if(bbenemy[i].bbe_index>=36)
					{
						bbenemy[i].bbe_index=0;
					}
				}
			}

		}
		else if(bbenemy[i].bbe_coming==false){
			characterhitflag=0;
		}
	}

	for(int i=6;i<7;i++)
	{
		if(bbenemy[i].bbe_coming==true && gamePlayStart==true && x<=1920){
			bbenemy[i].bbe_x+=5;
			if(bbenemy[i].bbe_x>=x-200)//<=0)
			{

				baseballenemyflag7=1;
				bbenemy[i].bbe_x=x-200;//1920+rand()%300;
				baseballenemyattackindex7=1;
				if(baseballenemyattackindex7==1){
					bbenemy[i].bbe_attack=true;
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					printf("reverse enemy x = %d & y = %d\n", bbenemy[i].bbe_x, bbenemy[i].bbe_y);
					bbenemy[i].bbe_attack_index++;
					if(bbenemy[i].bbe_attack_index>=16 && bbenemy[i].bbe_attack_index<=19 && characterhealth>=0 && bbenemy[i].bbe_attack==true && bbenemy[i].bbe_coming==true &&!jump)
					{	characterhitflag=1;
					printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflag=0;
						bbenemy[i].bbe_attack=false;
					}
					if(characterhealth<=0)
					{
						bbenemy[i].bbe_attack=false;
						characteralive = false;
						baseballenemyattackindex7=0;
					}
					if(bbenemy[i].bbe_attack_index>=28)
					{
						bbenemy[i].bbe_attack_index=0;
					}
				}
			}
			else{
				baseballenemyflag7=0;
				baseballenemyattackindex7=0;
				if(baseballenemyattackindex7==0){
					printf("hero %d vs boss %d\n",x,bbenemy[i].bbe_x);
					printf("reverse enemy x = %d & y = %d\n", bbenemy[i].bbe_x, bbenemy[i].bbe_y);
					bbenemy[i].bbe_index++;
					if(bbenemy[i].bbe_index>=36)
					{
						bbenemy[i].bbe_index=0;
					}
				}
			}

		}
		else if(bbenemy[i].bbe_coming==false){
			characterhitflag=0;
		}
	}
}

void baseballenemymove() //done
{
	for(int i=0;i<1;i++)
	{

		if(baseballenemyattackindex1==0 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 198,286, baseballenemy1[bbenemy[i].bbe_index]);//186,315  198,286
		}
		else if(baseballenemyattackindex1==1 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 233,298, baseballenemyattack1[bbenemy[i].bbe_attack_index]);//281,292  233,298
		}
		else if((baseballenemyattackindex1==0||baseballenemyattackindex1==1) && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == true)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 266,206, baseballenemyhitbackward1);
		}
		else if(bbenemy[i].bbe_coming==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 472, 63, baseballdeadbackward1);
		}

	}
	for(int i=1;i<2;i++)
	{

		if(baseballenemyattackindex2==0 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 198,286, baseballenemy2[bbenemy[i].bbe_index]);//186,315  198,286
		}
		else if(baseballenemyattackindex2==1 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 233,298, baseballenemyattack2[bbenemy[i].bbe_attack_index]);//281,292  233,298
		}
		else if((baseballenemyattackindex2==0||baseballenemyattackindex2==1) && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == true)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 266,206, baseballenemyhitbackward2);
		}
		else if(bbenemy[i].bbe_coming==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 472, 63, baseballdeadbackward2);
		}

	}

	for(int i=2;i<3;i++)
	{

		if(baseballenemyattackindex3==0 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 198,286, baseballenemy3[bbenemy[i].bbe_index]);//186,315  198,286
		}
		else if(baseballenemyattackindex3==1 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 233,298, baseballenemyattack3[bbenemy[i].bbe_attack_index]);//281,292  233,298
		}
		else if((baseballenemyattackindex3==0||baseballenemyattackindex3==1) && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == true)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 266,206, baseballenemyhitbackward3);
		}
		else if(bbenemy[i].bbe_coming==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 472, 63, baseballdeadbackward3);
		}

	}

	for(int i=3;i<4;i++)
	{

		if(baseballenemyattackindex4==0 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 198,286, baseballenemy4[bbenemy[i].bbe_index]);//186,315  198,286
		}
		else if(baseballenemyattackindex4==1 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 233,298, baseballenemyattack4[bbenemy[i].bbe_attack_index]);//281,292  233,298
		}
		else if((baseballenemyattackindex4==0||baseballenemyattackindex4==1) && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == true)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 266,206, baseballenemyhitbackward4);
		}
		else if(bbenemy[i].bbe_coming==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 472, 63, baseballdeadbackward4);
		}

	}


		for(int i=4;i<5;i++)
	{

		if(baseballenemyattackindex5==0 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 198,286, baseballenemy5[bbenemy[i].bbe_index]);//186,315  198,286
		}
		else if(baseballenemyattackindex5==1 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 233,298, baseballenemyattack5[bbenemy[i].bbe_attack_index]);//281,292  233,298
		}
		else if((baseballenemyattackindex5==0||baseballenemyattackindex5==1) && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == true)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 266,206, baseballenemyhitforward5);
		}
		else if(bbenemy[i].bbe_coming==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 472, 63, baseballdeadforward5);
		}

	}
		for(int i=5;i<6;i++)
	{

		if(baseballenemyattackindex6==0 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 198,286, baseballenemy6[bbenemy[i].bbe_index]);//186,315  198,286
		}
		else if(baseballenemyattackindex6==1 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 233,298, baseballenemyattack6[bbenemy[i].bbe_attack_index]);//281,292  233,298
		}
		else if((baseballenemyattackindex6==0||baseballenemyattackindex6==1) && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == true)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 266,206, baseballenemyhitforward6);
		}
		else if(bbenemy[i].bbe_coming==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 472, 63, baseballdeadforward6);
		}

	}

		for(int i=6;i<7;i++)
	{

		if(baseballenemyattackindex7==0 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 198,286, baseballenemy7[bbenemy[i].bbe_index]);//186,315  198,286
		}
		else if(baseballenemyattackindex7==1 && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 233,298, baseballenemyattack7[bbenemy[i].bbe_attack_index]);//281,292  233,298
		}
		else if((baseballenemyattackindex7==0||baseballenemyattackindex7==1) && bbenemy[i].bbe_coming==true && bbenemy[i].bbe_hit_index == true)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 266,206, baseballenemyhitforward7);
		}
		else if(bbenemy[i].bbe_coming==false)
		{
			iShowImage(bbenemy[i].bbe_x, bbenemy[i].bbe_y , 472, 63, baseballdeadforward7);
		}

	}


}


void hitbaseballenemywithpunchandkick() //done
{
	for(int i=0;i<1;i++){
		if(x + 100 >= bbenemy[i].bbe_x && bbenemy[i].bbe_y+90 && x + 100 <= bbenemy[i].bbe_x+281 && bbenemy[i].bbe_y + 90 &&lookforward)
		{
			//bbenemy[i].bbe_hit_index=true;

			bbenemy[i].bbe_health-=5;
			if(bbenemy[i].bbe_health<=0)
			{
				bbenemy[i].bbe_coming=false;
				totalenemykill++;
				printf("%d\n",totalenemykill);
			}
		}

	}
	for(int i=1;i<2;i++){
		if(x + 100 >= bbenemy[i].bbe_x && bbenemy[i].bbe_y+90 && x + 100 <= bbenemy[i].bbe_x+281 && bbenemy[i].bbe_y + 90 &&lookforward)
		{
			//bbenemy[i].bbe_hit_index=true;

			bbenemy[i].bbe_health-=5;
			if(bbenemy[i].bbe_health<=0)
			{
				bbenemy[i].bbe_coming=false;
				totalenemykill++;
				printf("%d\n",totalenemykill);
			}
		}

	}

	for(int i=2;i<3;i++){
		if(x + 100 >= bbenemy[i].bbe_x && bbenemy[i].bbe_y+90 && x + 100 <= bbenemy[i].bbe_x+281 && bbenemy[i].bbe_y + 90 &&lookforward)
		{
			//bbenemy[i].bbe_hit_index=true;

			bbenemy[i].bbe_health-=5;
			if(bbenemy[i].bbe_health<=0)
			{
				bbenemy[i].bbe_coming=false;
				totalenemykill++;
				printf("%d\n",totalenemykill);
			}
		}

	}

	for(int i=3;i<4;i++){
		if(x + 100 >= bbenemy[i].bbe_x && bbenemy[i].bbe_y+90 && x + 100 <= bbenemy[i].bbe_x+281 && bbenemy[i].bbe_y + 90 &&lookforward)
		{
			//bbenemy[i].bbe_hit_index=true;

			bbenemy[i].bbe_health-=5;
			if(bbenemy[i].bbe_health<=0)
			{
				bbenemy[i].bbe_coming=false;
				totalenemykill++;
				printf("%d\n",totalenemykill);
			}
		}

	}

	for(int i=4;i<5;i++){
		if(x - 200 >= bbenemy[i].bbe_x && bbenemy[i].bbe_y+90 && x - 200 <= bbenemy[i].bbe_x+281 && bbenemy[i].bbe_y + 90 &&lookbackward)
		{
			//bbenemy[i].bbe_hit_index=true;

			bbenemy[i].bbe_health-=5;
			if(bbenemy[i].bbe_health<=0)
			{
				bbenemy[i].bbe_coming=false;
				totalenemykill++;
				printf("%d\n",totalenemykill);
			}
		}

	}

		for(int i=5;i<6;i++){
		if(x - 200 >= bbenemy[i].bbe_x && bbenemy[i].bbe_y+90 && x - 200 <= bbenemy[i].bbe_x+281 && bbenemy[i].bbe_y + 90 &&lookbackward)
		{
			//bbenemy[i].bbe_hit_index=true;

			bbenemy[i].bbe_health-=5;
			if(bbenemy[i].bbe_health<=0)
			{
				bbenemy[i].bbe_coming=false;
				totalenemykill++;
				printf("%d\n",totalenemykill);
			}
		}

	}

	for(int i=6;i<7;i++){
		if(x - 200 >= bbenemy[i].bbe_x && bbenemy[i].bbe_y+90 && x - 200 <= bbenemy[i].bbe_x+281 && bbenemy[i].bbe_y + 90 &&lookbackward)
		{
			//bbenemy[i].bbe_hit_index=true;

			bbenemy[i].bbe_health-=5;
			if(bbenemy[i].bbe_health<=0)
			{
				bbenemy[i].bbe_coming=false;
				totalenemykill++;
				printf("%d\n",totalenemykill);
			}
		}

	}

}


void hitbaseballenemywithbullet(){  //done

	for (int i = 0;i < totalbullet;i++)//||i<totalbullet2||i<totalbullet3||i<totalbullet4||i<totalbullet5||i<totalbullet6; i++)
	{
		if (showbullet_x[i])//totalbullet er jonno ba shudhu shmne dariye guli korar jonno
		{
			bullet_xnew[i]=bullet_xnew[i]+1;
			bullet_ynew[i]=bullet_ynew[i];

			///Collision

			for (int j = 0; j < 1; j++){
				if (bullet_xnew[i] >= bbenemy[j].bbe_x && (bullet_xnew[i] <= bbenemy[j].bbe_x + 198||bullet_xnew[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew[i] >=bbenemy[j].bbe_y && (bullet_ynew[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew[i] < 1910)
				{
					bullet_xnew[i] = bullet_ynew[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}

			for (int j = 1; j < 2; j++){
				if (bullet_xnew[i] >= bbenemy[j].bbe_x && (bullet_xnew[i] <= bbenemy[j].bbe_x + 198||bullet_xnew[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew[i] >=bbenemy[j].bbe_y && (bullet_ynew[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew[i] < 1910)
				{
					bullet_xnew[i] = bullet_ynew[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}

			for (int j = 2; j < 3; j++){
				if (bullet_xnew[i] >= bbenemy[j].bbe_x && (bullet_xnew[i] <= bbenemy[j].bbe_x + 198||bullet_xnew[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew[i] >=bbenemy[j].bbe_y && (bullet_ynew[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew[i] < 1910)
				{
					bullet_xnew[i] = bullet_ynew[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}


			for (int j = 3; j < 4; j++){
				if (bullet_xnew[i] >= bbenemy[j].bbe_x && (bullet_xnew[i] <= bbenemy[j].bbe_x + 198||bullet_xnew[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew[i] >=bbenemy[j].bbe_y && (bullet_ynew[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew[i] < 1910)
				{
					bullet_xnew[i] = bullet_ynew[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}
		}
	}
	for (int i = 0;i < totalbullet5;i++){
		if (showbullet_x5[i]) //totalbullet5(crouch+forward)
		{
			bullet_xnew5[i]=bullet_xnew5[i]+1;
			bullet_ynew5[i]=bullet_ynew5[i];

			///Collision

			for (int j = 0; j < 1; j++){
				if (bullet_xnew5[i] >= bbenemy[j].bbe_x && (bullet_xnew5[i] <= bbenemy[j].bbe_x + 198||bullet_xnew5[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew5[i] >=bbenemy[j].bbe_y && (bullet_ynew5[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew5[i] < 1910)
				{
					bullet_xnew5[i] = bullet_ynew5[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;
					if(bbenemy[j].bbe_health==0){
						bbenemy[j].bbe_coming=false;}
					//showbullet_x5[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}


			for (int j = 1; j < 2; j++){
				if (bullet_xnew5[i] >= bbenemy[j].bbe_x && (bullet_xnew5[i] <= bbenemy[j].bbe_x + 198||bullet_xnew5[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew5[i] >=bbenemy[j].bbe_y && (bullet_ynew5[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew5[i] < 1910)
				{
					bullet_xnew5[i] = bullet_ynew5[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;
					if(bbenemy[j].bbe_health==0){
						bbenemy[j].bbe_coming=false;}
					//showbullet_x5[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}


			for (int j = 2; j < 3; j++){
				if (bullet_xnew5[i] >= bbenemy[j].bbe_x && (bullet_xnew5[i] <= bbenemy[j].bbe_x + 198||bullet_xnew5[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew5[i] >=bbenemy[j].bbe_y && (bullet_ynew5[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew5[i] < 1910)
				{
					bullet_xnew5[i] = bullet_ynew5[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;
					if(bbenemy[j].bbe_health==0){
						bbenemy[j].bbe_coming=false;}
					//showbullet_x5[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}


			for (int j = 3; j < 4; j++){
				if (bullet_xnew5[i] >= bbenemy[j].bbe_x && (bullet_xnew5[i] <= bbenemy[j].bbe_x + 198||bullet_xnew5[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew5[i] >=bbenemy[j].bbe_y && (bullet_ynew5[i] <= bbenemy[j].bbe_y+286||bullet_ynew[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew5[i] < 1910)
				{

					bullet_xnew5[i] = bullet_ynew5[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;
					if(bbenemy[j].bbe_health==0){
						bbenemy[j].bbe_coming=false;}
					//showbullet_x5[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}

		}
	}

	for (int i = 0;i < totalbullet2;i++){

		if (showbullet_x2[i]) //backward+ daraya shoja
		{
			bullet_xnew2[i]=bullet_xnew2[i]+1;
			bullet_ynew2[i]=bullet_ynew2[i];

			///Collision

			for (int j = 4; j < 5; j++){
				if (bullet_xnew2[i] >= bbenemy[j].bbe_x && (bullet_xnew2[i] <= bbenemy[j].bbe_x + 198||bullet_xnew2[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew2[i] >=bbenemy[j].bbe_y && (bullet_ynew2[i] <= bbenemy[j].bbe_y+286||bullet_ynew2[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew2[i] < 1910)
				{
					printf("reverse enemy x = %d & y = %d\n", bbenemy[j].bbe_x, bbenemy[j].bbe_y);
					bullet_xnew2[i] = bullet_ynew2[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}
				for (int j = 5; j < 6; j++){
				if (bullet_xnew2[i] >= bbenemy[j].bbe_x && (bullet_xnew2[i] <= bbenemy[j].bbe_x + 198||bullet_xnew2[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew2[i] >=bbenemy[j].bbe_y && (bullet_ynew2[i] <= bbenemy[j].bbe_y+286||bullet_ynew2[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew2[i] < 1910)
				{
					printf("reverse enemy x = %d & y = %d\n", bbenemy[j].bbe_x, bbenemy[j].bbe_y);
					bullet_xnew2[i] = bullet_ynew2[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}

						for (int j = 6; j < 7; j++){
				if (bullet_xnew2[i] >= bbenemy[j].bbe_x && (bullet_xnew2[i] <= bbenemy[j].bbe_x + 198||bullet_xnew2[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew2[i] >=bbenemy[j].bbe_y && (bullet_ynew2[i] <= bbenemy[j].bbe_y+286||bullet_ynew2[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew2[i] < 1910)
				{
					printf("reverse enemy x = %d & y = %d\n", bbenemy[j].bbe_x, bbenemy[j].bbe_y);
					bullet_xnew2[i] = bullet_ynew2[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}

		}
	}

	for (int i = 0;i < totalbullet6;i++){
		if (showbullet_x6[i])
		{
			bullet_xnew6[i]=bullet_xnew6[i]+1;
			bullet_ynew6[i]=bullet_ynew6[i];

			///Collision

					for (int j = 4; j < 5; j++){
				if (bullet_xnew6[i] >= bbenemy[j].bbe_x && (bullet_xnew6[i] <= bbenemy[j].bbe_x + 198||bullet_xnew6[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew6[i] >=bbenemy[j].bbe_y && (bullet_ynew6[i] <= bbenemy[j].bbe_y+286||bullet_ynew6[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew6[i] < 1910)
				{
					printf("reverse enemy x = %d & y = %d\n", bbenemy[j].bbe_x, bbenemy[j].bbe_y);
					bullet_xnew6[i] = bullet_ynew6[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}

			for (int j = 5; j < 6; j++){
				if (bullet_xnew6[i] >= bbenemy[j].bbe_x && (bullet_xnew6[i] <= bbenemy[j].bbe_x + 198||bullet_xnew6[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew6[i] >=bbenemy[j].bbe_y && (bullet_ynew6[i] <= bbenemy[j].bbe_y+286||bullet_ynew6[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew6[i] < 1910)
				{
					printf("reverse enemy x = %d & y = %d\n", bbenemy[j].bbe_x, bbenemy[j].bbe_y);
					bullet_xnew6[i] = bullet_ynew6[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}

					for (int j = 6; j < 7; j++){
				if (bullet_xnew6[i] >= bbenemy[j].bbe_x && (bullet_xnew6[i] <= bbenemy[j].bbe_x + 198||bullet_xnew6[i] <= bbenemy[j].bbe_x + 233) && bullet_ynew6[i] >=bbenemy[j].bbe_y && (bullet_ynew6[i] <= bbenemy[j].bbe_y+286||bullet_ynew6[i] <= bbenemy[j].bbe_y+298)  && bbenemy[j].bbe_coming==true)// && bullet_xnew6[i] < 1910)
				{
					printf("reverse enemy x = %d & y = %d\n", bbenemy[j].bbe_x, bbenemy[j].bbe_y);
					bullet_xnew6[i] = bullet_ynew6[i] = -50;
					bbenemy[j].bbe_hit_index=true;
					bbenemy[j].bbe_health-=10;

					if(bbenemy[j].bbe_health<=0){
						bbenemy[j].bbe_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
					}
					//showbullet_x[i] = false;
				}
				else{
					bbenemy[i].bbe_hit_index=false;
				}
			}
		}

	}
}

//THE BOSS STRUCTURE

struct TheBoss
{
	int boss_x;
	int boss_y;
	int boss_index;
	int boss_health;
	int boss_attack_index;
	bool boss_hit_index;
	bool boss_coming;
	bool boss_attack;

};
TheBoss bossenemy[10];

void bossenemyvariables()
{
		for(int i=0;i<1;i++)
	{

		bossenemy[i].boss_x=1950;
		bossenemy[i].boss_y=45;
		bossenemy[i].boss_index=0;
		bossenemy[i].boss_attack_index=0;
		bossenemy[i].boss_health=1000;
		bossenemy[i].boss_coming=true;
		bossenemy[i].boss_hit_index=false;
		bossenemy[i].boss_attack=false;
	}
}

void bossenemychange(){
	for(int i=0;i<1;i++)
		{
		if(bossenemy[i].boss_coming==true && x>1920 && gamePlayStart==true){
			bossenemy[i].boss_x-=5;
			if(bossenemy[i].boss_x<=p+100)//<=0)
			{

				bossenemyflag1=1;
				bossenemy[i].boss_x=p+100;//1920+rand()%300;
				bossenemyattackindex1=1;
				if(bossenemyattackindex1==1){
					bossenemy[i].boss_attack=true;
					printf("hero %d vs boss %d\n",x,bossenemy[i].boss_x);
					bossenemy[i].boss_attack_index++;
					if(bossenemy[i].boss_attack_index>=16 && bossenemy[i].boss_attack_index<=19 && characterhealth>=0 && bossenemy[i].boss_attack==true && bossenemy[i].boss_coming==true &&!jump)
					{	characterhitflagforboss=1;
					printf("%d\n",characterhealth);
					characterhealth-=5;
					}
					else {
						characterhitflagforboss=0;
						bossenemy[i].boss_attack=false;
					}
					if(characterhealth<=0)
					{
						bossenemy[i].boss_attack=false;
						characteralive = false;
						bossenemyattackindex1=0;
					}
					if(bossenemy[i].boss_attack_index>=28)
					{
						bossenemy[i].boss_attack_index=0;
					}
				}
			}
			else{
				bossenemyflag1=0;
				bossenemyattackindex1=0;
				if(bossenemyattackindex1==0){
					printf("hero %d vs boss %d\n",x,bossenemy[i].boss_x);
					bossenemy[i].boss_index++;
					if(bossenemy[i].boss_index>=36)
					{
						bossenemy[i].boss_index=0;
					}
				}
			}

		}
		else if(bossenemy[i].boss_coming==false){
			characterhitflagforboss=0;
		}
	}
}

void bossenemymove()
{
	for(int i=0;i<1;i++)
	{

		if(bossenemyattackindex1==0 && bossenemy[i].boss_coming==true && bossenemy[i].boss_hit_index == false)
		{
			iShowImage(bossenemy[i].boss_x, bossenemy[i].boss_y , 169,313, bossenemy1[bossenemy[i].boss_index]);//186,315  198,286
		}
		else if(bossenemyattackindex1==1 && bossenemy[i].boss_coming==true && bossenemy[i].boss_hit_index==false)
		{
			iShowImage(bossenemy[i].boss_x, bossenemy[i].boss_y , 218,299, bossenemyattack1[bossenemy[i].boss_attack_index]);//281,292  233,298
		}
		else if((bossenemyattackindex1==0||bossenemyattackindex1==1) && bossenemy[i].boss_coming==true && bossenemy[i].boss_hit_index == true)
		{
			iShowImage(bossenemy[i].boss_x, bossenemy[i].boss_y , 201,252, bossenemyhitbackward1);
		}
		else if(bossenemy[i].boss_coming==false)
		{
			iShowImage(bossenemy[i].boss_x, bossenemy[i].boss_y , 452, 116, bossdeadbackward1);
		}

	}

}

void hitbossenemywithpunchandkick()
{
	for(int i=0;i<1;i++){
		if(p + 100 >= bossenemy[i].boss_x && bossenemy[i].boss_y+90 && p + 100 <= bossenemy[i].boss_x+281 && bossenemy[i].boss_y + 90 &&lookforward)
		{
			//bossenemy[i].boss_hit_index=true;

			bossenemy[i].boss_health-=5;
			if(bossenemy[i].boss_health<=0)
			{
				bossenemy[i].boss_coming=false;
				totalenemykill++;
				bossdead = true;
				printf("%d\n",totalenemykill);
			}
		}

	}

}




void hitbossenemywithbullet(){

	for (int i = 0;i < totalbullet_p3;i++)//||i<totalbullet_p32||i<totalbullet_p33||i<totalbullet_p34||i<totalbullet_p35||i<totalbullet_p36; i++)
	{
		if (showbullet_p3[i])//totalbullet_p3 er jonno ba shudhu shmne dariye guli korar jonno
		{
			bullet_pnew3[i]=bullet_pnew3[i]+1;
			bullet_qnew3[i]=bullet_qnew3[i];

			///Collision

			for (int j = 0; j < 1; j++){
				if (bullet_pnew3[i] >= bossenemy[j].boss_x && (bullet_pnew3[i] <= bossenemy[j].boss_x + 198||bullet_pnew3[i] <= bossenemy[j].boss_x + 233) && bullet_qnew3[i] >=bossenemy[j].boss_y && (bullet_qnew3[i] <= bossenemy[j].boss_y+286||bullet_qnew3[i] <= bossenemy[j].boss_y+298)  && bossenemy[j].boss_coming==true)// && bullet_pnew3[i] < 1910)
				{
					bullet_pnew3[i] = bullet_qnew3[i] = -50;
					bossenemy[j].boss_hit_index=true;
					bossenemy[j].boss_health-=10;

					if(bossenemy[j].boss_health<=0){
						bossenemy[j].boss_coming=false;
						totalenemykill++;
						printf("%d\n",totalenemykill);
						bossdead = true;

					}
					//showbullet_p3[i] = false;
				}
				else{
					bossenemy[i].boss_hit_index=false;
				}
			}
		}
	}

}

////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
struct BaseballEnemy2
{
int bbe_x2;
int bbe_y2;
int bbe_index2;
int bbe_health2;
int bbe_attack_index2;
bool bbe_hit_index2;
bool bbe_coming2;
bool bbe_attack2;

};

BaseballEnemy2 bbenemy2[10];

void baseballenemyvariables2()
{
for(int i=0;i<1;i++)
{

bbenemy2[i].bbe_x2=1920+rand()%100;
bbenemy2[i].bbe_y2=-45+rand()%100;
bbenemy2[i].bbe_index2=rand()%10;
bbenemy2[i].bbe_attack_index2=rand()%10;
bbenemy2[i].bbe_health2=100;
bbenemy2[i].bbe_coming2=true;
bbenemy2[i].bbe_hit_index2=false;
bbenemy[i].bbe_attack=false;
}
}


void baseballenemychange2(){
for(int i=0;i<1;i++)
{
if(bbenemy2[i].bbe_coming2==true){
bbenemy2[i].bbe_x2-=5;
if(bbenemy2[i].bbe_x2<=x+100)//<=0)
{

baseballenemyflag=1;
bbenemy2[i].bbe_x2=x+100;//1920+rand()%300;
baseballenemyattackindex=1;
if(baseballenemyattackindex==1){
bbenemy2[i].bbe_attack2=true;
printf("hero %d vs boss %d\n",x,bbenemy2[i].bbe_x2);
bbenemy2[i].bbe_attack_index2++;
if(bbenemy2[i].bbe_attack_index2>=16 && bbenemy2[i].bbe_attack_index2<=19 && characterhealth>=0 && bbenemy2[i].bbe_attack2==true && bbenemy2[i].bbe_coming2==true &&!jump)
{	characterhitflag=1;
printf("%d\n",characterhealth);
characterhealth-=5;
}
else {
characterhitflag=0;
bbenemy2[i].bbe_attack2=false;
}
if(characterhealth<=0)
{
bbenemy2[i].bbe_attack2=false;
characteralive = false;
baseballenemyattackindex=0;
}
if(bbenemy2[i].bbe_attack_index2>=28)
{
bbenemy2[i].bbe_attack_index2=0;
}
}
}
else{
baseballenemyflag=0;
baseballenemyattackindex=0;
if(baseballenemyattackindex==0){
printf("hero %d vs boss %d\n",x,bbenemy2[i].bbe_x2);
bbenemy2[i].bbe_index2++;
if(bbenemy2[i].bbe_index2>=36)
{
bbenemy2[i].bbe_index2=0;
}
}
}

}
else if(bbenemy2[i].bbe_coming2==false){
characterhitflag=0;
}
}

}

void baseballenemymove2()
{
for(int i=0;i<1;i++)
{

if(baseballenemyattackindex==0 && bbenemy2[i].bbe_coming2==true && bbenemy2[i].bbe_hit_index2 == false)
{
iShowImage(bbenemy2[i].bbe_x2, bbenemy2[i].bbe_y2 , 198,286, baseballenemy[bbenemy2[i].bbe_index2]);//186,315  198,286
}
else if(baseballenemyattackindex==1 && bbenemy2[i].bbe_coming2==true && bbenemy2[i].bbe_hit_index2==false)
{
iShowImage(bbenemy2[i].bbe_x2, bbenemy2[i].bbe_y2 , 233,298, baseballenemyattack[bbenemy2[i].bbe_attack_index2]);//281,292  233,298
}
else if((baseballenemyattackindex==0||baseballenemyattackindex==1) && bbenemy2[i].bbe_coming2==true && bbenemy2[i].bbe_hit_index2 == true)
{
iShowImage(bbenemy2[i].bbe_x2, bbenemy2[i].bbe_y2 , 266,206, baseballenemyhitbackward);
}
else if(bbenemy2[i].bbe_coming2==false)
{
iShowImage(bbenemy2[i].bbe_x2, bbenemy2[i].bbe_y2 , 472, 63, baseballdeadbackward);
}

}
}


void hitbaseballenemywithpunchandkick2()
{
for(int i=0;i<1;i++){
if(x + 100 >= bbenemy2[i].bbe_x2 && bbenemy2[i].bbe_y2+90 && x + 100 <= bbenemy2[i].bbe_x2+281 && bbenemy2[i].bbe_y2 + 90)
{
//bbenemy[i].bbe_hit_index=true;

bbenemy2[i].bbe_health2-=5;
if(bbenemy2[i].bbe_health2<=0)
{
bbenemy2[i].bbe_coming2=false;
}
}
//else{
//bbenemy[i].bbe_hit_index=false;
//}
}
}

void hitbaseballenemywithbullet2(){

for (int i = 0;i < totalbullet||i<totalbullet5; i++)
{
if (showbullet_x[i])
{
bullet_xnew[i]=bullet_xnew[i]+1;
bullet_ynew[i]=bullet_ynew[i];

///Collision

for (int j = 0; j < 1; j++){
if (bullet_xnew[i] >= bbenemy2[j].bbe_x2 && (bullet_xnew[i] <= bbenemy2[j].bbe_x2 + 198||bullet_xnew[i] <= bbenemy2[j].bbe_x2 + 233) && bullet_ynew[i] >=bbenemy2[j].bbe_y2 && (bullet_ynew2[i] <= bbenemy2[j].bbe_y2+286||bullet_ynew[i] <= bbenemy2[j].bbe_y2+298) && bullet_xnew[i] < 1910 && bbenemy[j].bbe_coming==true)
{
//if (bullet_ynew[i] + 27 >= bbenemy[j].bbe_y && bullet_ynew[i] <= bbenemy[j].bbe_y + 70)
//{
//bbenemy[j].bbe_health-=50;

//if(bbenemy[j].bbe_health==0)
//{
//bbenemy[j].bbe_x = bbenemy[j].bbe_y = -1;
//bbenemy[j].bbe_coming=false;
//}

//}
bullet_xnew[i] = bullet_ynew[i] = -50;
int counthit;
bbenemy2[j].bbe_hit_index2=true;
bbenemy2[j].bbe_health2-=10;

if(bbenemy2[j].bbe_health2<=0){
bbenemy2[j].bbe_coming2=false;}
//showbullet_x[i] = false;
}
else{
bbenemy2[i].bbe_hit_index2=false;
}
}
}

if (showbullet_x5[i])
{
bullet_xnew5[i]=bullet_xnew5[i]+1;
bullet_ynew5[i]=bullet_ynew5[i];

///Collision

for (int j = 0; j < 1; j++){
if (bullet_xnew5[i] >= bbenemy2[j].bbe_x2 && (bullet_xnew5[i] <= bbenemy2[j].bbe_x2 + 198||bullet_xnew5[i] <= bbenemy2[j].bbe_x2 + 233) && bullet_ynew5[i] >=bbenemy2[j].bbe_y2 && (bullet_ynew5[i] <= bbenemy2[j].bbe_y2+286||bullet_ynew[i] <= bbenemy2[j].bbe_y2+298) && bullet_xnew5[i] < 1910 && bbenemy2[j].bbe_coming2==true)
{
//if (bullet_ynew[i] + 27 >= bbenemy[j].bbe_y && bullet_ynew[i] <= bbenemy[j].bbe_y + 70)
//{
//bbenemy[j].bbe_health-=50;

//if(bbenemy[j].bbe_health==0)
//{
//bbenemy[j].bbe_x = bbenemy[j].bbe_y = -1;
//bbenemy[j].bbe_coming=false;
//}

//}
bullet_xnew5[i] = bullet_ynew5[i] = -50;
bbenemy2[j].bbe_hit_index2=true;
bbenemy2[j].bbe_health2-=10;
if(bbenemy2[j].bbe_health2==0){
bbenemy2[j].bbe_coming2=false;}
//showbullet_x5[i] = false;
}
else{
bbenemy2[i].bbe_hit_index2=false;
}
}
}

}
}
*/

#endif