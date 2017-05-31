#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <ogcsys.h>
#include <gccore.h>
#include <unistd.h>
#include <jpeg/jpgogc.h>
#include <asndlib.h>
#include <wiiuse/wpad.h>


extern char picdata_load[]; 		extern int piclength_load;				/* game loading screen */
extern char picdata_loadmsg[]; 		extern int piclength_loadmsg;			/* game loading msg */
extern char picdata_loadrsmsg[]; 	extern int piclength_loadrsmsg;			/* game loading reset msg */

extern char picdata_intro[]; 		extern int piclength_intro;				/* game intro screen */
extern char picdata_controls[]; 	extern int piclength_controls;			/* game controls screen */
extern char picdata_history[]; 		extern int piclength_history;			/* game history screen */

extern char picdata_background[]; 	extern int piclength_background;		/* game background */

extern char picdata_foul1[]; 		extern int piclength_foul1;				/* foul1 image */
extern char picdata_foul2[]; 		extern int piclength_foul2;				/* foul2 image */
extern char picdata_gameover[]; 	extern int piclength_gameover;			/* gameover image */

extern char picdata_key1[]; 		extern int piclength_key1;				/* key 1 image */
extern char picdata_key2[]; 		extern int piclength_key2;				/* key 2 image */
extern char picdata_key3[]; 		extern int piclength_key3;				/* key 3 image */
extern char picdata_key4[]; 		extern int piclength_key4;				/* key 4 image */
extern char picdata_rskey[]; 		extern int piclength_rskey;				/* reset key image */


extern char picdata_cage1[]; 		extern int piclength_cage1;				/* cage 1 image */
extern char picdata_cage2[]; 		extern int piclength_cage2;				/* cage 2 image */
extern char picdata_cage3[]; 		extern int piclength_cage3;				/* cage 3 image */
extern char picdata_cage4[]; 		extern int piclength_cage4;				/* cage 4 image */
extern char picdata_cage5[]; 		extern int piclength_cage5;				/* cage 5 image */

extern char picdata_bird1[]; 		extern int piclength_bird1;				/* bird 1 image */
extern char picdata_bird2[]; 		extern int piclength_bird2;				/* bird 2 image */
extern char picdata_bird3[]; 		extern int piclength_bird3;				/* bird 3 image */
extern char picdata_bird4[]; 		extern int piclength_bird4;				/* bird 4 image */

extern char picdata_rsbird1[]; 		extern int piclength_rsbird1;			/* reset bird 1 image */
extern char picdata_rsbird2[]; 		extern int piclength_rsbird2;			/* reset bird 2 image */
extern char picdata_rsbird3[]; 		extern int piclength_rsbird3;			/* reset bird 3 image */
extern char picdata_rsbird4[]; 		extern int piclength_rsbird4;			/* reset bird 4 image */

extern char picdata_croc1[]; 		extern int piclength_croc1;				/* croc 1 image */
extern char picdata_croc2[]; 		extern int piclength_croc2;				/* croc 2 image */
extern char picdata_croc3[]; 		extern int piclength_croc3;				/* croc 3 image */
extern char picdata_croc4[]; 		extern int piclength_croc4;				/* croc 4 image */
extern char picdata_croc5[]; 		extern int piclength_croc5;				/* croc 5 image */

extern char picdata_rscroc1[]; 		extern int piclength_rscroc1;			/* reset croc 1 image */
extern char picdata_rscroc2[]; 		extern int piclength_rscroc2;			/* reset croc 2 image */
extern char picdata_rscroc3[]; 		extern int piclength_rscroc3;			/* reset croc 3 image */
extern char picdata_rscroc4[]; 		extern int piclength_rscroc4;			/* reset croc 4 image */
extern char picdata_rscroc5[]; 		extern int piclength_rscroc5;			/* reset croc 5 image */

extern char picdata_coco1[]; 		extern int piclength_coco1;				/* coconut 1 image */
extern char picdata_coco2[]; 		extern int piclength_coco2;				/* coconut 2 image */

extern char picdata_rscoco1[]; 		extern int piclength_rscoco1;			/* reset coconut 1 image */
extern char picdata_rscoco2[]; 		extern int piclength_rscoco2;			/* reset coconut 2 image */

extern char picdata_junior1[]; 		extern int piclength_junior1;			/* junior 1 image */
extern char picdata_junior2[]; 		extern int piclength_junior2;			/* junior 2 image */
extern char picdata_junior3[]; 		extern int piclength_junior3;			/* junior 3 image */
extern char picdata_junior4[]; 		extern int piclength_junior4;			/* junior 4 image */
extern char picdata_junior8[]; 		extern int piclength_junior8;			/* junior 8 image */
extern char picdata_junior10[]; 	extern int piclength_junior10;			/* junior 10 image */
extern char picdata_junior12[]; 	extern int piclength_junior12;			/* junior 12 image */
extern char picdata_junior13[]; 	extern int piclength_junior13;			/* junior 13 image */
extern char picdata_junior15[]; 	extern int piclength_junior15;			/* junior 15 image */
extern char picdata_junior18[]; 	extern int piclength_junior18;			/* junior 18 image */
extern char picdata_junior19[]; 	extern int piclength_junior19;			/* junior 19 image */
extern char picdata_junior20[]; 	extern int piclength_junior20;			/* junior 20 image */

extern char picdata_rsjunior1[]; 	extern int piclength_rsjunior1;			/* reset junior 1 image */
extern char picdata_rsjunior2[]; 	extern int piclength_rsjunior2;			/* reset junior 2 image */
extern char picdata_rsjunior3[]; 	extern int piclength_rsjunior3;			/* reset junior 3 image */
extern char picdata_rsjunior4[]; 	extern int piclength_rsjunior4;			/* reset junior 4 image */
extern char picdata_rsjunior8[]; 	extern int piclength_rsjunior8;			/* reset junior 8 image */
extern char picdata_rsjunior10[]; 	extern int piclength_rsjunior10;		/* reset junior 10 image */
extern char picdata_rsjunior12[]; 	extern int piclength_rsjunior12;		/* reset junior 12 image */
extern char picdata_rsjunior13[]; 	extern int piclength_rsjunior13;		/* reset junior 13 image */
extern char picdata_rsjunior15[]; 	extern int piclength_rsjunior15;		/* reset junior 15 image */
extern char picdata_rsjunior18[]; 	extern int piclength_rsjunior18;		/* reset junior 18 image */
extern char picdata_rsjunior19[]; 	extern int piclength_rsjunior19;		/* reset junior 19 image */
extern char picdata_rsjunior20[]; 	extern int piclength_rsjunior20;		/* reset junior 20 image */

extern char picdata_jump1[]; 		extern int piclength_jump1;				/* jump 1 image */
extern char picdata_jump2[]; 		extern int piclength_jump2;				/* jump 2 image */
extern char picdata_jump3[]; 		extern int piclength_jump3;				/* jump 3 image */
extern char picdata_jump4[]; 		extern int piclength_jump4;				/* jump 4 image */
extern char picdata_jump5[]; 		extern int piclength_jump5;				/* jump 5 image */

extern char picdata_rsjump1[]; 		extern int piclength_rsjump1;			/* reset jump 1 image */
extern char picdata_rsjump2[]; 		extern int piclength_rsjump2;			/* reset jump 2 image */
extern char picdata_rsjump3[]; 		extern int piclength_rsjump3;			/* reset jump 3 image */
extern char picdata_rsjump4[]; 		extern int piclength_rsjump4;			/* reset jump 4 image */
extern char picdata_rsjump5[]; 		extern int piclength_rsjump5;			/* reset jump 5 image */


extern char picdata_score0[]; 		extern int piclength_score0;			/* score 0 image */
extern char picdata_score1[]; 		extern int piclength_score1;			/* score 1 image */
extern char picdata_score2[]; 		extern int piclength_score2;			/* score 2 image */
extern char picdata_score3[]; 		extern int piclength_score3;			/* score 3 image */
extern char picdata_score4[]; 		extern int piclength_score4;			/* score 4 image */
extern char picdata_score5[]; 		extern int piclength_score5;			/* score 5 image */
extern char picdata_score6[]; 		extern int piclength_score6;			/* score 6 image */
extern char picdata_score7[]; 		extern int piclength_score7;			/* score 7 image */
extern char picdata_score8[]; 		extern int piclength_score8;			/* score 8 image */
extern char picdata_score9[]; 		extern int piclength_score9;			/* score 9 image */

extern char snddata_collision[]; 	extern int sndlength_collision;			/* collision sound */
extern char snddata_moveenemy[]; 	extern int sndlength_moveenemy;			/* move enemy sound */
extern char snddata_movejunior[]; 	extern int sndlength_movejunior;		/* move junior sound */
extern char snddata_score[]; 		extern int sndlength_score;				/* score sound */
extern char snddata_wrongjump[]; 	extern int sndlength_wrongjump;			/* wrong jump sound */


static u32 *xfb;
static GXRModeObj *rmode;

struct enemy_status { bool visible; int precount; bool phase; int position; };

int jr_pos_map[21][7] = {
		{ 0, 0, 0, 0, 0, 0, 0 },			/* not exists  */		/* [ ][0] : jump up      */
		{ 2, 3, 1, 1, 1, 83, 402 },		/* position  1 */		/* [ ][1] : move right   */
		{ 2, 4, 1, 2, 2, 83, 329 },		/* position  2 */       /* [ ][2] : move down    */
		{ 4, 5, 3, 1, 3, 150, 404 },		/* position  3 */		/* [ ][3] : move left    */
		{ 4, 4, 3, 4, 4, 164, 329 },		/* position  4 */		/* [ ][4] : move up      */
		{ 6, 7, 5, 3, 5, 250, 402 },		/* position  5 */		/* [ ][5] : x-coordinate */
		{ 6, 8, 5, 4, 6, 265, 329 },		/* position  6 */		/* [ ][6] : y-coordinate */
		{ 8, 9, 7, 5, 7, 360, 402 },		/* position  7 */
		{ 8, 10, 7, 6, 8, 362, 329 },		/* position  8 */
		{ 10, 11, 9, 7, 9, 452, 402 }, 	/* position  9 */
		{ 10, 10, 9, 10, 10, 448, 329 },	/* position 10 */
		{ 12, 11, 11, 9, 11, 532, 402 },	/* position 11 */
		{ 12, 12, 11, 10, 13, 534, 314},	/* position 12 */
		{ 13, 13, 12, 15, 13, 524, 240}, 	/* position 13 */
		{ 0, 0, 0, 0, 0, 0, 0 },			/* not exists  */
		{ 16, 13, 15, 17, 15, 442, 240},	/* position 15 */
		{ 16, 16, 15, 16, 16, 450, 182},	/* position 16 */
		{ 18, 15, 17, 19, 17, 360, 240},	/* position 17 */
		{ 18, 18, 17, 18, 18, 356, 137},	/* position 18 */
		{ 20, 17, 19, 1, 19, 269, 240},	/* position 19 */
		{ 20, 20, 19, 20, 20, 269, 182}	/* position 20 */
	};

