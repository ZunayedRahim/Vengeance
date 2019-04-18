#ifndef GAMEPLAYVARIABLES_H_INCLUDED
#define GAMEPLAYVARIABLES_H_INCLUDED
bool gamePlayStart = false;
bool allmusic=true;
bool herogunshot=false;
bool gamewin = false;
bool gamelostSpaceBar=false;
bool gamelostESC = false;
bool adachidead = false;
bool bossdead = false;

int gameswincount =0;
int gameover;
int gamesovercount=0;
//the boss

int bossenemy1[40];
int bossenemyattack1[44];
int bossenemyattackindex1=0;
int bossenemyflag1=0;
int bossenemyhitbackward1;
int bossdeadbackward1;
//
int baseballenemy1[36];
int baseballenemyattack1[44];
int baseballenemyattackindex1=0;
int baseballenemyflag1=0;
int baseballenemyhitbackward1;
int baseballdeadbackward1;

int baseballenemy2[36];
int baseballenemyattack2[44];
int baseballenemyattackindex2=0;
int baseballenemyflag2=0;
int baseballenemyhitbackward2;
int baseballdeadbackward2;

int baseballenemy3[36];
int baseballenemyattack3[44];
int baseballenemyattackindex3=0;
int baseballenemyflag3=0;
int baseballenemyhitbackward3;
int baseballdeadbackward3;

int baseballenemy4[36];
int baseballenemyattack4[44];
int baseballenemyattackindex4=0;
int baseballenemyflag4=0;
int baseballenemyhitbackward4;
int baseballdeadbackward4;

int baseballenemy5[36];
int baseballenemyattack5[44];
int baseballenemyattackindex5=0;
int baseballenemyflag5=0;
int baseballenemyhitforward5;
int baseballdeadforward5;
//amra
int baseballenemy6[36];
int baseballenemyattack6[44];
int baseballenemyattackindex6=0;
int baseballenemyflag6=0;
int baseballenemyhitforward6;
int baseballdeadforward6;


int baseballenemy7[36];
int baseballenemyattack7[44];
int baseballenemyattackindex7=0;
int baseballenemyflag7=0;
int baseballenemyhitforward7;
int baseballdeadforward7;


int totalenemykill=0;

int bulletgoingforward;
int bulletgoingforward2;
int bulletgoingbackward;
int bulletgoingbackward2;

//lookforward and fire
int bullet_xnew[9999];
int bullet_ynew[9999];
bool showbullet_x[9999];
//int bulletindex_x=0;
int totalbullet;

int bullet_pnew[9999];
int bullet_qnew[9999];
bool showbullet_p[9999];
//int bulletindex_p=0;
int totalbullet_p;

//lookbackward and fire
int bullet_xnew2[9999];
int bullet_ynew2[9999];
bool showbullet_x2[9999];
//int bulletindex_x2=0;
int totalbullet2;

int bullet_pnew2[9999];
int bullet_qnew2[9999];
bool showbullet_p2[9999];
//int bulletindex_p2=0;
int totalbullet_p2;

//jump , lookforward and fire
int bullet_xnew3[9999];
int bullet_ynew3[9999];
bool showbullet_x3[9999];
//int bulletindex_x3=0;
int totalbullet3;

int bullet_pnew3[9999];
int bullet_qnew3[9999];
bool showbullet_p3[9999];
//int bulletindex_p3=0;
int totalbullet_p3;

//jump , lookbackward and fire
int bullet_xnew4[9999];
int bullet_ynew4[9999];
bool showbullet_x4[9999];
//int bulletindex_x4=0;
int totalbullet4;

int bullet_pnew4[9999];
int bullet_qnew4[9999];
bool showbullet_p4[9999];
//int bulletindex_p4=0;
int totalbullet_p4;


//duck/crouch , lookforward and fire
int bullet_xnew5[9999];
int bullet_ynew5[9999];
bool showbullet_x5[9999];
//int bulletindex_x5=0;
int totalbullet5;

int bullet_pnew5[9999];
int bullet_qnew5[9999];
bool showbullet_p5[9999];
//int bulletindex_p5=0;
int totalbullet_p5;

//duck/crouch, lookbackward and fire
int bullet_xnew6[9999];
int bullet_ynew6[9999];
bool showbullet_x6[9999];
//int bulletindex_x6=0;
int totalbullet6;

int bullet_pnew6[9999];
int bullet_qnew6[9999];
bool showbullet_p6[9999];
//int bulletindex_p6=0;
int totalbullet_p6;

//bool shootforwardposition;
//bool shootbackwardposition;

int x, y, p, q, backgroundimage1, backgroundimage2, backgroundimage3;
int characterreverserun=0, characterreversewalk=0, flagfornewscreen=0, flagforcheckpoint=0, duck=0, runmode=0, countrunmode=0, jumpY=0;
int firing=0,count=0;
int punch=0,kick=0;

int characterforwardinitial;
int characterbackwardinitial;

int characterduckforward;
int characterduckbackward;

int characterfiringforward;
int characterfiringbackward;
int characterjumpandfiringforward;
int characterjumpandfiringbackward;
int characterduckedandfiringforward;
int characterduckedandfiringbackward;
int characterdeadforward;
int characterdeadbackward;

int characterhealth=800;
bool characteralive = true;

int characterhitflag=0;
int characterhitflagforboss=0;
int characterhitforward;
int characterhitbackward;

int characterrunforward[32];
int characterrunbackward[32];

int characterwalkforward[48];
int characterwalkbackward[48];

int characterjumpforward[10];
int characterjumpbackward[10];

int characterindexrunforward=0;
int characterindexrunbackward=0;

int characterindexwalkforward=0;
int characterindexwalkbackward=0;

int punchforward;
int punchbackward;

int kickforward;
int kickbackward;

int countpunchkick=0;

bool run = false;
bool walk = false;
bool jump = false;
bool jumpup = false;
bool fire = false;

bool fireforward=false;
bool firebackward=false;

bool runforward = true;
bool runbackward = true;

bool walkforward = true;
bool walkbackward = true;

bool lookforward = true;
bool lookbackward = false;

int countrunforward = 0;
int countrunbackward = 0;

int countwalkforward=0;
int countwalkbackward=0;

bool charactershoot = false;
bool characterhit = false;
bool punchkick=false;

#endif