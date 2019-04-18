#ifndef	VARIABLES_H_INCLUDED
#define VARIABLES_H_INCLUDED

int screenWidth = 1920,screenHeight = 1080;

int win_b = 400, win_l = 400;
float delay = 0;
int speed = 0;
bool pianoRyoko=false;
int counter =0;
int dragMX=0,dragMY=0;
int cursorMX,cursorMY;
int image1,image2,image3,image4,image5,image6,load,option,credit,quit,insidecredit,optionback,optionstory,optionaudio,optionkey,optionvideo,optionbackagain,optionaudiooff,optionaudioon;
int modeOpen = 0,modeNew = 0,modeCredits = 0,modeBack=0,modeOption=0; // for opening screen
int a=0,b;
int gameQuit[2];
bool modeQuit = false;
bool modeChoice = true;
bool modeNewGame = false;
int chapter1[100];
int chapter1Index=0;
int chapScene=0;
int modeOptionalSceneChange = 0;
int bossConvoRoute=1;
int modeMiniGame = 0;
int chapter3[300],chapter4[100],chapter5[100],chapter6[100];
int chapter3Index = 0,chapter4Index=0,chapter5Index=1,chapter6Index=0;
int modeNewChapter4 =0;
bool chapter4talk = false;
bool modeContinueGame = false;
int flagForContinue =0;
int loadScreenImage,loadScreenMode=0;
bool inGameQuit= false;
bool introSound = false;
int modeNewChapter5 = 0;
int	modeNewChapter6 = 0;
int modeMiniGame2 = 0;
bool chapter5Convo1=false;
bool chapter5ConvoPast=false;
bool chapter5ConvoCall=false;
bool chapter5Zero = false;
bool chapter5Path1 = false;
bool chapter5Path2 = false;
bool chapter5Path3 = false;
bool chapter5Path4 = false;
bool chapter1Sound =false;
bool chapter2Sound =false;
bool chapter3Sound =false;
bool chapter4Sound =false;
bool chapter5Sound =false;
bool chapter6Sound =false;
bool modeForSound = false;
int flagsound5 = 0;
//bool soundForChapter1,soundForChapter2,soundForChapter3,soundForChapter4,soundForChapter5,soundForChapter6;
bool soundForChapter1=false;
bool soundForChapter2=false;
bool soundForChapter3=false;
bool soundForChapter4=false;
bool soundForChapter5=false;
bool soundForChapter6=false;

#endif // !MYHEADER_H_INCLUDED