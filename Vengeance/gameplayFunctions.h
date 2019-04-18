#ifndef GAMEPLAYFUNCTIONS_H_INCLUDED
#define GAMEPLAYFUNCTIONS_H_INCLUDED
void activemode()
{
	int r,g,b;
	r=rand()%255;
	g=rand()%255;
	b=rand()%255;
	iSetColor(r,g,b);
	iText(1505,1025,"RUN MODE ACTIVATED",GLUT_BITMAP_TIMES_ROMAN_24);
}


void jumping()
{
	if(jump)
	{
		if(jumpup)
		{
			jumpY+=5;
			if(jumpY>=200)
			{
				jumpup = false;
			}
		}
		else 
		{
			jumpY-=5;
			if(jumpY<=0)
			{
				jump = false;
				jumpY=0;
			}
		}
	}
}


void bulletdemoforward(int p1, int q1)
{
	if(showbullet_x||showbullet_p){
		iShowImage(p1,q1,40,10,bulletgoingforward);
	}
}
void bulletdemobackward(int m1, int n1)
{
	if(showbullet_x2||showbullet_p2){
		iShowImage(m1,n1,40,10,bulletgoingbackward);
	}
}
void jumpandbulletdemoforward(int p2, int q2)
{
	if(showbullet_x3||showbullet_p3){
		iShowImage(p2,q2,40,10,bulletgoingforward);
	}
}
void jumpandbulletdemobackward(int m2, int n2)
{
	if(showbullet_x4||showbullet_p4){
		iShowImage(m2,n2,40,10,bulletgoingbackward);
	}
}
void duckedandbulletdemoforward(int p3, int q3)
{
	if(showbullet_x5||showbullet_p5){
		iShowImage(p3,q3,40,10,bulletgoingforward);
	}
}
void duckedandbulletdemobackward(int m3, int n3)
{
	if(showbullet_x6||showbullet_p6){
		iShowImage(m3,n3,40,10,bulletgoingbackward);
	}
}


#endif