int bird_pos_map[8][3] = { 
		{ 0, 10, 295 },			/* position 1 */		/* [ ][1] : position nr  */
		{ 1, 56, 337 },			/* position 2 */		/* [ ][2] : x-coordinate */
		{ 3, 145, 337 },		/* position 3 */		/* [ ][3] : y-coordinate */
		{ 5, 234, 348 },		/* position 4 */
		{ 7, 329, 340 },		/* position 5 */
		{ 9, 424, 344 },		/* position 6 */
		{ 11, 492, 340 },		/* position 7 */
		{ 13, 602, 318 }		/* position 8 */
	};	


int croc_pos_map[13][3] = {
		{ 22, 147, 265 },		/* position  1 */		/* [ ][1] : position nr  */
		{ 20, 225, 270 },		/* position  2 */		/* [ ][2] : x-coordinate */
		{ 18, 321, 268 },		/* position  3 */		/* [ ][3] : y-coordinate */
		{ 16, 420, 270 },		/* position  4 */
		{ 14, 500, 265 },		/* position  5 */
		{ 12, 597, 284 },		/* position  6 */
		{ 12, 587, 431 },		/* position  7 */
		{ 10, 500, 434 },		/* position  8 */
		{ 8, 421, 428 },		/* position  9 */
		{ 6, 325, 434 },		/* position 10 */
		{ 4, 225, 428 },		/* position 11 */
		{ 2, 136, 434 },		/* position 12 */
		{ 0, 48, 428 }			/* position 13 */
	};

int key_pos_map[7][2] = {
		{ 200, 43 },		/* position 1 */		/* [ ][1] : x-coordinate */
		{ 200, 43 },		/* position 2 */		/* [ ][2] : y-coordinate */
		{ 200, 43 },		/* position 3 */
		{ 200, 43 },		/* position 4 */
		{ 200, 43 },		/* position 5 */
		{ 200, 43 },		/* position 6 */
		{ 200, 43 }			/* position 7 */
	};
	
int coco_pos_map[4][2] = {
		{ 330, 124 },		/* position 1 */		/* [ ][1] : x-coordinate */
		{ 330, 216 },		/* position 2 */		/* [ ][2] : y-coordinate */
		{ 330, 321 },		/* position 3 */
		{ 330, 386 }		/* position 4 */
	};
	
int cage_pos_map[5][2] = {		
		{ 2, 22 },		/* position 1 */		/* [ ][1] : x-coordinate */
		{ 2, 22 },		/* position 2 */		/* [ ][2] : y-coordinate */
		{ 2, 22 },		/* position 3 */
		{ 2, 22 },		/* position 4 */
		{ 2, 22 }		/* position 5 */
	};
	
int foul_pos_map[3][2] = {
		{ 437, 71 },		/* position 1 */		/* [ ][1] : x-coordinate */
		{ 537, 71 },		/* position 2 */		/* [ ][2] : y-coordinate */
		{ 582, 71 }			/* position 3 */
	};
	
int jump_pos_map[5][2] = {
		{ 200, 108 },		/* position 1 */		/* [ ][1] : x-coordinate */
		{ 146, 65 },		/* position 2 */		/* [ ][2] : y-coordinate */
		{ 145, 140 },		/* position 3 */
		{ 38, 276 },		/* position 4 */
		{ 11, 374 }			/* position 5 */
	};

struct enemy_status bird[4] = {
		{ FALSE, 0, 0, 0 },
		{ FALSE, 0, 0, 0 },
		{ FALSE, 0, 0, 0 },
		{ FALSE, 0, 0, 0 },
	};
	
struct enemy_status croc[6] = {
		{ FALSE, 0, 0 },
		{ FALSE, 0, 0 },
		{ FALSE, 0, 0 },
		{ FALSE, 0, 0 },
		{ FALSE, 0, 0 },
		{ FALSE, 0, 0 },
	};


JPEGIMG img_junior1; JPEGIMG img_rsjunior1; JPEGIMG img_junior2; JPEGIMG img_rsjunior2; JPEGIMG img_junior3; JPEGIMG img_rsjunior3;
JPEGIMG img_junior4; JPEGIMG img_rsjunior4; JPEGIMG img_junior8; JPEGIMG img_rsjunior8; JPEGIMG img_junior10; JPEGIMG img_rsjunior10; 
JPEGIMG img_junior12; JPEGIMG img_rsjunior12; JPEGIMG img_junior13; JPEGIMG img_rsjunior13; JPEGIMG img_junior15; JPEGIMG img_rsjunior15;
JPEGIMG img_junior18; JPEGIMG img_rsjunior18; JPEGIMG img_junior19; JPEGIMG img_rsjunior19; JPEGIMG img_junior20; JPEGIMG img_rsjunior20;

JPEGIMG img_jump1; JPEGIMG img_rsjump1; JPEGIMG img_jump2; JPEGIMG img_rsjump2; JPEGIMG img_jump3; JPEGIMG img_rsjump3;
JPEGIMG img_jump4; JPEGIMG img_rsjump4; JPEGIMG img_jump5; JPEGIMG img_rsjump5;

JPEGIMG img_score0; JPEGIMG img_score1; JPEGIMG img_score2; JPEGIMG img_score3; JPEGIMG img_score4;
JPEGIMG img_score5; JPEGIMG img_score6; JPEGIMG img_score7; JPEGIMG img_score8; JPEGIMG img_score9;


void display_jpeg(JPEGIMG jpeg, int x, int y) {
	
	unsigned int *jpegout = (unsigned int *) jpeg.outbuffer;
	
	int i,j;
	int height = jpeg.height;
	int width = jpeg.width / 2;
		for(i=0;i<=width-2;i++)
			for(j=0;j<=height-2;j++)
				xfb[(i+x)+320*(j+y)]=jpegout[i+width*j]; /* xfb[(i+x)+320*(j+16+y)]=jpegout[i+width*j]; */
}


