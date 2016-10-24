#ifndef __DEFINE__
#define __DEFINE__


struct st_SESSION
{
	int SessionID;
};


struct st_PLAYER
{
	int status;

	int SessionID;
	int Content[3];
};

#define dfTHREAD_NUM		3
#define dfMAX_PLAYER		5000

#define dfSTATE_NONE		1
#define dfSTATE_CONNECT		2
#define dfSTATE_LOGIN		3

#endif