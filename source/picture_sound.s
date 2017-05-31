.rodata
.balign 32

//
// game loading screen
//

.globl piclength_load
.globl picdata_load

piclength_load: .long	picdata_load_end - picdata_load
picdata_load:
.incbin "../include/loading.jpg"
picdata_load_end:

.globl piclength_loadmsg
.globl picdata_loadmsg

piclength_loadmsg: .long	picdata_loadmsg_end - picdata_loadmsg
picdata_loadmsg:
.incbin "../include/loading_msg.jpg"
picdata_loadmsg_end:

.globl piclength_loadrsmsg
.globl picdata_loadrsmsg

piclength_loadrsmsg: .long	picdata_loadrsmsg_end - picdata_loadrsmsg
picdata_loadrsmsg:
.incbin "../include/rsloading_msg.jpg"
picdata_loadrsmsg_end:

//
// game intro screen
//

.globl piclength_intro
.globl picdata_intro

piclength_intro:	.long	picdata_intro_end - picdata_intro
picdata_intro:
.incbin "../include/intro.jpg"
picdata_intro_end:

//
// game controls screen
//

.globl piclength_controls
.globl picdata_controls

piclength_controls:	.long	picdata_controls_end - picdata_controls
picdata_controls:
.incbin "../include/controls.jpg"
picdata_controls_end:

//
// game history screen
//

.globl piclength_history
.globl picdata_history

piclength_history: .long	picdata_history_end - picdata_history
picdata_history:
.incbin "../include/history.jpg"
picdata_history_end:

//
// game background
//

.globl piclength_background
.globl picdata_background

piclength_background:	.long	picdata_background_end - picdata_background
picdata_background:
.incbin "../include/background.jpg"
picdata_background_end:

//
// foul images and gameover image
//

.globl piclength_foul1
.globl picdata_foul1

piclength_foul1: .long	picdata_foul1_end - picdata_foul1
picdata_foul1:
.incbin "../include/foul1.jpg"
picdata_foul1_end:

.globl piclength_foul2
.globl picdata_foul2

piclength_foul2: .long	picdata_foul2_end - picdata_foul2
picdata_foul2:
.incbin "../include/foul2.jpg"
picdata_foul2_end:

.globl piclength_gameover
.globl picdata_gameover

piclength_gameover: .long	picdata_gameover_end - picdata_gameover
picdata_gameover:
.incbin "../include/gameover.jpg"
picdata_gameover_end:

//
// key images
//

.globl piclength_key1
.globl picdata_key1

piclength_key1: .long	picdata_key1_end - picdata_key1
picdata_key1:
.incbin "../include/key1.jpg"
picdata_key1_end:

.globl piclength_key2
.globl picdata_key2

piclength_key2: .long	picdata_key2_end - picdata_key2
picdata_key2:
.incbin "../include/key2.jpg"
picdata_key2_end:

.globl piclength_key3
.globl picdata_key3

piclength_key3: .long	picdata_key3_end - picdata_key3
picdata_key3:
.incbin "../include/key3.jpg"
picdata_key3_end:

.globl piclength_key4
.globl picdata_key4

piclength_key4: .long	picdata_key4_end - picdata_key4
picdata_key4:
.incbin "../include/key4.jpg"
picdata_key4_end:

.globl piclength_rskey
.globl picdata_rskey

piclength_rskey: .long	picdata_rskey_end - picdata_rskey
picdata_rskey:
.incbin "../include/rskey.jpg"
picdata_rskey_end:

//
// cage images
//

.globl piclength_cage1
.globl picdata_cage1

piclength_cage1: .long	picdata_cage1_end - picdata_cage1
picdata_cage1:
.incbin "../include/cage1.jpg"
picdata_cage1_end:

.globl piclength_cage2
.globl picdata_cage2

piclength_cage2: .long	picdata_cage2_end - picdata_cage2
picdata_cage2:
.incbin "../include/cage2.jpg"
picdata_cage2_end:

.globl piclength_cage3
.globl picdata_cage3

piclength_cage3: .long	picdata_cage3_end - picdata_cage3
picdata_cage3:
.incbin "../include/cage3.jpg"
picdata_cage3_end:

.globl piclength_cage4
.globl picdata_cage4

piclength_cage4: .long	picdata_cage4_end - picdata_cage4
picdata_cage4:
.incbin "../include/cage4.jpg"
picdata_cage4_end:

