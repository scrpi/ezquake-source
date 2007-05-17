/**

  Inbuilt teamplay messages module

  made by johnnycz, Up2nOgOoD[ROCK]
  last edit:
  $Id: tp_msgs.h,v 1.1.2.4 2007-05-17 06:49:46 himan Exp $

*/

#ifndef __TP_MSGS_H__
#define __TP_MSGS_H__

extern void TP_Msg_Lost_f (void);
extern void TP_Msg_Report_f (void);
extern void TP_Msg_Coming_f (void);
extern void TP_Msg_EnemyPowerup_f (void);
extern void TP_Msg_Safe_f (void);
extern void TP_Msg_Help_f (void);
extern void TP_Msg_GetQuad_f (void);
extern void TP_Msg_GetPent_f (void);
extern void TP_Msg_QuadDead_f (void);
extern void TP_Msg_Took_f (void);
extern void TP_Msg_Point_f (void);
extern void TP_Msg_Need_f (void);
extern void TP_Msg_Trick_f (void);
extern void TP_Msg_Replace_f (void);

extern const char* TP_MSG_Colored_Armor(void);
extern const char * TP_MSG_Colored_Powerup(void);
extern const char * TP_MSG_Colored_Short_Powerups(void);

#endif // __TP_MSGS_H__
