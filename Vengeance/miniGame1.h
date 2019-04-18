#ifndef	MINIGAME1_H_INCLUDED
#define MINIGAME1_H_INCLUDED
/*
	name			: minigameCodes
	parameter		: none
	return type		: void
	functionality	: 1. Used in iMouse()
					  2. plays a minigame under complex conditions
					  3. shuffles through pictures under different conditions					  
*/
void minigameCodes()
{
    //	PlaySound("sound\\Dark Forces", NULL, SND_LOOP |SND_ASYNC);
		if(cursorMX>=164 && cursorMX<=309 && cursorMY>=621 && cursorMY<=809 && chapter3Index==0)
		{
			chapter3Index = 1;//corpse
		}

		// for choosing the second evidence after choosing corpse//



		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==1)
		{
			chapter3Index = 6;//corpse-cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==1)
		{
			chapter3Index = 5;//corpse-blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==1)
		{
			chapter3Index = 4;//corpse-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==1)
		{  
			chapter3Index = 3;//corpse-camera
		}  
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==1)
		{
			chapter3Index = 2;//corpse-glass
		}

		//codes for choosing 3rd evidence after choosing any of the five availabe evidences and corpse


		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820 && chapter3Index==6)
		{
			chapter3Index =7; //corpse-cigar-blood
		}
		if(cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==6)
		{
			chapter3Index = 8; //corpse-cigar-hand
		}
		if(cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634 && chapter3Index==6)
		{
			chapter3Index = 9; //corpse-cigar-camera
		}
		if(cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828  && chapter3Index==6)
		{
			chapter3Index = 10; //corpse-cigar-glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796  && chapter3Index==5)
		{
			chapter3Index = 13; //corpse-blood-hand
		}
		if( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634  && chapter3Index==5)
		{
			chapter3Index = 12; //corpse-blood-camera
		}
		if(cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==5)
		{
			chapter3Index = 11; //corpse-blood-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==5)
		{
			chapter3Index = 7; //corpse-blood-cigar
		}
		if(cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634  && chapter3Index==4)
		{
			chapter3Index = 15; //corpse-hand-camera
		}
		if(  cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==4)
		{
			chapter3Index = 14; //corpse-hand-glass
		}
		if(cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==4)
		{
			chapter3Index = 8; //corpse-hand-cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==4)
		{
			chapter3Index = 13;//corpse-hand-blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828 && chapter3Index==3)
		{
			chapter3Index = 16; //corpse-camera-glass
		} 
		if(cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796    && chapter3Index==3)
		{
			chapter3Index = 15; //corpse-camera-hand
		} 
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820   && chapter3Index==3)
		{
			chapter3Index = 12; //corpse-camera-blood
		} 
		if(cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718  && chapter3Index==3)
		{
			chapter3Index = 9; //corpse-camera-cigar
		} 
		if(cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796    && chapter3Index==2)
		{
			chapter3Index = 14; //corpse-glass-hand
		} 
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820   && chapter3Index==2)
		{
			chapter3Index = 11; //corpse-glass-blood
		} 
		if(cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718  && chapter3Index==2)
		{ 
			chapter3Index = 10; //corpse-glass-cigar
		}  
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==2)
		{
			chapter3Index = 16;//corpse-blood-camera
		}

		//for choosing the fourth evidence//


		if(cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==7)
		{
			chapter3Index = 17;//corpse-cigar-blood-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==7)
		{
			chapter3Index = 22;//corpse-cigar-blood-camera
		} 
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==7)
		{
			chapter3Index = 18;//corpse-cigar-blood-glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==10)
		{
			chapter3Index = 19;//corpse-cigar-glass-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==10)
		{
			chapter3Index = 20;//corpse-cigar-glass-camera
		}	  	
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==10)
		{
			chapter3Index = 18;//corpse-cigar-glass-blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828 && chapter3Index==8)
		{
			chapter3Index = 19;//corpse-cigar-hand-glass
		}  
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634  && chapter3Index==8)
		{
			chapter3Index = 21;//corpse-cigar-hand-camera
		}	  	
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==8)
		{
			chapter3Index = 17;//corpse-cigar-hand-blood
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==9)
		{
			chapter3Index = 22;//corpse-cigar-camera-blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==9)
		{
			chapter3Index = 20;//corpse-cigar-camera-glass
		}  
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==9)
		{
			chapter3Index = 21;//corpse-cigar-camera-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==13)
		{
			chapter3Index = 34;//corpse-blood-hand-camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==13)
		{
			chapter3Index = 35;//corpse-blood-hand-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==13)
		{
			chapter3Index = 36;//corpse-blood-hand-cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==12)
		{
			chapter3Index = 37;//corpse-blood-camera-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==12)
		{
			chapter3Index = 38;//corpse-blood-camera-cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==12)
		{
			chapter3Index = 39;//corpse-blood-camera-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==11)
		{
			chapter3Index = 40;//corpse-blood-glass-camera
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==11)
		{
			chapter3Index = 41;//corpse-blood-glass-hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==11)
		{
			chapter3Index = 42;//corpse-blood-glass-cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==7)
		{
			chapter3Index = 43;//corpse-blood-cigar-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==7)
		{
			chapter3Index = 44;//corpse-blood-cigar-camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==7)
		{
			chapter3Index = 45;//corpse-blood-cigar-glass
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==15)
		{
			chapter3Index = 46;//corpse-hand-camera-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==15)
		{
			chapter3Index = 47;//corpse-hand-camera-cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==15)
		{
			chapter3Index = 48;//corpse-hand-camera-blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==14)
		{
			chapter3Index = 49;//corpse-hand-glass-cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==14)
		{
			chapter3Index = 50;//corpse-hand-glass-blood
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==14)
		{
			chapter3Index = 51;//corpse-hand-glass-camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==13)
		{
			chapter3Index = 52;//corpse-hand-blood-cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==13)
		{
			chapter3Index = 53;//corpse-hand-blood-camera
		}	                     	 
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==13)
		{
			chapter3Index = 54;//corpse-hand-blood-glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==15)
		{
			chapter3Index = 58;//corpse-hand-cigar-blood
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==15)
		{
			chapter3Index = 59;//corpse-hand-cigar-camera
		}	                     	 
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==15)
		{
			chapter3Index = 60;//corpse-hand-cigar-glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==9)
		{
			chapter3Index = 61;//corpse-camera-cigar-blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==9)
		{
			chapter3Index = 62;//corpse-camera-cigar-hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==9)
		{
			chapter3Index = 63;//corpse-camera-cigar-glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==16)
		{
			chapter3Index = 64;//corpse-camera-glass-blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==16)
		{
			chapter3Index = 65;//corpse-camera-glass-hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==16)
		{
			chapter3Index = 66;//corpse-camera-glass-cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==12)
		{
			chapter3Index = 67;//corpse-camera-cigar-hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==12)
		{
			chapter3Index = 68;//corpse-camera-cigar-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==12)
		{
			chapter3Index = 69;//corpse-camera-glass-cigar
		}

		//__________________for choosing the fifth evidence__________________//



		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==17)
		{
			chapter3Index = 23;//corpse-cigar-blood-hand-camera
		}

		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==17)
		{
			chapter3Index = 24;//corpse-cigar-blood-hand-glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==20)
		{
			chapter3Index = 26;//corpse-cigar-glass-camera-blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==20)
		{
			chapter3Index = 25;//corpse-cigar-glass-camera-hand
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==22)
		{
			chapter3Index = 27;//corpse-cigar-blood-camera-hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==22)
		{
			chapter3Index = 28;//corpse-cigar-blood-camera-glass
		}	
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==18)
		{
			chapter3Index = 29;//corpse-cigar-blood-glass-camera
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==18)
		{
			chapter3Index = 30;//corpse-cigar-blood-glass-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==19)
		{
			chapter3Index = 31;//corpse-cigar-glass-hand-camera
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==19)
		{
			chapter3Index = 32;//corpse-cigar-glass-hand-blood
		}

		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==34)
		{
			chapter3Index = 70;//corpse-blood-hand-camera-glass
		}

		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==34)
		{
			chapter3Index = 71;//corpse-blood-hand-camera-cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==35)
		{
			chapter3Index = 72;//corpse-blood-hand-glass-camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==35)
		{
			chapter3Index = 73;//corpse-blood-hand-glass-cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==36)
		{
			chapter3Index = 74;//corpse-blood-hand-cigar-glass
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==36)
		{
			chapter3Index = 75;//corpse-blood-hand-cigar-camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==37)
		{
			chapter3Index = 76;//corpse-blood-camera-glass-cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==37)
		{
			chapter3Index = 77;//corpse-blood-camera-glass-hand
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==38)
		{
			chapter3Index = 78;//corpse-blood-camera-cigar-hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==38)
		{
			chapter3Index = 79;//corpse-blood-camera-cigar-glass
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==39)
		{
			chapter3Index = 80;//corpse-blood-camera-hand-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==39)
		{
			chapter3Index = 81;//corpse-blood-camera-hand-cigar
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==40)
		{
			chapter3Index = 82;//corpse-blood-glass-camera-cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==40)
		{
			chapter3Index = 83;//corpse-blood-glass-camera-hand
		}  
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==41)
		{
			chapter3Index = 84;//corpse-blood-glass-hand-cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==41)
		{
			chapter3Index = 85;//corpse-blood-glass-hand-camera
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==42)
		{
			chapter3Index = 86;//corpse-blood-glass-cigar-hand
		}
		if( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==42)
		{
			chapter3Index = 87;//corpse-blood-glass-cigar-camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==43)
		{
			chapter3Index = 88;//corpse-blood-cigar-hand-glass
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==43)
		{
			chapter3Index = 89;//corpse-blood-cigar-hand-camera
		} 
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==44)
		{
			chapter3Index = 90;//corpse-blood-cigar-camera-glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==44)
		{
			chapter3Index = 91;//corpse-blood-cigar-camera-hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==45)
		{
			chapter3Index = 92;//corpse-blood-cigar-glass-camera
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==45)
		{
			chapter3Index = 93;//corpse-blood-cigar-glass-hand
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==46)
		{
			chapter3Index = 94;//corpse-hand-camera-glass-blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==46)
		{
			chapter3Index = 95;//corpse-hand-camera-glass-cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==47)
		{
			chapter3Index = 96;//corpse-hand-camera-cigar-blood
		}

		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==47)
		{
			chapter3Index = 97;//corpse-hand-camera-cigar-glass
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==48)
		{
			chapter3Index = 98;//corpse-hand-camera-blood-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==48)
		{
			chapter3Index = 99;//corpse-hand-camera-blood-cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==49)
		{
			chapter3Index = 100;//corpse-hand-glass-cigar-camera
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==49)
		{
			chapter3Index = 101;//corpse-hand-glass-cigar-blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==50)
		{
			chapter3Index = 102;//corpse-hand-glass-blood-cigar
		}

		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==50)
		{
			chapter3Index = 103;//corpse-hand-glass-blood-camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==51)
		{
			chapter3Index = 104;//corpse-hand-glass-camera-cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==51)
		{
			chapter3Index = 105;//corpse-hand-glass-camera-blood
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==52)
		{
			chapter3Index = 106;//corpse-hand-blood-cigar-camera
		}  
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==52)
		{
			chapter3Index = 107;//corpse-hand-blood-cigar-glass
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==53)
		{
			chapter3Index = 108;//corpse-hand-blood-camera-glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==53)
		{
			chapter3Index = 109;//corpse-hand-blood-camera-cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==54)
		{
			chapter3Index = 110;//corpse-hand-blood-glass-camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==54)
		{
			chapter3Index = 111;//corpse-hand-blood-glass-cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==55)
		{
			chapter3Index = 112;//corpse-hand-cigar-blood-camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==55)
		{
			chapter3Index = 113;//corpse-hand-cigar-blood-glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==56)
		{
			chapter3Index = 114;//corpse-hand-cigar-camera-blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==56)
		{
			chapter3Index = 115;//corpse-hand-cigar-camera-glass
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==57)
		{
			chapter3Index = 116;//corpse-hand-cigar-glass-camera
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==57)
		{
			chapter3Index = 117;//corpse-hand-cigar-glass-blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==58)
		{
			chapter3Index = 118;//corpse-camera-hand-glass-cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==58)
		{
			chapter3Index = 119;//corpse-camera-hand-glass-blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==59)
		{
			chapter3Index = 120;//glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==59)
		{
			chapter3Index = 121;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==60)
		{
			chapter3Index = 122;//glass
		}	
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==60)
		{
			chapter3Index = 123;//blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==61)
		{
			chapter3Index = 124;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==61)
		{
			chapter3Index = 125;//hand
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==62)
		{
			chapter3Index = 126;//blood
		}    
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==62)
		{
			chapter3Index = 127;//glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==63)
		{
			chapter3Index = 128;//blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==63)
		{
			chapter3Index = 129;//hand
		}

		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==64)
		{
			chapter3Index = 130;//hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==64)
		{
			chapter3Index = 131;//cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==65)
		{
			chapter3Index = 132;//blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==65)
		{
			chapter3Index = 133;//cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==66)
		{
			chapter3Index = 134;//blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==66)
		{
			chapter3Index = 135;//hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==67)
		{
			chapter3Index = 136;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==67)
		{
			chapter3Index = 137;//glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==68)
		{
			chapter3Index = 138;//cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==68)
		{
			chapter3Index = 139;//hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==69)
		{
			chapter3Index = 140;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==69)
		{
			chapter3Index = 141;//hand
		}

		/////////////////////Sixth Option//////////////////////////////


		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==24)
		{
			chapter3Index = 33;//camera
		}

		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==23)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==26)
		{
			chapter3Index = 33;//hand
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==25)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==28)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==27)
		{
			chapter3Index = 33;//glass
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==30)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==29)
		{
			chapter3Index = 33;//hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==32)
		{
			chapter3Index = 33;//camera
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==31)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==70)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==71)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==72)
		{
			chapter3Index = 33;//cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==73)
		{
			chapter3Index = 33;//camera
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==74)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==75)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==76)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==77)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==78)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==79)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==80)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==81)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==82)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==83)
		{
			chapter3Index = 33;//cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634  && chapter3Index==84)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==85)
		{
			chapter3Index = 33;//cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==86)
		{
			chapter3Index =33;//camera
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==87)
		{
			chapter3Index = 33;//hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==88)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==89)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==90)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==91)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==92)
		{
			chapter3Index = 33;//hand
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==93)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==94)
		{
			chapter3Index = 33;//cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==95)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==96)
		{
			chapter3Index = 33;//glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==97)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==98)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==99)
		{
			chapter3Index = 33;//glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==100)
		{
			chapter3Index = 33;//blood
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==101)
		{
			chapter3Index = 33;//camera
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==102)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==103)
		{
			chapter3Index = 33;//cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==104)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==105)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==106)
		{
			chapter3Index = 33;//glass
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==107)
		{
			chapter3Index =33;//camera
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==108)
		{
			chapter3Index =33;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==109)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==110)
		{
			chapter3Index = 33;//cigar
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634   && chapter3Index==111)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==112)
		{
			chapter3Index = 33;//glass
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634  && chapter3Index==113)
		{
			chapter3Index = 33;//camera
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828  && chapter3Index==114)
		{
			chapter3Index = 33;//glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==115)
		{
			chapter3Index = 33;//blood
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==116)
		{
			chapter3Index = 33;//blood
		}
		if ( cursorMX>=674 && cursorMX<=727 && cursorMY>=612 && cursorMY<=634  && chapter3Index==117)
		{
			chapter3Index = 33;//camera
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==118)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==119)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==120)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==121)
		{
			chapter3Index = 33;//glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==122)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==123)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==124)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==125)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==126)
		{
			chapter3Index = 33;//glass
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==127)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==128)
		{
			chapter3Index = 33;//hand
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==129)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==130)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==131)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==132)
		{
			chapter3Index = 33;//cigar
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==133)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==134)
		{
			chapter3Index = 33;//hand
		}
		if(cursorMX>=333 && cursorMX<=384 && cursorMY>=781 && cursorMY<=820  && chapter3Index==135)
		{
			chapter3Index = 33;//blood
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==136)
		{
			chapter3Index = 33;//glass
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==137)
		{
			chapter3Index =33;//cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==138)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=355 && cursorMX<=373 && cursorMY>=709 && cursorMY<=718 && chapter3Index==139)
		{
			chapter3Index = 33;//cigar
		}
		if( cursorMX>=480 && cursorMX<=503 && cursorMY>=759 && cursorMY<=796 && chapter3Index==140)
		{
			chapter3Index = 33;//hand
		}
		if( cursorMX>=789 && cursorMX<=824 && cursorMY>=792 && cursorMY<=828   && chapter3Index==141)
		{
			chapter3Index = 33;//glass
		}
}
#endif