.globl piclength_cage5
.globl picdata_cage5

piclength_cage5: .long	picdata_cage5_end - picdata_cage5
picdata_cage5:
.incbin "../include/cage5.jpg"
picdata_cage5_end:

//
// bird images
//

.globl piclength_bird1
.globl picdata_bird1

piclength_bird1: .long	picdata_bird1_end - picdata_bird1
picdata_bird1:
.incbin "../include/bird1.jpg"
picdata_bird1_end:

.globl piclength_bird2
.globl picdata_bird2

piclength_bird2: .long	picdata_bird2_end - picdata_bird2
picdata_bird2:
.incbin "../include/bird2.jpg"
picdata_bird2_end:

.globl piclength_bird3
.globl picdata_bird3

piclength_bird3: .long	picdata_bird3_end - picdata_bird3
picdata_bird3:
.incbin "../include/bird3.jpg"
picdata_bird3_end:

.globl piclength_bird4
.globl picdata_bird4

piclength_bird4: .long	picdata_bird4_end - picdata_bird4
picdata_bird4:
.incbin "../include/bird4.jpg"
picdata_bird4_end:

.globl piclength_rsbird1
.globl picdata_rsbird1

piclength_rsbird1: .long	picdata_rsbird1_end - picdata_rsbird1
picdata_rsbird1:
.incbin "../include/rsbird1.jpg"
picdata_rsbird1_end:

.globl piclength_rsbird2
.globl picdata_rsbird2

piclength_rsbird2: .long	picdata_rsbird2_end - picdata_rsbird2
picdata_rsbird2:
.incbin "../include/rsbird2.jpg"
picdata_rsbird2_end:

.globl piclength_rsbird3
.globl picdata_rsbird3

piclength_rsbird3: .long	picdata_rsbird3_end - picdata_rsbird3
picdata_rsbird3:
.incbin "../include/rsbird3.jpg"
picdata_rsbird3_end:

.globl piclength_rsbird4
.globl picdata_rsbird4

piclength_rsbird4: .long	picdata_rsbird4_end - picdata_rsbird4
picdata_rsbird4:
.incbin "../include/rsbird4.jpg"
picdata_rsbird4_end:

//
// croc images
//

.globl piclength_croc1
.globl picdata_croc1

piclength_croc1: .long	picdata_croc1_end - picdata_croc1
picdata_croc1:
.incbin "../include/croc1.jpg"
picdata_croc1_end:

.globl piclength_croc2
.globl picdata_croc2

piclength_croc2: .long	picdata_croc2_end - picdata_croc2
picdata_croc2:
.incbin "../include/croc2.jpg"
picdata_croc2_end:

.globl piclength_croc3
.globl picdata_croc3

piclength_croc3: .long	picdata_croc3_end - picdata_croc3
picdata_croc3:
.incbin "../include/croc3.jpg"
picdata_croc3_end:

.globl piclength_croc4
.globl picdata_croc4

piclength_croc4: .long	picdata_croc4_end - picdata_croc4
picdata_croc4:
.incbin "../include/croc4.jpg"
picdata_croc4_end:

.globl piclength_croc5
.globl picdata_croc5

piclength_croc5: .long	picdata_croc5_end - picdata_croc5
picdata_croc5:
.incbin "../include/croc5.jpg"
picdata_croc5_end:

.globl piclength_rscroc1
.globl picdata_rscroc1

piclength_rscroc1: .long	picdata_rscroc1_end - picdata_rscroc1
picdata_rscroc1:
.incbin "../include/rscroc1.jpg"
picdata_rscroc1_end:

.globl piclength_rscroc2
.globl picdata_rscroc2

piclength_rscroc2: .long	picdata_rscroc2_end - picdata_rscroc2
picdata_rscroc2:
.incbin "../include/rscroc2.jpg"
picdata_rscroc2_end:

.globl piclength_rscroc3
.globl picdata_rscroc3

piclength_rscroc3: .long	picdata_rscroc3_end - picdata_rscroc3
picdata_rscroc3:
.incbin "../include/rscroc3.jpg"
picdata_rscroc3_end:

.globl piclength_rscroc4
.globl picdata_rscroc4

piclength_rscroc4: .long	picdata_rscroc4_end - picdata_rscroc4
picdata_rscroc4:
.incbin "../include/rscroc4.jpg"
picdata_rscroc4_end:

