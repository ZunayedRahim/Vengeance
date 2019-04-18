#ifndef GAMEPLAYIMOUSE_H_INCUDED
#define GAMEPLAYIMOUSE_H_INCLUDED
void gamePlayiMouseRMBUP()
{
	punchkick=false;
	//hitbaseballenemywithpunchandkick();
}
void gamePlayiMouseRMBDOWN()
{
	//place your codes here
	if(characteralive){
		countpunchkick++;
		punchkick=true;
		if(countpunchkick%2!=0 && punchkick==true)
		{
			punch=1;
			kick=0;
			hitbaseballenemywithpunchandkick();
			hitbossenemywithpunchandkick();
		}
		else if(countpunchkick%2==0 && punchkick==true)
		{
			kick=1;
			punch=0;
			hitbaseballenemywithpunchandkick();
			hitbossenemywithpunchandkick();
		}
	}
}

void gamePlayiMouseLMBUP()
{
	//place your codes here
	firing=0;
	//herogunshot=false;
	//collisioncheck();
}

void gamePlayiMouseLMBDOWN()
{
	//place your codes here

	//hitbaseballenemywithbullet();
	if(characteralive){
		firing=1;
		//herogunshot=true;
		if(flagfornewscreen==0){
			//herogunshot=true;
			if(lookforward&&!jump&&duck==0){
				if(totalbullet < 1000)
				{
					bullet_xnew[totalbullet] = x+200;
					bullet_ynew[totalbullet] = y+200;
					showbullet_x[totalbullet] = true;
					totalbullet++;
					if(bullet_xnew[totalbullet] == x+200 && bullet_ynew[totalbullet] == y+200)
					{
						hitbaseballenemywithbullet();
					}

				}
			}
			else if(lookbackward&&!jump&&duck==0){
				if(totalbullet2 < 1000)
				{
					bullet_xnew2[totalbullet2] = x-100;
					bullet_ynew2[totalbullet2] = y+200;
					showbullet_x2[totalbullet2] = true;
					totalbullet2++;
					if(bullet_xnew2[totalbullet2] == x-100 && bullet_ynew2[totalbullet2] == y+200)
					{
						hitbaseballenemywithbullet();
					}
				}
			}

			else if(jump&&lookforward&&duck==0){
				if(totalbullet3 < 1000)
				{
					bullet_xnew3[totalbullet3] = x+200;
					bullet_ynew3[totalbullet3] = y+300;
					showbullet_x3[totalbullet3] = true;
					totalbullet3++;
				}
			}
			else if(jump&&lookbackward&&duck==0){
				if(totalbullet4 < 1000)
				{
					bullet_xnew4[totalbullet4] = x-100;
					bullet_ynew4[totalbullet4] = y+300;
					showbullet_x4[totalbullet4] = true;
					totalbullet4++;
				}
			}
			else if(duck==1&&lookforward){
				if(totalbullet5 < 1000)
				{
					bullet_xnew5[totalbullet5] = x+200;
					bullet_ynew5[totalbullet5] = y+100;
					showbullet_x5[totalbullet5] = true;
					totalbullet5++;
					if(bullet_xnew5[totalbullet] == x+200 && bullet_ynew[totalbullet] == y+100)
					{
						hitbaseballenemywithbullet();
					}
				}
			}
			else if(duck==1&&lookbackward){
				if(totalbullet6 < 1000)
				{
					bullet_xnew6[totalbullet6] = x-200;
					bullet_ynew6[totalbullet6] = y+100;
					showbullet_x6[totalbullet6] = true;
					totalbullet6++;
					if(bullet_xnew6[totalbullet6] == x-200 && bullet_ynew6[totalbullet6] == y+100)
					{
						hitbaseballenemywithbullet();
					}
				}
			}


		}

		if(flagfornewscreen==1){
			if(lookforward&&!jump&&duck==0){
				//collisioncheck();
				if(totalbullet_p < 1000)
				{
					bullet_pnew[totalbullet_p] = p+200;
					bullet_qnew[totalbullet_p] = q+200;
					showbullet_p[totalbullet_p] = true;
					totalbullet_p++;
				}
			}
			else if(lookbackward&&!jump&&duck==0){
				//collisioncheck();
				if(totalbullet_p2 < 1000)
				{
					bullet_pnew2[totalbullet_p2] = p-100;
					bullet_qnew2[totalbullet_p2] = q+200;
					showbullet_p2[totalbullet_p2] = true;
					totalbullet_p2++;
				}
			}

			else if(jump&&lookforward&&duck==0){
				//collisioncheck();
				//if(totalbullet_p3 < 1000)
				//{
				//	bullet_pnew3[totalbullet_p3] = p+200;
				//	bullet_qnew3[totalbullet_p3] = q+300;
				//	totalbullet_p3++;
				//}
				if(totalbullet_p3 < 1000)
				{
					bullet_pnew3[totalbullet_p3] = p+200;
					bullet_qnew3[totalbullet_p3] = q+300;
					showbullet_p3[totalbullet_p3] = true;
					totalbullet_p3++;
					if(bullet_pnew3[totalbullet_p3] == p+200 && bullet_qnew[totalbullet_p3] == q+300)
					{
						hitbossenemywithbullet();
					}

				}
			}
			else if(jump&&lookbackward&&duck==0){
				//collisioncheck();
				if(totalbullet_p4 < 1000)
				{
					bullet_pnew4[totalbullet_p4] = p-100;
					bullet_qnew4[totalbullet_p4] = q+300;
					showbullet_p4[totalbullet_p4] = true;
					totalbullet_p4 ++;
				}
			}
			else if(duck==1&&lookforward){
				//collisioncheck();
				if(totalbullet_p5 < 1000)
				{
					bullet_pnew5[totalbullet_p5] = p+200;
					bullet_qnew5[totalbullet_p5] = q+100;
					showbullet_p5[totalbullet_p5] = true;
					totalbullet_p5++;
				}
			}
			else if(duck==1&&lookbackward){
				//collisioncheck();
				if(totalbullet_p6 < 1000)
				{
					bullet_pnew6[totalbullet_p6] = p-100;
					bullet_qnew6[totalbullet_p6] = q+100;
					showbullet_p6[totalbullet_p6] = true;
					totalbullet_p6++;
				}
			}

			//collisioncheck();

		}

	}
}

#endif