void display_jr(bool set_reset, int position) {
	
	/* reset junior image at given position */
	if( set_reset == FALSE) {
		
		switch ( position )
		{
			case 1: display_jpeg(img_rsjunior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 2: display_jpeg(img_rsjunior2, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 3: display_jpeg(img_rsjunior3, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 4: display_jpeg(img_rsjunior4, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 5: display_jpeg(img_rsjunior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 6: display_jpeg(img_rsjunior2, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 7: display_jpeg(img_rsjunior3, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 8: display_jpeg(img_rsjunior8, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 9: display_jpeg(img_rsjunior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 10: display_jpeg(img_rsjunior10, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 11: display_jpeg(img_rsjunior3, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 12: display_jpeg(img_rsjunior12, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 13: display_jpeg(img_rsjunior13, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 15: display_jpeg(img_rsjunior15, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 16: display_jpeg(img_rsjunior2, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 17: display_jpeg(img_rsjunior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 18: display_jpeg(img_rsjunior18, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 19: display_jpeg(img_rsjunior19, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 20: display_jpeg(img_rsjunior20, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
		}
	}
	
	/* set junior image at given position */
	if( set_reset == TRUE) {
		
		switch ( position )
		{
			case 1: display_jpeg(img_junior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 2: display_jpeg(img_junior2, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 3: display_jpeg(img_junior3, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 4: display_jpeg(img_junior4, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 5: display_jpeg(img_junior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 6: display_jpeg(img_junior2, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 7: display_jpeg(img_junior3, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 8: display_jpeg(img_junior8, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 9: display_jpeg(img_junior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 10: display_jpeg(img_junior10, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 11: display_jpeg(img_junior3, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 12: display_jpeg(img_junior12, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 13: display_jpeg(img_junior13, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 15: display_jpeg(img_junior15, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 16: display_jpeg(img_junior2, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 17: display_jpeg(img_junior1, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 18: display_jpeg(img_junior18, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 19: display_jpeg(img_junior19, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
			case 20: display_jpeg(img_junior20, jr_pos_map[position][5]/2 , jr_pos_map[position][6] ); break;
		}
	}


}


void display_score(int score) {

	int score_1, score_10, score_100, score_1000;

	/* play sound */
	ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_score, sndlength_score, 255, 255, NULL);
	
	/* display units */
	score_1 = score % 10;
	switch ( score_1 )
		{
			case 0: display_jpeg(img_score0, 580/2 , 12 ); break;
			case 1: display_jpeg(img_score1, 580/2 , 12 ); break;
			case 2: display_jpeg(img_score2, 580/2 , 12 ); break;
			case 3: display_jpeg(img_score3, 580/2 , 12 ); break;
			case 4: display_jpeg(img_score4, 580/2 , 12 ); break;
			case 5: display_jpeg(img_score5, 580/2 , 12 ); break;
			case 6: display_jpeg(img_score6, 580/2 , 12 ); break;
			case 7: display_jpeg(img_score7, 580/2 , 12 ); break;
			case 8: display_jpeg(img_score8, 580/2 , 12 ); break;
			case 9: display_jpeg(img_score9, 580/2 , 12 ); break;	
		}
	
	/* display tens */
	if( score >= 10){
		score_10 = ( score / 10 ) % 10;
		switch ( score_10 )
		{
			case 0: display_jpeg(img_score0, 538/2 , 12 ); break;
			case 1: display_jpeg(img_score1, 538/2 , 12 ); break;
			case 2: display_jpeg(img_score2, 538/2 , 12 ); break;
			case 3: display_jpeg(img_score3, 538/2 , 12 ); break;
			case 4: display_jpeg(img_score4, 538/2 , 12 ); break;
			case 5: display_jpeg(img_score5, 538/2 , 12 ); break;
			case 6: display_jpeg(img_score6, 538/2 , 12 ); break;
			case 7: display_jpeg(img_score7, 538/2 , 12 ); break;
			case 8: display_jpeg(img_score8, 538/2 , 12 ); break;
			case 9: display_jpeg(img_score9, 538/2 , 12 ); break;	
		}
	}
	
	
	/* display hundreds */
	if( score >= 100){
		score_100 = ( score / 100 ) % 10;
		switch ( score_100 )
		{
			case 0: display_jpeg(img_score0, 496/2 , 12 ); break;
			case 1: display_jpeg(img_score1, 496/2 , 12 ); break;
			case 2: display_jpeg(img_score2, 496/2 , 12 ); break;
			case 3: display_jpeg(img_score3, 496/2 , 12 ); break;
			case 4: display_jpeg(img_score4, 496/2 , 12 ); break;
			case 5: display_jpeg(img_score5, 496/2 , 12 ); break;
			case 6: display_jpeg(img_score6, 496/2 , 12 ); break;
			case 7: display_jpeg(img_score7, 496/2 , 12 ); break;
			case 8: display_jpeg(img_score8, 496/2 , 12 ); break;
			case 9: display_jpeg(img_score9, 496/2 , 12 ); break;	
		}
	}
	
	/* display thousands */
	if( score >= 1000){
		score_1000 = ( score / 1000 ) % 10;
		switch ( score_1000 )
		{
			case 0: display_jpeg(img_score0, 454/2 , 12 ); break;
			case 1: display_jpeg(img_score1, 454/2 , 12 ); break;
			case 2: display_jpeg(img_score2, 454/2 , 12 ); break;
			case 3: display_jpeg(img_score3, 454/2 , 12 ); break;
			case 4: display_jpeg(img_score4, 454/2 , 12 ); break;
			case 5: display_jpeg(img_score5, 454/2 , 12 ); break;
			case 6: display_jpeg(img_score6, 454/2 , 12 ); break;
			case 7: display_jpeg(img_score7, 454/2 , 12 ); break;
			case 8: display_jpeg(img_score8, 454/2 , 12 ); break;
			case 9: display_jpeg(img_score9, 454/2 , 12 ); break;	
		}
	}
}


void update_score( int old_score, int new_score) {
	int score;
	
	/* increment score until new score and display intermediate scores */
	for( score = old_score; score <= new_score; score++) {
		display_score( score );
		usleep(100000);
	}
}


void Initialise() {
	
	/* initialize video */
	VIDEO_Init();
	WPAD_Init();
	WPAD_SetVRes(0, 640, 480);
	WPAD_SetDataFormat(WPAD_CHAN_0, WPAD_FMT_BTNS_ACC_IR);
	
	rmode = VIDEO_GetPreferredMode(NULL);
	
	xfb = MEM_K0_TO_K1(SYS_AllocateFramebuffer(rmode));
	console_init(xfb,20,20,rmode->fbWidth,rmode->xfbHeight,rmode->fbWidth*VI_DISPLAY_PIX_SZ);
	
	VIDEO_Configure(rmode);
	VIDEO_SetNextFramebuffer(xfb);
	VIDEO_SetBlack(FALSE);
	VIDEO_Flush();
	VIDEO_WaitVSync();
	if(rmode->viTVMode&VI_NON_INTERLACE) VIDEO_WaitVSync();
	
	/* initialize sound */
	ASND_Init();
	ASND_Pause(0);
}



int main() {

	/* set up loading image and messages*/
	JPEGIMG loading;
	memset(&loading, 0, sizeof(JPEGIMG)); loading.inbuffer = picdata_load; loading.inbufferlength = piclength_load; JPEG_Decompress(&loading);
	
	JPEGIMG loading_msg;
	memset(&loading_msg, 0, sizeof(JPEGIMG)); loading_msg.inbuffer = picdata_loadmsg; loading_msg.inbufferlength = piclength_loadmsg; JPEG_Decompress(&loading_msg);
	
	JPEGIMG loading_rsmsg;
	memset(&loading_rsmsg, 0, sizeof(JPEGIMG)); loading_rsmsg.inbuffer = picdata_loadrsmsg; loading_rsmsg.inbufferlength = piclength_loadrsmsg; JPEG_Decompress(&loading_rsmsg);
	
	/* initialize */
	Initialise();
	
	/* clear video */
	VIDEO_ClearFrameBuffer (rmode, xfb, COLOR_BLACK);
		
	
	/* set up background image */
	JPEGIMG background; 
	memset(&background, 0, sizeof(JPEGIMG)); background.inbuffer = picdata_background; background.inbufferlength = piclength_background; JPEG_Decompress(&background);


	/* setup intro image */
	JPEGIMG intro; 
	memset(&intro, 0, sizeof(JPEGIMG)); intro.inbuffer = picdata_intro; intro.inbufferlength = piclength_intro; JPEG_Decompress(&intro);


	/* setup controls image */
	JPEGIMG controls;
	memset(&controls, 0, sizeof(JPEGIMG)); controls.inbuffer = picdata_controls; controls.inbufferlength = piclength_controls; JPEG_Decompress(&controls);
	
	
	/* setup history image */
	JPEGIMG img_history;
	memset(&img_history, 0, sizeof(JPEGIMG)); img_history.inbuffer = picdata_history; img_history.inbufferlength = piclength_history; JPEG_Decompress(&img_history);

	
	/* setup foul and game over images */
	JPEGIMG img_foul1;
	memset(&img_foul1, 0, sizeof(JPEGIMG)); img_foul1.inbuffer = picdata_foul1; img_foul1.inbufferlength = piclength_foul1; JPEG_Decompress(&img_foul1);
	
	JPEGIMG img_foul2;
	memset(&img_foul2, 0, sizeof(JPEGIMG)); img_foul2.inbuffer = picdata_foul2; img_foul2.inbufferlength = piclength_foul2; JPEG_Decompress(&img_foul2);
	
	JPEGIMG img_gameover;
	memset(&img_gameover, 0, sizeof(JPEGIMG)); img_gameover.inbuffer = picdata_gameover; img_gameover.inbufferlength = piclength_gameover; JPEG_Decompress(&img_gameover);

	
	/* setup key images */
	JPEGIMG img_key1;
	memset(&img_key1, 0, sizeof(JPEGIMG)); img_key1.inbuffer = picdata_key1; img_key1.inbufferlength = piclength_key1; JPEG_Decompress(&img_key1);
	
	JPEGIMG img_key2;
	memset(&img_key2, 0, sizeof(JPEGIMG)); img_key2.inbuffer = picdata_key2; img_key2.inbufferlength = piclength_key2; JPEG_Decompress(&img_key2);
	
	JPEGIMG img_key3;
	memset(&img_key3, 0, sizeof(JPEGIMG)); img_key3.inbuffer = picdata_key3; img_key3.inbufferlength = piclength_key3; JPEG_Decompress(&img_key3);
	
	JPEGIMG img_key4;
	memset(&img_key4, 0, sizeof(JPEGIMG)); img_key4.inbuffer = picdata_key4; img_key4.inbufferlength = piclength_key4; JPEG_Decompress(&img_key4);
	
	JPEGIMG img_rskey;
	memset(&img_rskey, 0, sizeof(JPEGIMG)); img_rskey.inbuffer = picdata_rskey; img_rskey.inbufferlength = piclength_rskey; JPEG_Decompress(&img_rskey);
	
		
	/* setup cage images */
	JPEGIMG img_cage1;
	memset(&img_cage1, 0, sizeof(JPEGIMG)); img_cage1.inbuffer = picdata_cage1; img_cage1.inbufferlength = piclength_cage1; JPEG_Decompress(&img_cage1);
	
	JPEGIMG img_cage2;
	memset(&img_cage2, 0, sizeof(JPEGIMG)); img_cage2.inbuffer = picdata_cage2; img_cage2.inbufferlength = piclength_cage2; JPEG_Decompress(&img_cage2);
	
	JPEGIMG img_cage3;
	memset(&img_cage3, 0, sizeof(JPEGIMG)); img_cage3.inbuffer = picdata_cage3; img_cage3.inbufferlength = piclength_cage3; JPEG_Decompress(&img_cage3);
	
	JPEGIMG img_cage4;
	memset(&img_cage4, 0, sizeof(JPEGIMG)); img_cage4.inbuffer = picdata_cage4; img_cage4.inbufferlength = piclength_cage4; JPEG_Decompress(&img_cage4);
	
	JPEGIMG img_cage5;
	memset(&img_cage5, 0, sizeof(JPEGIMG)); img_cage5.inbuffer = picdata_cage5; img_cage5.inbufferlength = piclength_cage5; JPEG_Decompress(&img_cage5);

		
	/* setup bird images */
	JPEGIMG img_bird1;
	memset(&img_bird1, 0, sizeof(JPEGIMG)); img_bird1.inbuffer = picdata_bird1; img_bird1.inbufferlength = piclength_bird1; JPEG_Decompress(&img_bird1);
	
	JPEGIMG img_bird2;
	memset(&img_bird2, 0, sizeof(JPEGIMG)); img_bird2.inbuffer = picdata_bird2; img_bird2.inbufferlength = piclength_bird2; JPEG_Decompress(&img_bird2);

	JPEGIMG img_bird3;
	memset(&img_bird3, 0, sizeof(JPEGIMG)); img_bird3.inbuffer = picdata_bird3; img_bird3.inbufferlength = piclength_bird3; JPEG_Decompress(&img_bird3);

	JPEGIMG img_bird4;
	memset(&img_bird4, 0, sizeof(JPEGIMG)); img_bird4.inbuffer = picdata_bird4; img_bird4.inbufferlength = piclength_bird4; JPEG_Decompress(&img_bird4);

	JPEGIMG img_rsbird1; 
	memset(&img_rsbird1, 0, sizeof(JPEGIMG)); img_rsbird1.inbuffer = picdata_rsbird1; img_rsbird1.inbufferlength = piclength_rsbird1; JPEG_Decompress(&img_rsbird1);

	JPEGIMG img_rsbird2;
	memset(&img_rsbird2, 0, sizeof(JPEGIMG)); img_rsbird2.inbuffer = picdata_rsbird2; img_rsbird2.inbufferlength = piclength_rsbird2; JPEG_Decompress(&img_rsbird2);

	JPEGIMG img_rsbird3;
	memset(&img_rsbird3, 0, sizeof(JPEGIMG)); img_rsbird3.inbuffer = picdata_rsbird3; img_rsbird3.inbufferlength = piclength_rsbird3; JPEG_Decompress(&img_rsbird3);

	JPEGIMG img_rsbird4;
	memset(&img_rsbird4, 0, sizeof(JPEGIMG)); img_rsbird4.inbuffer = picdata_rsbird4; img_rsbird4.inbufferlength = piclength_rsbird4; JPEG_Decompress(&img_rsbird4);

	
	/* setup croc images */
	JPEGIMG img_croc1;
	memset(&img_croc1, 0, sizeof(JPEGIMG)); img_croc1.inbuffer = picdata_croc1; img_croc1.inbufferlength = piclength_croc1; JPEG_Decompress(&img_croc1);

	JPEGIMG img_croc2;
	memset(&img_croc2, 0, sizeof(JPEGIMG)); img_croc2.inbuffer = picdata_croc2; img_croc2.inbufferlength = piclength_croc2; JPEG_Decompress(&img_croc2);
	
	JPEGIMG img_croc3;
	memset(&img_croc3, 0, sizeof(JPEGIMG)); img_croc3.inbuffer = picdata_croc3; img_croc3.inbufferlength = piclength_croc3; JPEG_Decompress(&img_croc3);
	
	JPEGIMG img_croc4;
	memset(&img_croc4, 0, sizeof(JPEGIMG)); img_croc4.inbuffer = picdata_croc4; img_croc4.inbufferlength = piclength_croc4; JPEG_Decompress(&img_croc4);
	
	JPEGIMG img_croc5;
	memset(&img_croc5, 0, sizeof(JPEGIMG)); img_croc5.inbuffer = picdata_croc5; img_croc5.inbufferlength = piclength_croc5; JPEG_Decompress(&img_croc5);

	JPEGIMG img_rscroc1;
	memset(&img_rscroc1, 0, sizeof(JPEGIMG)); img_rscroc1.inbuffer = picdata_rscroc1; img_rscroc1.inbufferlength = piclength_rscroc1; JPEG_Decompress(&img_rscroc1);
	
	JPEGIMG img_rscroc2;
	memset(&img_rscroc2, 0, sizeof(JPEGIMG)); img_rscroc2.inbuffer = picdata_rscroc2; img_rscroc2.inbufferlength = piclength_rscroc2; JPEG_Decompress(&img_rscroc2);
	
	JPEGIMG img_rscroc3;
	memset(&img_rscroc3, 0, sizeof(JPEGIMG)); img_rscroc3.inbuffer = picdata_rscroc3; img_rscroc3.inbufferlength = piclength_rscroc3; JPEG_Decompress(&img_rscroc3);
	
	JPEGIMG img_rscroc4;
	memset(&img_rscroc4, 0, sizeof(JPEGIMG)); img_rscroc4.inbuffer = picdata_rscroc4; img_rscroc4.inbufferlength = piclength_rscroc4; JPEG_Decompress(&img_rscroc4);
	
	JPEGIMG img_rscroc5;
	memset(&img_rscroc5, 0, sizeof(JPEGIMG)); img_rscroc5.inbuffer = picdata_rscroc5; img_rscroc5.inbufferlength = piclength_rscroc5; JPEG_Decompress(&img_rscroc5);

	
	/* setup coconut images */
	JPEGIMG img_coco1;
	memset(&img_coco1, 0, sizeof(JPEGIMG)); img_coco1.inbuffer = picdata_coco1; img_coco1.inbufferlength = piclength_coco1; JPEG_Decompress(&img_coco1);
	
	JPEGIMG img_coco2;
	memset(&img_coco2, 0, sizeof(JPEGIMG)); img_coco2.inbuffer = picdata_coco2; img_coco2.inbufferlength = piclength_coco2; JPEG_Decompress(&img_coco2);
	
	JPEGIMG img_rscoco1;
	memset(&img_rscoco1, 0, sizeof(JPEGIMG)); img_rscoco1.inbuffer = picdata_rscoco1; img_rscoco1.inbufferlength = piclength_rscoco1; JPEG_Decompress(&img_rscoco1);
	
	JPEGIMG img_rscoco2;
	memset(&img_rscoco2, 0, sizeof(JPEGIMG)); img_rscoco2.inbuffer = picdata_rscoco2; img_rscoco2.inbufferlength = piclength_rscoco2; JPEG_Decompress(&img_rscoco2);
	
	
	/* setup score images */
	memset(&img_score0, 0, sizeof(JPEGIMG)); img_score0.inbuffer = picdata_score0; img_score0.inbufferlength = piclength_score0; JPEG_Decompress(&img_score0);
	memset(&img_score1, 0, sizeof(JPEGIMG)); img_score1.inbuffer = picdata_score1; img_score1.inbufferlength = piclength_score1; JPEG_Decompress(&img_score1);
	memset(&img_score2, 0, sizeof(JPEGIMG)); img_score2.inbuffer = picdata_score2; img_score2.inbufferlength = piclength_score2; JPEG_Decompress(&img_score2);
	memset(&img_score3, 0, sizeof(JPEGIMG)); img_score3.inbuffer = picdata_score3; img_score3.inbufferlength = piclength_score3; JPEG_Decompress(&img_score3);
	memset(&img_score4, 0, sizeof(JPEGIMG)); img_score4.inbuffer = picdata_score4; img_score4.inbufferlength = piclength_score4; JPEG_Decompress(&img_score4);
	memset(&img_score5, 0, sizeof(JPEGIMG)); img_score5.inbuffer = picdata_score5; img_score5.inbufferlength = piclength_score5; JPEG_Decompress(&img_score5);
	memset(&img_score6, 0, sizeof(JPEGIMG)); img_score6.inbuffer = picdata_score6; img_score6.inbufferlength = piclength_score6; JPEG_Decompress(&img_score6);
	memset(&img_score7, 0, sizeof(JPEGIMG)); img_score7.inbuffer = picdata_score7; img_score7.inbufferlength = piclength_score7; JPEG_Decompress(&img_score7);
	memset(&img_score8, 0, sizeof(JPEGIMG)); img_score8.inbuffer = picdata_score8; img_score8.inbufferlength = piclength_score8; JPEG_Decompress(&img_score8);
	memset(&img_score9, 0, sizeof(JPEGIMG)); img_score9.inbuffer = picdata_score9; img_score9.inbufferlength = piclength_score9; JPEG_Decompress(&img_score9);

	
	/* setup junior images */
	memset(&img_junior1, 0, sizeof(JPEGIMG)); img_junior1.inbuffer = picdata_junior1; img_junior1.inbufferlength = piclength_junior1; JPEG_Decompress(&img_junior1);
	memset(&img_rsjunior1, 0, sizeof(JPEGIMG)); img_rsjunior1.inbuffer = picdata_rsjunior1; img_rsjunior1.inbufferlength = piclength_rsjunior1; JPEG_Decompress(&img_rsjunior1);
	memset(&img_junior2, 0, sizeof(JPEGIMG)); img_junior2.inbuffer = picdata_junior2; img_junior2.inbufferlength = piclength_junior2; JPEG_Decompress(&img_junior2);
	memset(&img_rsjunior2, 0, sizeof(JPEGIMG)); img_rsjunior2.inbuffer = picdata_rsjunior2; img_rsjunior2.inbufferlength = piclength_rsjunior2; JPEG_Decompress(&img_rsjunior2);
	memset(&img_junior3, 0, sizeof(JPEGIMG)); img_junior3.inbuffer = picdata_junior3; img_junior3.inbufferlength = piclength_junior3; JPEG_Decompress(&img_junior3);
	memset(&img_rsjunior3, 0, sizeof(JPEGIMG)); img_rsjunior3.inbuffer = picdata_rsjunior3; img_rsjunior3.inbufferlength = piclength_rsjunior3; JPEG_Decompress(&img_rsjunior3);
	memset(&img_junior4, 0, sizeof(JPEGIMG)); img_junior4.inbuffer = picdata_junior4; img_junior4.inbufferlength = piclength_junior4; JPEG_Decompress(&img_junior4);
	memset(&img_rsjunior4, 0, sizeof(JPEGIMG)); img_rsjunior4.inbuffer = picdata_rsjunior4; img_rsjunior4.inbufferlength = piclength_rsjunior4; JPEG_Decompress(&img_rsjunior4);
	memset(&img_junior8, 0, sizeof(JPEGIMG)); img_junior8.inbuffer = picdata_junior8; img_junior8.inbufferlength = piclength_junior8; JPEG_Decompress(&img_junior8);
	memset(&img_rsjunior8, 0, sizeof(JPEGIMG)); img_rsjunior8.inbuffer = picdata_rsjunior8; img_rsjunior8.inbufferlength = piclength_rsjunior8; JPEG_Decompress(&img_rsjunior8);
	memset(&img_junior10, 0, sizeof(JPEGIMG)); img_junior10.inbuffer = picdata_junior10; img_junior10.inbufferlength = piclength_junior10; JPEG_Decompress(&img_junior10);
	memset(&img_rsjunior10, 0, sizeof(JPEGIMG)); img_rsjunior10.inbuffer = picdata_rsjunior10; img_rsjunior10.inbufferlength = piclength_rsjunior10; JPEG_Decompress(&img_rsjunior10);
	memset(&img_junior12, 0, sizeof(JPEGIMG)); img_junior12.inbuffer = picdata_junior12; img_junior12.inbufferlength = piclength_junior12; JPEG_Decompress(&img_junior12);
	memset(&img_rsjunior12, 0, sizeof(JPEGIMG)); img_rsjunior12.inbuffer = picdata_rsjunior12; img_rsjunior12.inbufferlength = piclength_rsjunior12; JPEG_Decompress(&img_rsjunior12);
	memset(&img_junior13, 0, sizeof(JPEGIMG)); img_junior13.inbuffer = picdata_junior13; img_junior13.inbufferlength = piclength_junior13; JPEG_Decompress(&img_junior13);
	memset(&img_rsjunior13, 0, sizeof(JPEGIMG)); img_rsjunior13.inbuffer = picdata_rsjunior13; img_rsjunior13.inbufferlength = piclength_rsjunior13; JPEG_Decompress(&img_rsjunior13);
	memset(&img_junior15, 0, sizeof(JPEGIMG)); img_junior15.inbuffer = picdata_junior15; img_junior15.inbufferlength = piclength_junior15; JPEG_Decompress(&img_junior15);
	memset(&img_rsjunior15, 0, sizeof(JPEGIMG)); img_rsjunior15.inbuffer = picdata_rsjunior15; img_rsjunior15.inbufferlength = piclength_rsjunior15; JPEG_Decompress(&img_rsjunior15);
	memset(&img_junior18, 0, sizeof(JPEGIMG)); img_junior18.inbuffer = picdata_junior18; img_junior18.inbufferlength = piclength_junior18; JPEG_Decompress(&img_junior18);
	memset(&img_rsjunior18, 0, sizeof(JPEGIMG)); img_rsjunior18.inbuffer = picdata_rsjunior18; img_rsjunior18.inbufferlength = piclength_rsjunior18; JPEG_Decompress(&img_rsjunior18);
	memset(&img_junior19, 0, sizeof(JPEGIMG)); img_junior19.inbuffer = picdata_junior19; img_junior19.inbufferlength = piclength_junior19; JPEG_Decompress(&img_junior19);
	memset(&img_rsjunior19, 0, sizeof(JPEGIMG)); img_rsjunior19.inbuffer = picdata_rsjunior19; img_rsjunior19.inbufferlength = piclength_rsjunior19; JPEG_Decompress(&img_rsjunior19);
	memset(&img_junior20, 0, sizeof(JPEGIMG)); img_junior20.inbuffer = picdata_junior20; img_junior20.inbufferlength = piclength_junior20; JPEG_Decompress(&img_junior20);
	memset(&img_rsjunior20, 0, sizeof(JPEGIMG)); img_rsjunior20.inbuffer = picdata_rsjunior20; img_rsjunior20.inbufferlength = piclength_rsjunior20; JPEG_Decompress(&img_rsjunior20);

	
	/* setup jump images */
	memset(&img_jump1, 0, sizeof(JPEGIMG)); img_jump1.inbuffer = picdata_jump1; img_jump1.inbufferlength = piclength_jump1; JPEG_Decompress(&img_jump1);
	memset(&img_rsjump1, 0, sizeof(JPEGIMG)); img_rsjump1.inbuffer = picdata_rsjump1; img_rsjump1.inbufferlength = piclength_rsjump1; JPEG_Decompress(&img_rsjump1);
	memset(&img_jump2, 0, sizeof(JPEGIMG)); img_jump2.inbuffer = picdata_jump2; img_jump2.inbufferlength = piclength_jump2; JPEG_Decompress(&img_jump2);
	memset(&img_rsjump2, 0, sizeof(JPEGIMG)); img_rsjump2.inbuffer = picdata_rsjump2; img_rsjump2.inbufferlength = piclength_rsjump2; JPEG_Decompress(&img_rsjump2);
	memset(&img_jump3, 0, sizeof(JPEGIMG)); img_jump3.inbuffer = picdata_jump3; img_jump3.inbufferlength = piclength_jump3; JPEG_Decompress(&img_jump3);
	memset(&img_rsjump3, 0, sizeof(JPEGIMG)); img_rsjump3.inbuffer = picdata_rsjump3; img_rsjump3.inbufferlength = piclength_rsjump3; JPEG_Decompress(&img_rsjump3);
	memset(&img_jump4, 0, sizeof(JPEGIMG)); img_jump4.inbuffer = picdata_jump4; img_jump4.inbufferlength = piclength_jump4; JPEG_Decompress(&img_jump4);
	memset(&img_rsjump4, 0, sizeof(JPEGIMG)); img_rsjump4.inbuffer = picdata_rsjump4; img_rsjump4.inbufferlength = piclength_rsjump4; JPEG_Decompress(&img_rsjump4);
	memset(&img_jump5, 0, sizeof(JPEGIMG)); img_jump5.inbuffer = picdata_jump5; img_jump5.inbufferlength = piclength_jump5; JPEG_Decompress(&img_jump5);
	memset(&img_rsjump5, 0, sizeof(JPEGIMG)); img_rsjump5.inbuffer = picdata_rsjump5; img_rsjump5.inbufferlength = piclength_rsjump5; JPEG_Decompress(&img_rsjump5);

	
	u32 buttonsDown;
	bool display_controls = FALSE;
	bool display_history = FALSE;
	bool play_game = FALSE;
	
	
	while(1) {
	
		/* clear video */
		VIDEO_ClearFrameBuffer (rmode, xfb, COLOR_BLACK);
		
		/* display intro */
		display_jpeg(intro, 0, 0);
		VIDEO_WaitVSync();
		
		/* wait for buttonpress */
		do { 
			usleep(100000);
			
			WPAD_ScanPads();
			buttonsDown = WPAD_ButtonsDown(0);
			
			if(buttonsDown & WPAD_BUTTON_A) { play_game = TRUE; break; }
			if(buttonsDown & WPAD_BUTTON_2) { display_controls = TRUE; break; }
			if(buttonsDown & WPAD_BUTTON_1) { display_history = TRUE; break; }
			
			if(buttonsDown & WPAD_BUTTON_HOME) exit(0);
				
			VIDEO_WaitVSync();
			
		} while ( 1 );
		
		/* display controls screen */
		if( display_controls ) {
			
			/* clear video */
			VIDEO_ClearFrameBuffer (rmode, xfb, COLOR_BLACK);
		
			/* display intro */
			display_jpeg(controls, 0, 0);
			VIDEO_WaitVSync();
			
			/* wait for buttonpress */
			do { 
				usleep(100000);
			
				WPAD_ScanPads();
				buttonsDown = WPAD_ButtonsDown(0);
		
				if(buttonsDown & WPAD_BUTTON_A) break;
			
				VIDEO_WaitVSync();
			
			} while ( 1 );	
			
			display_controls = FALSE;
		}
		
		/* display history screen */
		if( display_history ) {
			
			/* clear video */
			VIDEO_ClearFrameBuffer (rmode, xfb, COLOR_BLACK);
		
			/* display intro */
			display_jpeg(img_history, 0, 0);
			VIDEO_WaitVSync();
			
			/* wait for buttonpress */
			do { 
				usleep(100000);
			
				WPAD_ScanPads();
				buttonsDown = WPAD_ButtonsDown(0);
		
				if(buttonsDown & WPAD_BUTTON_A) break;
			
				VIDEO_WaitVSync();
			
			} while ( 1 );	
			
			display_history = FALSE;
		}
		
		
		/* play game */
		if( play_game ) {
		
			VIDEO_WaitVSync();
			
			int level = 1;
			int score = 0;
			int old_score = 0;
			
			int lives_counter = 3;
			bool collision_detected = FALSE;
			
			int jr_position = 1;
			int jr_old_position = 1;
			bool special = FALSE;
			int special_counter = 0;

			int birds_active = 2;	/* initial number of birds */
			int bird_spacing = 4;	/* initial spacing between birds */
			int bird_index;
			int bird_index2;
			int bird_precount_max;
			int bird_old_position;
			
			int crocs_active = 2;	/* initial number of crocs */
			int croc_spacing = 8;	/* initial spacing between crocs */
			int croc_index;
			int croc_index2;
			int croc_precount_max;
			int croc_old_position;
			
			int key_position = 1;
			int coco_position = 1;
			bool coco_hit1 = FALSE;
			bool coco_hit2 = FALSE;
			bool coco_hit3 = FALSE;
			int cocohit_pause = 200000;
			
			bool enemy_moved = FALSE;
			
			int cage_index;
			
			bool phase = 0; 
			
			int substep_counter = 0;
			int resolution = 5;
			long speed = 450000;
			int blink_counter;
			int blink_timer_hit = 500000;
			
			bool game_over = FALSE;
			
			/* clear video */
			VIDEO_ClearFrameBuffer (rmode, xfb, COLOR_BLACK);
			
			/* display background */
			display_jpeg(background, 0, 0);
			
			
			/* setup initial birds */
			for( bird_index = 0; bird_index < birds_active; bird_index++) {
				bird_precount_max = 0;
				for( bird_index2 = 0; bird_index2 < birds_active; bird_index2++) {
					if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
				}
				bird[bird_index].precount = bird_precount_max + rand() % bird_spacing + 3;
				bird[bird_index].visible = FALSE;
				bird[bird_index].position = 0;
				bird[bird_index].phase = 0;
			}
			
			for( bird_index = birds_active; bird_index <=3; bird_index++) {
				bird[bird_index].visible = FALSE;
				bird[bird_index].position = 0;
				bird[bird_index].phase = 0;
			}
			
			/* setup initial crocs */
			for( croc_index = 0; croc_index < crocs_active; croc_index++) {
				croc_precount_max = 0;
				for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
					if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
				}
				croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
				croc[croc_index].visible = FALSE;
				croc[croc_index].position = 0;
				croc[croc_index].phase = 0;
			}
			
			for( croc_index = crocs_active; croc_index <=5; croc_index++) {
				croc[croc_index].visible = FALSE;
				croc[croc_index].position = 0;
				croc[croc_index].phase = 0;
			}
			
			
			/* display initial junior, cage, coconut, key and score */
			display_jr(1, jr_position);
			
			cage_index = 1;
			display_jpeg(img_cage1, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] );
			
			display_jpeg(img_coco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
			
			display_jpeg(img_key1, key_pos_map[key_position-1][0]/2, key_pos_map[key_position-1][1]);
			
			display_score( score );
			
			/* main game loop */
			while( !game_over ) {
				
				
				if( !special ) {
				
					jr_old_position = jr_position;
				
					/* read controller input */
					WPAD_ScanPads();
					u32 buttonsDown = WPAD_ButtonsDown(0);
				
					/* button up pressed */
					if (buttonsDown & WPAD_BUTTON_RIGHT) { jr_position = jr_pos_map[jr_position][4]; rand(); }
					
					/* button down pressed */
					if (buttonsDown & WPAD_BUTTON_LEFT) { jr_position = jr_pos_map[jr_position][2]; rand(); }
					
					/* button right pressed */
					if (buttonsDown & WPAD_BUTTON_DOWN) { jr_position = jr_pos_map[jr_position][1]; rand(); }
					
					/* button left pressed */
					if ( (buttonsDown & WPAD_BUTTON_UP) && !(buttonsDown & WPAD_BUTTON_2) ){ jr_position = jr_pos_map[jr_position][3]; rand(); }
					
					/* button jump pressed */
					if( (buttonsDown & WPAD_BUTTON_2) && !(buttonsDown & WPAD_BUTTON_UP) ) { jr_position = jr_pos_map[jr_position][0]; rand(); }
					
					/* determine special action needed */
					switch ( jr_position )
					{
						case  4: special = TRUE; special_counter = 0; break;
						case 10: special = TRUE; special_counter = 0; break;
						case 18: special = TRUE; special_counter = 0; break;
						case 20: special = TRUE; special_counter = 0; break;
					}
					
					/* determine jump to key */
					if( (jr_position == 19) && (buttonsDown & WPAD_BUTTON_UP) && (buttonsDown & WPAD_BUTTON_2) ) { 
						
						/* correctly timed jump to key */
						if (key_position == 4) {
							
							/* show jump to key */
							display_jr(0, jr_position);
							display_jpeg(img_jump1, jump_pos_map[0][0]/2 , jump_pos_map[0][1] );
							usleep(700000);
							display_jpeg(img_rskey, key_pos_map[key_position-1][0]/2, key_pos_map[key_position-1][1]);
							display_jpeg(img_rsjump1, jump_pos_map[0][0]/2 , jump_pos_map[0][1] );
							display_jpeg(img_jump2, jump_pos_map[1][0]/2 , jump_pos_map[1][1] );
							usleep(700000);
							
							/* remove part of the cage */
							for(blink_counter=0; blink_counter<3; blink_counter++) {
								
								switch( cage_index ) 
								{
									case 1: display_jpeg(img_cage2, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 2: display_jpeg(img_cage3, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 3: display_jpeg(img_cage4, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 4: display_jpeg(img_cage5, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
								}
								
								/* rumble on */
								WPAD_Rumble(0,1);
								
								if( (blink_counter == 0) || ( (blink_counter == 1) && (cage_index == 4) ) ) {
									old_score = score; score=score+1; update_score(old_score, score);
								}
								else {
									usleep(100000);
								}
									
								/* rumble off */
								WPAD_Rumble(0,0);
								
								if( (blink_counter == 0) || ( (blink_counter == 1) && (cage_index == 4) ) ) {
									old_score = score; score=score+4; update_score(old_score, score);
								}
								else {
									usleep(400000);
								}
								
								switch( cage_index ) 
								{
									case 1: display_jpeg(img_cage1, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 2: display_jpeg(img_cage2, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 3: display_jpeg(img_cage3, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 4: display_jpeg(img_cage4, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
								}
								
								if( (blink_counter == 0) && (cage_index == 4) ) {
									old_score = score; score=score+5; update_score(old_score, score);
								}
								else {
									usleep(500000);
								}
							}	
							
							switch( cage_index ) 
								{
									case 1: display_jpeg(img_cage2, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 2: display_jpeg(img_cage3, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 3: display_jpeg(img_cage4, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
									case 4: display_jpeg(img_cage1, cage_pos_map[cage_index-1][0]/2 , cage_pos_map[cage_index-1][1] ); break;
								}
							
							/* remove junior with key and jump down*/
							display_jpeg(img_rsjump2, jump_pos_map[1][0]/2 , jump_pos_map[1][1] );
							display_jpeg(img_jump3, jump_pos_map[2][0]/2 , jump_pos_map[2][1] );
							usleep(1000000);
							
							display_jpeg(img_rsjump3, jump_pos_map[2][0]/2 , jump_pos_map[2][1] );
							
							cage_index++;
							if( cage_index == 5) {
								cage_index = 1;
								level++;
								
								switch( level )
									{
										case 2: /* level 2: add an additional croc */
											crocs_active = 3;
											
											croc_precount_max = 0;
											for( croc_index2 = 0; croc_index2 < crocs_active-1; croc_index2++) {
												if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
											}
							
											croc[crocs_active-1].precount = croc_precount_max + rand() % croc_spacing + 3;
											croc[crocs_active-1].visible = FALSE;
											croc[crocs_active-1].position = 0;
											croc[crocs_active-1].phase = 0;
											
											break;
										
										case 3: /* level 3: add an additional bird */
											birds_active = 3;
											croc_spacing = 6;
											
											bird_precount_max = 0;
											for( bird_index2 = 0; bird_index2 < birds_active-1; bird_index2++) {
												if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
											}
							
											bird[birds_active-1].precount = bird_precount_max + rand() % bird_spacing + 3;
											bird[birds_active-1].visible = FALSE;
											bird[birds_active-1].position = 0;
											bird[birds_active-1].phase = 0;
											
											break;
											
										case 4: /* level 4: add an additional croc */
											crocs_active = 4;
											
											croc_precount_max = 0;
											for( croc_index2 = 0; croc_index2 < crocs_active-1; croc_index2++) {
												if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
											}
							
											croc[crocs_active-1].precount = croc_precount_max + rand() % croc_spacing + 3;
											croc[crocs_active-1].visible = FALSE;
											croc[crocs_active-1].position = 0;
											croc[crocs_active-1].phase = 0;
											
											break;
											
										case 5: /* level 5: add an additional croc */
											crocs_active = 5;
											croc_spacing = 5;
											
											croc_precount_max = 0;
											for( croc_index2 = 0; croc_index2 < crocs_active-1; croc_index2++) {
												if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
											}
							
											croc[crocs_active-1].precount = croc_precount_max + rand() % croc_spacing + 3;
											croc[crocs_active-1].visible = FALSE;
											croc[crocs_active-1].position = 0;
											croc[crocs_active-1].phase = 0;
											
											break;
											
										case 6:	/* level 6: add an additional bird */
											birds_active = 4;
											bird_spacing = 3;
											
											bird_precount_max = 0;
											for( bird_index2 = 0; bird_index2 < birds_active-1; bird_index2++) {
												if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
											}
							
											bird[birds_active-1].precount = bird_precount_max + rand() % bird_spacing + 3;
											bird[birds_active-1].visible = FALSE;
											bird[birds_active-1].position = 0;
											bird[birds_active-1].phase = 0;
											
											break;
											
										case 7: /* level 7: add an additional croc */
											crocs_active = 6;
											croc_spacing = 4;
											
											croc_precount_max = 0;
											for( croc_index2 = 0; croc_index2 < crocs_active-1; croc_index2++) {
												if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
											}
							
											croc[crocs_active-1].precount = croc_precount_max + rand() % croc_spacing + 3;
											croc[crocs_active-1].visible = FALSE;
											croc[crocs_active-1].position = 0;
											croc[crocs_active-1].phase = 0;
											
											break;
									
									}
							}
							
						}
						
						/* Badly timed jump to key */
						else {
							
							/* play sound */
							ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_wrongjump, sndlength_wrongjump, 255, 255, NULL);
							
							display_jr(0, jr_position);
							display_jpeg(img_jump1, jump_pos_map[0][0]/2 , jump_pos_map[0][1] );
							usleep(850000);
							
							display_jpeg(img_rsjump1, jump_pos_map[0][0]/2 , jump_pos_map[0][1] );
							display_jpeg(img_jump4, jump_pos_map[3][0]/2 , jump_pos_map[3][1] );
							usleep(850000);
							
							display_jpeg(img_rsjump4, jump_pos_map[3][0]/2 , jump_pos_map[3][1] );
							display_jpeg(img_jump5, jump_pos_map[4][0]/2 , jump_pos_map[4][1] );
							
							/* rumble */
							WPAD_Rumble(0,1);
							usleep(150000);
							WPAD_Rumble(0,0);
							usleep(850000);
							
							display_jpeg(img_rsjump5, jump_pos_map[4][0]/2 , jump_pos_map[4][1] );
							
							/* increase fouls */
							lives_counter--;
							if (lives_counter == 2) display_jpeg(img_foul1, foul_pos_map[0][0]/2 , foul_pos_map[0][1] );
							if (lives_counter == 1) display_jpeg(img_foul2, foul_pos_map[1][0]/2 , foul_pos_map[1][1] );
							
							if( lives_counter == 0) {
								display_jpeg(img_foul2, foul_pos_map[2][0]/2 , foul_pos_map[2][1] );
								
								display_jpeg(img_gameover, 250/2 , 208 );
								
								/* wait for buttonpress */
								do { 
									usleep(100000);
			
									WPAD_ScanPads();
									buttonsDown = WPAD_ButtonsDown(0);
							
									if(buttonsDown & WPAD_BUTTON_A) break;
								
									VIDEO_WaitVSync();
								
								} while ( 1 );	
					
								game_over = TRUE;
							}
							
						}
						
						/* reset junior to position 1 */
						display_jr(0, jr_position);
						jr_position = 1; jr_old_position = 1;
						display_jr(1, jr_position);
						
						
						/* reset crocs in positions 10, 11, 12 and 13 */
						for( croc_index = 0; croc_index < crocs_active; croc_index++) {
							if( croc[croc_index].position >= 9 ) {
							
								switch( croc[croc_index].position )
								{
									case 10:
									case 12: display_jpeg(img_rscroc5, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
									case 9:
									case 11: display_jpeg(img_rscroc4, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
								}
							
								croc_precount_max = 0;
								for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
									if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
								}
							
								croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
								croc[croc_index].visible = FALSE;
								croc[croc_index].position = 0;
								croc[croc_index].phase = 0;
							}	
						}
						
						/* reset birds in positions 0 and 1 */
						for( bird_index = 0; bird_index < birds_active; bird_index++) {
							if( bird[bird_index].position <= 1 ) {
							
								switch( bird[bird_index].position )
								{
									case 0: display_jpeg(img_rsbird1, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
									case 1: display_jpeg(img_rsbird2, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
								}
							
								bird_precount_max = 0;
								for( bird_index2 = 0; bird_index2 < birds_active; bird_index2++) {
									if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
								}
							
								bird[bird_index].precount = bird_precount_max + rand() % bird_spacing + 3;
								bird[bird_index].visible = FALSE;
								bird[bird_index].position = 0;
								bird[bird_index].phase = 0;
							}	
						}
						
						/* reset coconut */
						coco_position = 1;
						coco_hit1 = FALSE;
						coco_hit2 = FALSE;
						coco_hit3 = FALSE;
						display_jpeg(img_coco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
						
						collision_detected = FALSE;
						special = FALSE;
						special_counter = 0;
						substep_counter = 0;
						
						/* re-enter the while loop and continue game */
						continue;
					}
					
					/* determine jump into the bushes */
					if( (jr_position == 1) && (jr_old_position == 19) ) { 

						/* play sound */
						ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_wrongjump, sndlength_wrongjump, 255, 255, NULL);

						display_jr(0, jr_old_position);
						display_jpeg(img_jump4, jump_pos_map[3][0]/2 , jump_pos_map[3][1] );
						usleep(1700000);
						
						display_jpeg(img_rsjump4, jump_pos_map[3][0]/2 , jump_pos_map[3][1] );
						display_jpeg(img_jump5, jump_pos_map[4][0]/2 , jump_pos_map[4][1] );
						
						/* rumble */
						WPAD_Rumble(0,1);
						usleep(150000);
						WPAD_Rumble(0,0);
						usleep(850000);
			
						display_jpeg(img_rsjump5, jump_pos_map[4][0]/2 , jump_pos_map[4][1] );

						/* increase fouls */
						lives_counter--;
						if (lives_counter == 2) display_jpeg(img_foul1, foul_pos_map[0][0]/2 , foul_pos_map[0][1] );
						if (lives_counter == 1) display_jpeg(img_foul2, foul_pos_map[1][0]/2 , foul_pos_map[1][1] );
							
						if( lives_counter == 0) {
							display_jpeg(img_foul2, foul_pos_map[2][0]/2 , foul_pos_map[2][1] );
						
							display_jpeg(img_gameover, 250/2 , 208 );
							
							/* wait for buttonpress */
							do { 
								usleep(100000);
		
								WPAD_ScanPads();
								buttonsDown = WPAD_ButtonsDown(0);
						
								if(buttonsDown & WPAD_BUTTON_A) break;
							
								VIDEO_WaitVSync();
							
							} while ( 1 );	
				
							game_over = TRUE;
						}
					
						/* reset junior to position 1 */
						display_jr(0, jr_old_position);
						jr_position = 1; jr_old_position = 1;
						display_jr(1, jr_position);
						
						
						/* reset crocs in positions 10, 11, 12 and 13 */
						for( croc_index = 0; croc_index < crocs_active; croc_index++) {
							if( croc[croc_index].position >= 9 ) {
							
								switch( croc[croc_index].position )
								{
									case 10:
									case 12: display_jpeg(img_rscroc5, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
									case 9:
									case 11: display_jpeg(img_rscroc4, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
								}
								
								croc_precount_max = 0;
								for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
									if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
								}
								croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
								croc[croc_index].visible = FALSE;
								croc[croc_index].position = 0;
								croc[croc_index].phase = 0;
							}	
						}
						
						/* reset birds in positions 0 and 1 */
						for( bird_index = 0; bird_index < birds_active; bird_index++) {
							if( bird[bird_index].position <= 1 ) {
							
								switch( bird[bird_index].position )
								{
									case 0: display_jpeg(img_rsbird1, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
									case 1: display_jpeg(img_rsbird2, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
								}
							
								bird_precount_max = 0;
								for( bird_index2 = 0; bird_index2 < birds_active; bird_index2++) {
									if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
								}
							
								bird[bird_index].precount = bird_precount_max + rand() % bird_spacing + 3;
								bird[bird_index].visible = FALSE;
								bird[bird_index].position = 0;
								bird[bird_index].phase = 0;
							}	
						}
						
						/* reset coconut */
						coco_position = 1;
						coco_hit1 = FALSE;
						coco_hit2 = FALSE;
						coco_hit3 = FALSE;
						display_jpeg(img_coco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
						
						collision_detected = FALSE;
						special = FALSE;
						special_counter = 0;
						substep_counter = 0;
						
						/* re-enter the while loop and continue game */
						continue;
					}
					
					/* detect collision with birds */
					for( bird_index = 0; bird_index < birds_active; bird_index++) {
						if ( bird[bird_index].visible == TRUE) {
						
							if ( jr_old_position < jr_position) {
								if ( (jr_old_position < bird_pos_map[bird[bird_index].position][0]) && (jr_position > bird_pos_map[bird[bird_index].position][0]) ) {
									collision_detected = TRUE;
								}
							}
							else {
								if ( (jr_old_position > bird_pos_map[bird[bird_index].position][0]) && (jr_position < bird_pos_map[bird[bird_index].position][0]) ) {
									collision_detected = TRUE;
								}
							}
						}
					}
					
					/* detect collision with crocs */
					for( croc_index = 0; croc_index < crocs_active; croc_index++) {
						if ( croc[croc_index].visible == TRUE) {
						
							if ( jr_old_position < jr_position) {
								if ( (jr_old_position < croc_pos_map[croc[croc_index].position][0]) && (jr_position > croc_pos_map[croc[croc_index].position][0]) ) {
									collision_detected = TRUE;
								}
							}
							else {
								if ( (jr_old_position > croc_pos_map[croc[croc_index].position][0]) && (jr_position < croc_pos_map[croc[croc_index].position][0]) ) {
									collision_detected = TRUE;
								}
							}
						}
					}
					
					/* handle collision */
					if( collision_detected == TRUE ) {
					
						/* play sound */
						ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_collision, sndlength_collision, 255, 255, NULL);
					
						/* blink jr */
						for(blink_counter=0; blink_counter<3; blink_counter++) {
								display_jr(0, jr_old_position);
								
								/* rumble */
								WPAD_Rumble(0,1);
								usleep( 150000 );
								WPAD_Rumble(0,0);
								usleep( 350000 );
								
								display_jr(1, jr_old_position);
								
								usleep( blink_timer_hit );
							}
							
						/* increase fouls */
						lives_counter--;
						if (lives_counter == 2) display_jpeg(img_foul1, foul_pos_map[0][0]/2 , foul_pos_map[0][1] );
						if (lives_counter == 1) display_jpeg(img_foul2, foul_pos_map[1][0]/2 , foul_pos_map[1][1] );
							
						if( lives_counter == 0) {
							display_jpeg(img_foul2, foul_pos_map[2][0]/2 , foul_pos_map[2][1] );
						
							display_jpeg(img_gameover, 250/2 , 208 );
							
							/* wait for buttonpress */
							do { 
								usleep(100000);
		
								WPAD_ScanPads();
								buttonsDown = WPAD_ButtonsDown(0);
						
								if(buttonsDown & WPAD_BUTTON_A) break;
							
								VIDEO_WaitVSync();
							
							} while ( 1 );	
				
							game_over = TRUE;
						}
					
						/* reset junior to position 1 */
						display_jr(0, jr_old_position);
						jr_position = 1; jr_old_position = 1;
						display_jr(1, jr_position);
						
						
						/* reset crocs in positions 10, 11, 12 and 13 */
						for( croc_index = 0; croc_index < crocs_active; croc_index++) {
							if( croc[croc_index].position >= 9 ) {
							
								switch( croc[croc_index].position )
								{
									case 10:
									case 12: display_jpeg(img_rscroc5, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
									case 9:
									case 11: display_jpeg(img_rscroc4, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
								}								
								
								croc_precount_max = 0;
								for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
									if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
								}
								croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
								croc[croc_index].visible = FALSE;
								croc[croc_index].position = 0;
								croc[croc_index].phase = 0;
							}	
						}
						
						/* reset birds in positions 0 and 1 */
						for( bird_index = 0; bird_index < birds_active; bird_index++) {
							if( bird[bird_index].position <= 1 ) {
							
								switch( bird[bird_index].position )
								{
									case 0: display_jpeg(img_rsbird1, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
									case 1: display_jpeg(img_rsbird2, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
								}
							
								bird_precount_max = 0;
								for( bird_index2 = 0; bird_index2 < birds_active; bird_index2++) {
									if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
								}
							
								bird[bird_index].precount = bird_precount_max + rand() % bird_spacing + 3;
								bird[bird_index].visible = FALSE;
								bird[bird_index].position = 0;
								bird[bird_index].phase = 0;
							}	
						}
						
						/* reset coconut */
						coco_position = 1;
						coco_hit1 = FALSE;
						coco_hit2 = FALSE;
						coco_hit3 = FALSE;
						display_jpeg(img_coco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
						
						collision_detected = FALSE;
						special = FALSE;
						special_counter = 0;
						substep_counter = 0;
						
						/* re-enter the while loop and continue game */
						continue;
					}
					
				}	
				
				else {
					
					jr_old_position = jr_position;
					
					/* handle special action */
					switch ( jr_position )
					{
						/* position 4: float in the air and fall again */
						case 4 :
							if ( special_counter < 2 * resolution ) {
								special_counter++;
							}
							else {
								display_jr(0, jr_position);
								special = FALSE; jr_position = 3;
								display_jr(1, jr_position);
							}
							break;
						
						/* position 10: float in the air and fall again */
						case 10 :
							if ( special_counter < 2 * resolution ) {
								special_counter++;
							}
							else {
								display_jr(0, jr_position);
								special = FALSE; jr_position = 9;
								display_jr(1, jr_position);
							}
							break;
						
						/* position 18: drop coconut if existent else float in the air and fall again */
						case 18 :
							if ( special_counter <= 2 * resolution + 3 ) {
								
								/* drop coconut phase 1 */
								if ( ( coco_position == 1 ) && (special_counter == 0 ) ) {
									display_jpeg(img_rscoco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
									coco_position++;
									display_jpeg(img_coco2, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);	
								}
								
								/* determine coconut hit croc upper level */
								if ( ( coco_position == 2 ) && (special_counter < resolution ) && (coco_hit1 == FALSE)) {
									for( croc_index = 0; croc_index < crocs_active; croc_index++) {
										if ( croc_pos_map[croc[croc_index].position][0] == 18 ) {
																	
											coco_hit1 = TRUE;
											
											/* rumble */
											WPAD_Rumble(0,1);
											usleep( cocohit_pause );
											WPAD_Rumble(0,0);
											
											/* update score */
											old_score = score; score=score+3; update_score(old_score, score);
											
											/* reset hit croc */
											display_jpeg(img_rscroc2, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );
											croc_precount_max = 0;
											for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
												if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
											}
											croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
											croc[croc_index].visible = FALSE;
											croc[croc_index].position = 0;
											croc[croc_index].phase = 0;			
										}
									}
								}
								
								/* drop coconut phase 2 */
								if ( ( coco_position == 2 ) && (special_counter == resolution ) ) {
									display_jpeg(img_rscoco2, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
									coco_position++;
									display_jpeg(img_coco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);	
								}
								
								/* determine coconut hit bird */
								if ( ( coco_position == 3 ) && (special_counter < 2* resolution ) && (coco_hit2 == FALSE)) {
									for( bird_index = 0; bird_index < birds_active; bird_index++) {
										if ( bird_pos_map[bird[bird_index].position][0] == 7 ) {
											
											coco_hit2 = TRUE;
											
											/* rumble */
											WPAD_Rumble(0,1);
											usleep( cocohit_pause );
											WPAD_Rumble(0,0);
											
											/* update score */
											old_score = score; score=score+3; update_score(old_score, score);
											
											/* reset hit bird */
											display_jpeg(img_rsbird3, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] );
											bird_precount_max = 0;
											for( bird_index2 = 0; bird_index2 < birds_active; bird_index2++) {
												if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
											}
											bird[bird_index].precount = bird_precount_max + rand() % bird_spacing + 3;
											bird[bird_index].visible = FALSE;
											bird[bird_index].position = 0;
											bird[bird_index].phase = 0;		
										}
									}
								}	
								
								/* drop coconut phase 3 */
								if ( ( coco_position == 3 ) && (special_counter == 2 * resolution ) ) {
									display_jpeg(img_rscoco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
									coco_position++;
									display_jpeg(img_coco2, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);	
								}
								
								/* determine coconut hit croc lower level */
								if ( ( coco_position == 4 ) && (special_counter < 2* resolution + 3 ) && (coco_hit3 == FALSE)) {
									for( croc_index = 0; croc_index < crocs_active; croc_index++) {
										if ( croc_pos_map[croc[croc_index].position][0] == 6 ) {
											
											coco_hit3 = TRUE;
											
											/* rumble */
											WPAD_Rumble(0,1);
											usleep( cocohit_pause );
											WPAD_Rumble(0,0);
											
											/* update score */
											old_score = score; score=score+3; update_score(old_score, score);
											
											/* reset hit croc */
											display_jpeg(img_rscroc4, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );
											croc_precount_max = 0;
											for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
												if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
											}
											croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
											croc[croc_index].visible = FALSE;
											croc[croc_index].position = 0;
											croc[croc_index].phase = 0;		
										}
									}
								}
								
								/* drop coconut phase 4: reset coconut */
								if ( ( coco_position == 4 ) && (special_counter == 2 * resolution + 3 ) ) {
									display_jpeg(img_rscoco2, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
									coco_position = 5;
								}
								
								special_counter++;
							}
							else {
								display_jr(0, jr_position);
								special = FALSE; jr_position = 17;
								display_jr(1, jr_position);
							}
							break;
							
						/* position 20: float in the air and fall again */
						case 20 :
							if ( special_counter < 2 * resolution ) {
								special_counter++;
							}
							else {
								display_jr(0, jr_position);
								special = FALSE; jr_position = 19;
								display_jr(1, jr_position);
							}
							break;
					}	
				}
				
				
				/* redraw junior */
				if ( jr_position != jr_old_position ) {
					display_jr(0, jr_old_position);
					display_jr(1, jr_position);
					
					/* play sound */
					ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_movejunior, sndlength_movejunior, 255, 255, NULL);
				}
				
				/* control speed */
				usleep( speed / resolution );
				
				substep_counter++;
				
				if ( substep_counter == resolution ) {
				
					enemy_moved = FALSE;
				
					/* move birds */
					for( bird_index = 0; bird_index < birds_active; bird_index++) {
						
						/* move invisible birds in pre queue */
						if ( bird[bird_index].precount > 1 ) {
							bird[bird_index].precount--;
						}
						else {
							
							/* display bird if it leaves the pre queue */
							if ( bird[bird_index].precount == 1) {
								bird[bird_index].precount--;
								bird[bird_index].visible = TRUE;
								bird[bird_index].phase = phase;
								bird[bird_index].position = 0;
								display_jpeg(img_bird1, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] );
							}
							else {
						
								/* move visible bird */
								if( bird[bird_index].phase == phase) {				
									
									if( enemy_moved == FALSE) {
										enemy_moved = TRUE;
										
										/* play sound */
										ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_moveenemy, sndlength_moveenemy, 255, 255, NULL);
									}
									
									bird_old_position = bird[bird_index].position;
									bird[bird_index].position++; 
							
									/* detect collision */
									if( (bird[bird_index].position != 8) && (jr_position < bird_pos_map[bird[bird_index].position][0]) && (jr_position > bird_pos_map[bird[bird_index].position-1][0]) ) {
										collision_detected = TRUE;
										bird[bird_index].position = bird_old_position;
									}
									
									else {
							
										/* place bird back in pre queue */
										if( bird[bird_index].position == 8 ) {
											display_jpeg(img_rsbird4, bird_pos_map[bird_old_position][1]/2 , bird_pos_map[bird_old_position][2] );
											bird[bird_index].visible = FALSE;
											bird_precount_max = 0;
											for( bird_index2 = 0; bird_index2 < birds_active; bird_index2++) {
												if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
											}
											bird[bird_index].precount = bird_precount_max + rand() % bird_spacing + 3;
										}
										
										/* display bird in new position */
										else {
											switch( bird[bird_index].position )
											{	
												case 1:
													display_jpeg(img_rsbird1, bird_pos_map[bird_old_position][1]/2 , bird_pos_map[bird_old_position][2] );
													display_jpeg(img_bird2, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] );											
													break;
													
												case 2:
													display_jpeg(img_rsbird2, bird_pos_map[bird_old_position][1]/2 , bird_pos_map[bird_old_position][2] );
													display_jpeg(img_bird3, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] );											
													break;
												
												case 4:
												case 6:
													display_jpeg(img_rsbird4, bird_pos_map[bird_old_position][1]/2 , bird_pos_map[bird_old_position][2] );
													display_jpeg(img_bird3, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] );											
													break;
												
												case 3:
												case 5:
												case 7:
													display_jpeg(img_rsbird3, bird_pos_map[bird_old_position][1]/2 , bird_pos_map[bird_old_position][2] );
													display_jpeg(img_bird4, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] );											
													break;
											}	
										}
									}
								}
							}
						}
					}
				
					/* move crocs */
					for( croc_index = 0; croc_index < crocs_active; croc_index++) {
						
						/* move invisible crocs in pre queue */
						if ( croc[croc_index].precount > 1 ) {
							croc[croc_index].precount--;
						}
						else {
							
							/* display croc if it leaves the pre queue */
							if ( croc[croc_index].precount == 1) {
								croc[croc_index].precount--;
								croc[croc_index].visible = TRUE;
								croc[croc_index].phase = phase;
								croc[croc_index].position = 0;
								display_jpeg(img_croc2, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );
							}
							
							else {
						
								/* move visible croc */
								if( croc[croc_index].phase == phase) {				
									
									if( enemy_moved == FALSE) {
										enemy_moved = TRUE;
										
										/* play sound */
										ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_moveenemy, sndlength_moveenemy, 255, 255, NULL);
									}
									
									croc_old_position = croc[croc_index].position;
									croc[croc_index].position++; 
							
									/* detect collision */
									if( (croc[croc_index].position != 13) && (jr_position > croc_pos_map[croc[croc_index].position][0]) && (jr_position < croc_pos_map[croc[croc_index].position-1][0]) ) {
										collision_detected = TRUE;
										croc[croc_index].position = croc_old_position;
									}
							
									else {
									
										/* increase score if junior jumped over croc */
										if( (croc_pos_map[croc[croc_index].position][0] == 2 ) && ( jr_position == 4 ) ) {
											old_score = score; score=score+1; update_score(old_score, score);
										} 
										if( (croc_pos_map[croc[croc_index].position][0] == 8 ) && ( jr_position == 10 ) ) {
											old_score = score; score=score+1; update_score(old_score, score);
										}
										if( (croc_pos_map[croc[croc_index].position][0] == 16 ) && ( jr_position == 18 ) ) {
											old_score = score; score=score+1; update_score(old_score, score);
										}
										if( (croc_pos_map[croc[croc_index].position][0] == 18 ) && ( jr_position == 20 ) ) {
											old_score = score; score=score+1; update_score(old_score, score);
										}
									
										/* place croc back in pre queue */
										if( croc[croc_index].position == 13 ) {
											display_jpeg(img_rscroc5, croc_pos_map[croc_old_position][1]/2 , croc_pos_map[croc_old_position][2] );
											croc[croc_index].visible = FALSE;
											croc_precount_max = 0;
											for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
												if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
											}
											croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
										}
										
										/* display croc in new position */
										else {
											switch( croc[croc_index].position )
											{	
												case 1:
												case 3:
													display_jpeg(img_rscroc2, croc_pos_map[croc_old_position][1]/2 , croc_pos_map[croc_old_position][2] );
													display_jpeg(img_croc1, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );											
													break;
													
												case 2:
												case 4:
													display_jpeg(img_rscroc1, croc_pos_map[croc_old_position][1]/2 , croc_pos_map[croc_old_position][2] );
													display_jpeg(img_croc2, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );											
													break;
													
												case 5:
													display_jpeg(img_rscroc2, croc_pos_map[croc_old_position][1]/2 , croc_pos_map[croc_old_position][2] );
													display_jpeg(img_croc3, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );											
													break;
													
												case 6:
													display_jpeg(img_rscroc3, croc_pos_map[croc_old_position][1]/2 , croc_pos_map[croc_old_position][2] );
													display_jpeg(img_croc5, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );											
													break;
													
												case 7:
												case 9:
												case 11:
													display_jpeg(img_rscroc5, croc_pos_map[croc_old_position][1]/2 , croc_pos_map[croc_old_position][2] );
													display_jpeg(img_croc4, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );											
													break;
													
												case 8:
												case 10:
												case 12:
													display_jpeg(img_rscroc4, croc_pos_map[croc_old_position][1]/2 , croc_pos_map[croc_old_position][2] );
													display_jpeg(img_croc5, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] );											
													break;
											}
										}
									}
								}
							}
						}
					}
					
					/* handle collision */
					if( collision_detected == TRUE ) {
					
						/* play sound */
						ASND_SetVoice(ASND_GetFirstUnusedVoice(), VOICE_STEREO_16BIT, 32000, 0, snddata_collision, sndlength_collision, 255, 255, NULL);
					
						/* blink jr */
						for(blink_counter=0; blink_counter<3; blink_counter++) {
								display_jr(0, jr_position);
								
								/* rumble */
								WPAD_Rumble(0,1);
								usleep( 150000 );
								WPAD_Rumble(0,0);
								usleep( 350000 );
								
								display_jr(1, jr_position);
								
								usleep( blink_timer_hit );
							}	
						
						/* increase fouls */
						lives_counter--;
						if (lives_counter == 2) display_jpeg(img_foul1, foul_pos_map[0][0]/2 , foul_pos_map[0][1] );
						if (lives_counter == 1) display_jpeg(img_foul2, foul_pos_map[1][0]/2 , foul_pos_map[1][1] );
							
						if( lives_counter == 0) {
							display_jpeg(img_foul2, foul_pos_map[2][0]/2 , foul_pos_map[2][1] );
								
							display_jpeg(img_gameover, 250/2 , 208 );
								
							/* wait for buttonpress */
							do { 
								usleep(100000);
		
								WPAD_ScanPads();
								buttonsDown = WPAD_ButtonsDown(0);
						
								if(buttonsDown & WPAD_BUTTON_A) break;
							
								VIDEO_WaitVSync();
							
							} while ( 1 );	
				
							game_over = TRUE;
						}
					
						/* reset junior to position 1 */
						display_jr(0, jr_position);
						jr_position = 1; jr_old_position = 1;
						display_jr(1, jr_position);
						
						
						/* reset crocs in positions 10, 11, 12 and 13 */
						for( croc_index = 0; croc_index < crocs_active; croc_index++) {
							if( croc[croc_index].position >= 9 ) {
							
								switch( croc[croc_index].position )
								{
									case 10:
									case 12: display_jpeg(img_rscroc5, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
									case 9:
									case 11: display_jpeg(img_rscroc4, croc_pos_map[croc[croc_index].position][1]/2 , croc_pos_map[croc[croc_index].position][2] ); break;
								}
								
								croc_precount_max = 0;
								for( croc_index2 = 0; croc_index2 < crocs_active; croc_index2++) {
									if(croc[croc_index2].precount > croc_precount_max) croc_precount_max = croc[croc_index2].precount;
								}
								croc[croc_index].precount = croc_precount_max + rand() % croc_spacing + 3;
								croc[croc_index].visible = FALSE;
								croc[croc_index].position = 0;
								croc[croc_index].phase = 0;
							}	
						}
						
						/* reset birds in positions 0 and 1 */
						for( bird_index = 0; bird_index < birds_active; bird_index++) {
							if( bird[bird_index].position <= 1 ) {
							
								switch( bird[bird_index].position )
								{
									case 0: display_jpeg(img_rsbird1, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
									case 1: display_jpeg(img_rsbird2, bird_pos_map[bird[bird_index].position][1]/2 , bird_pos_map[bird[bird_index].position][2] ); break;
								}
							
								bird_precount_max = 0;
								for( bird_index2 = 0; bird_index2 < birds_active; bird_index2++) {
									if(bird[bird_index2].precount > bird_precount_max) bird_precount_max = bird[bird_index2].precount;
								}
							
								bird[bird_index].precount = bird_precount_max + rand() % bird_spacing + 3;
								bird[bird_index].visible = FALSE;
								bird[bird_index].position = 0;
								bird[bird_index].phase = 0;
							}	
						}
						
						/* reset coconut */
						coco_position = 1;
						coco_hit1 = FALSE;
						coco_hit2 = FALSE;
						coco_hit3 = FALSE;
						display_jpeg(img_coco1, coco_pos_map[coco_position-1][0]/2, coco_pos_map[coco_position-1][1]);
						
						collision_detected = FALSE;
						special = FALSE;
						special_counter = 0;
						substep_counter = 0;
						
						/* re-enter the while loop and continue game */
						continue;
					}
					
				
					/* move key */	
					key_position++;
					if (key_position == 8) key_position = 1;
					
					if ( (key_position == 1) || (key_position == 7) ) display_jpeg(img_key1, key_pos_map[key_position-1][0]/2, key_pos_map[key_position-1][1]);
					if ( (key_position == 2) || (key_position == 6) ) display_jpeg(img_key2, key_pos_map[key_position-1][0]/2, key_pos_map[key_position-1][1]);
					if ( (key_position == 3) || (key_position == 5) ) display_jpeg(img_key3, key_pos_map[key_position-1][0]/2, key_pos_map[key_position-1][1]);
					if (key_position == 4) display_jpeg(img_key4, key_pos_map[key_position-1][0]/2, key_pos_map[key_position-1][1]);
					
					/* toggle phase */
					phase = !phase;
					substep_counter = 0;
					
				}
				
				VIDEO_WaitVSync();
				
			}
			
		play_game = FALSE;
		
		}
	
	}
	
	return 0;
}