.globl piclength_rscroc5
.globl picdata_rscroc5

piclength_rscroc5: .long	picdata_rscroc5_end - picdata_rscroc5
picdata_rscroc5:
.incbin "../include/rscroc5.jpg"
picdata_rscroc5_end:

//
// coconut images
//

.globl piclength_coco1
.globl picdata_coco1

piclength_coco1:	.long	picdata_coco1_end - picdata_coco1
picdata_coco1:
.incbin "../include/coco1.jpg"
picdata_coco1_end:

.globl piclength_rscoco1
.globl picdata_rscoco1

piclength_rscoco1:	.long	picdata_rscoco1_end - picdata_rscoco1
picdata_rscoco1:
.incbin "../include/rscoco1.jpg"
picdata_rscoco1_end:

.globl piclength_coco2
.globl picdata_coco2

piclength_coco2:	.long	picdata_coco2_end - picdata_coco2
picdata_coco2:
.incbin "../include/coco2.jpg"
picdata_coco2_end:

.globl piclength_rscoco2
.globl picdata_rscoco2

piclength_rscoco2:	.long	picdata_rscoco2_end - picdata_rscoco2
picdata_rscoco2:
.incbin "../include/rscoco2.jpg"
picdata_rscoco2_end:

//
// score images
//

.globl piclength_score0
.globl picdata_score0

piclength_score0:	.long	picdata_score0_end - picdata_score0
picdata_score0:
.incbin "../include/score0.jpg"
picdata_score0_end:

.globl piclength_score1
.globl picdata_score1

piclength_score1:	.long	picdata_score1_end - picdata_score1
picdata_score1:
.incbin "../include/score1.jpg"
picdata_score1_end:

.globl piclength_score2
.globl picdata_score2

piclength_score2:	.long	picdata_score2_end - picdata_score2
picdata_score2:
.incbin "../include/score2.jpg"
picdata_score2_end:

.globl piclength_score3
.globl picdata_score3

piclength_score3:	.long	picdata_score3_end - picdata_score3
picdata_score3:
.incbin "../include/score3.jpg"
picdata_score3_end:

.globl piclength_score4
.globl picdata_score4

piclength_score4:	.long	picdata_score4_end - picdata_score4
picdata_score4:
.incbin "../include/score4.jpg"
picdata_score4_end:

.globl piclength_score5
.globl picdata_score5

piclength_score5:	.long	picdata_score5_end - picdata_score5
picdata_score5:
.incbin "../include/score5.jpg"
picdata_score5_end:

.globl piclength_score6
.globl picdata_score6

piclength_score6:	.long	picdata_score6_end - picdata_score6
picdata_score6:
.incbin "../include/score6.jpg"
picdata_score6_end:

.globl piclength_score7
.globl picdata_score7

piclength_score7:	.long	picdata_score7_end - picdata_score7
picdata_score7:
.incbin "../include/score7.jpg"
picdata_score7_end:

.globl piclength_score8
.globl picdata_score8

piclength_score8:	.long	picdata_score8_end - picdata_score8
picdata_score8:
.incbin "../include/score8.jpg"
picdata_score8_end:

.globl piclength_score9
.globl picdata_score9

piclength_score9:	.long	picdata_score9_end - picdata_score9
picdata_score9:
.incbin "../include/score9.jpg"
picdata_score9_end:

//
// Junior images
//

.globl piclength_junior1
.globl picdata_junior1

piclength_junior1:	.long	picdata_junior1_end - picdata_junior1
picdata_junior1:
.incbin "../include/junior1.jpg"
picdata_junior1_end:

.globl piclength_rsjunior1
.globl picdata_rsjunior1

piclength_rsjunior1:	.long	picdata_rsjunior1_end - picdata_rsjunior1
picdata_rsjunior1:
.incbin "../include/rsjunior1.jpg"
picdata_rsjunior1_end:

.globl piclength_junior2
.globl picdata_junior2

piclength_junior2:	.long	picdata_junior2_end - picdata_junior2
picdata_junior2:
.incbin "../include/junior2.jpg"
picdata_junior2_end:

.globl piclength_rsjunior2
.globl picdata_rsjunior2

piclength_rsjunior2:	.long	picdata_rsjunior2_end - picdata_rsjunior2
picdata_rsjunior2:
.incbin "../include/rsjunior2.jpg"
picdata_rsjunior2_end:

.globl piclength_junior3
.globl picdata_junior3

piclength_junior3:	.long	picdata_junior3_end - picdata_junior3
picdata_junior3:
.incbin "../include/junior3.jpg"
picdata_junior3_end:

.globl piclength_rsjunior3
.globl picdata_rsjunior3

piclength_rsjunior3:	.long	picdata_rsjunior3_end - picdata_rsjunior3
picdata_rsjunior3:
.incbin "../include/rsjunior3.jpg"
picdata_rsjunior3_end:

.globl piclength_junior4
.globl picdata_junior4

piclength_junior4:	.long	picdata_junior4_end - picdata_junior4
picdata_junior4:
.incbin "../include/junior4.jpg"
picdata_junior4_end:

.globl piclength_rsjunior4
.globl picdata_rsjunior4

piclength_rsjunior4:	.long	picdata_rsjunior4_end - picdata_rsjunior4
picdata_rsjunior4:
.incbin "../include/rsjunior4.jpg"
picdata_rsjunior4_end:

.globl piclength_junior8
.globl picdata_junior8

piclength_junior8:	.long	picdata_junior8_end - picdata_junior8
picdata_junior8:
.incbin "../include/junior8.jpg"
picdata_junior8_end:

.globl piclength_rsjunior8
.globl picdata_rsjunior8

piclength_rsjunior8:	.long	picdata_rsjunior8_end - picdata_rsjunior8
picdata_rsjunior8:
.incbin "../include/rsjunior8.jpg"
picdata_rsjunior8_end:

.globl piclength_junior10
.globl picdata_junior10

piclength_junior10:	.long	picdata_junior10_end - picdata_junior10
picdata_junior10:
.incbin "../include/junior10.jpg"
picdata_junior10_end:

.globl piclength_rsjunior10
.globl picdata_rsjunior10

piclength_rsjunior10:	.long	picdata_rsjunior10_end - picdata_rsjunior10
picdata_rsjunior10:
.incbin "../include/rsjunior10.jpg"
picdata_rsjunior10_end:

.globl piclength_junior12
.globl picdata_junior12

piclength_junior12:	.long	picdata_junior12_end - picdata_junior12
picdata_junior12:
.incbin "../include/junior12.jpg"
picdata_junior12_end:

.globl piclength_rsjunior12
.globl picdata_rsjunior12

piclength_rsjunior12:	.long	picdata_rsjunior12_end - picdata_rsjunior12
picdata_rsjunior12:
.incbin "../include/rsjunior12.jpg"
picdata_rsjunior12_end:

.globl piclength_junior13
.globl picdata_junior13

piclength_junior13:	.long	picdata_junior13_end - picdata_junior13
picdata_junior13:
.incbin "../include/junior13.jpg"
picdata_junior13_end:

.globl piclength_rsjunior13
.globl picdata_rsjunior13

piclength_rsjunior13:	.long	picdata_rsjunior13_end - picdata_rsjunior13
picdata_rsjunior13:
.incbin "../include/rsjunior13.jpg"
picdata_rsjunior13_end:

.globl piclength_junior15
.globl picdata_junior15

piclength_junior15:	.long	picdata_junior15_end - picdata_junior15
picdata_junior15:
.incbin "../include/junior15.jpg"
picdata_junior15_end:

.globl piclength_rsjunior15
.globl picdata_rsjunior15

piclength_rsjunior15:	.long	picdata_rsjunior15_end - picdata_rsjunior15
picdata_rsjunior15:
.incbin "../include/rsjunior15.jpg"
picdata_rsjunior15_end:

.globl piclength_junior18
.globl picdata_junior18

piclength_junior18:	.long	picdata_junior18_end - picdata_junior18
picdata_junior18:
.incbin "../include/junior18.jpg"
picdata_junior18_end:

.globl piclength_rsjunior18
.globl picdata_rsjunior18

piclength_rsjunior18:	.long	picdata_rsjunior18_end - picdata_rsjunior18
picdata_rsjunior18:
.incbin "../include/rsjunior18.jpg"
picdata_rsjunior18_end:

.globl piclength_junior19
.globl picdata_junior19

piclength_junior19:	.long	picdata_junior19_end - picdata_junior19
picdata_junior19:
.incbin "../include/junior19.jpg"
picdata_junior19_end:

.globl piclength_rsjunior19
.globl picdata_rsjunior19

piclength_rsjunior19:	.long	picdata_rsjunior19_end - picdata_rsjunior19
picdata_rsjunior19:
.incbin "../include/rsjunior19.jpg"
picdata_rsjunior19_end:

.globl piclength_junior20
.globl picdata_junior20

piclength_junior20:	.long	picdata_junior20_end - picdata_junior20
picdata_junior20:
.incbin "../include/junior20.jpg"
picdata_junior20_end:

.globl piclength_rsjunior20
.globl picdata_rsjunior20

piclength_rsjunior20:	.long	picdata_rsjunior20_end - picdata_rsjunior20
picdata_rsjunior20:
.incbin "../include/rsjunior20.jpg"
picdata_rsjunior20_end:

//
// jump images
//

.globl piclength_jump1
.globl picdata_jump1

piclength_jump1:	.long	picdata_jump1_end - picdata_jump1
picdata_jump1:
.incbin "../include/jump1.jpg"
picdata_jump1_end:

.globl piclength_rsjump1
.globl picdata_rsjump1

piclength_rsjump1:	.long	picdata_rsjump1_end - picdata_rsjump1
picdata_rsjump1:
.incbin "../include/rsjump1.jpg"
picdata_rsjump1_end:

.globl piclength_jump2
.globl picdata_jump2

piclength_jump2:	.long	picdata_jump2_end - picdata_jump2
picdata_jump2:
.incbin "../include/jump2.jpg"
picdata_jump2_end:

.globl piclength_rsjump2
.globl picdata_rsjump2

piclength_rsjump2:	.long	picdata_rsjump2_end - picdata_rsjump2
picdata_rsjump2:
.incbin "../include/rsjump2.jpg"
picdata_rsjump2_end:

.globl piclength_jump3
.globl picdata_jump3

piclength_jump3:	.long	picdata_jump3_end - picdata_jump3
picdata_jump3:
.incbin "../include/jump3.jpg"
picdata_jump3_end:

.globl piclength_rsjump3
.globl picdata_rsjump3

piclength_rsjump3:	.long	picdata_rsjump3_end - picdata_rsjump3
picdata_rsjump3:
.incbin "../include/rsjump3.jpg"
picdata_rsjump3_end:

.globl piclength_jump4
.globl picdata_jump4

piclength_jump4:	.long	picdata_jump4_end - picdata_jump4
picdata_jump4:
.incbin "../include/jump4.jpg"
picdata_jump4_end:

.globl piclength_rsjump4
.globl picdata_rsjump4

piclength_rsjump4:	.long	picdata_rsjump4_end - picdata_rsjump4
picdata_rsjump4:
.incbin "../include/rsjump4.jpg"
picdata_rsjump4_end:

.globl piclength_jump5
.globl picdata_jump5

piclength_jump5:	.long	picdata_jump5_end - picdata_jump5
picdata_jump5:
.incbin "../include/jump5.jpg"
picdata_jump5_end:

.globl piclength_rsjump5
.globl picdata_rsjump5

piclength_rsjump5:	.long	picdata_rsjump5_end - picdata_rsjump5
picdata_rsjump5:
.incbin "../include/rsjump5.jpg"
picdata_rsjump5_end:


//
// sounds
//

.globl sndlength_collision
.globl snddata_collision

sndlength_collision:	.long	snddata_collision_end - snddata_collision
snddata_collision:
.incbin "../include/collision.pcm"
snddata_collision_end:

.globl sndlength_moveenemy
.globl snddata_moveenemy

sndlength_moveenemy:	.long	snddata_moveenemy_end - snddata_moveenemy
snddata_moveenemy:
.incbin "../include/moveenemy.pcm"
snddata_moveenemy_end:

.globl sndlength_movejunior
.globl snddata_movejunior

sndlength_movejunior:	.long	snddata_movejunior_end - snddata_movejunior
snddata_movejunior:
.incbin "../include/movejunior.pcm"
snddata_movejunior_end:

.globl sndlength_score
.globl snddata_score

sndlength_score:	.long	snddata_score_end - snddata_score
snddata_score:
.incbin "../include/score.pcm"
snddata_score_end:

.globl sndlength_wrongjump
.globl snddata_wrongjump

sndlength_wrongjump:	.long	snddata_wrongjump_end - snddata_wrongjump
snddata_wrongjump:
.incbin "../include/wrongjump.pcm"
snddata_wrongjump_end:
