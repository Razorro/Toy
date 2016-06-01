#ifndef __CONST_H__
#define __CONST_H__

/* all const variables of client and server are here */

namespace CONST
{
/* port number */
	const int PORT_NO = 9999;

/* user name and password size */
	const int USER_NAME_SIZE = 30;
	const int USER_PSW_SIZE  = 10;

/* the char used to glue */
	const char CHAR_GLUE_MSG      = 0;
	const char CHAR_GLUE_NAME_PSW = 1;
	
/* client state */
	const int NON_LOGIN_REGIST = 0; /* the initial state of client */
	const int LOGIN_WAIT_USERNAME = 1; /* client is at login state, waiting for user name */
	const int LOGIN_WAIT_USERPSW  = 2; /* client is at login state, waiting for user password */
	const int REGIST_WAIT_USERNAME = 3; /* client is at regist state, waiting for user name */
	const int REGIST_WAIT_USERPSW  = 4; /* client is at regist state, waiting for user password */
	const int WAIT_SERVER_RET = 5; /* waiting for the return from server on login or regist */
	const int COMMUNICATE = 6; /* client is communicating with server */
	const int QUIT = -1; /* client quit */

/* message */
	/* message content size */
	const int MSG_SIZE = 1024*2;
	/* message field size */
	const int MSG_TYPE_SIZE = 20;
	const int MSG_FROM_SIZE = USER_NAME_SIZE;
	const int MSG_TO_SIZE   = USER_NAME_SIZE;
	const int MSG_DATA_SIZE = MSG_SIZE - (MSG_TYPE_SIZE + 2*USER_NAME_SIZE) - 4;
	/* message length size */
	const int MSG_N_BYTE_OF_LENGTH = 2;
	/* message buffer queue size */
	const int MSG_QUEUE_SIZE = 1024;
	/* message types */
	extern char MSG_TYPE_REGIST[];
	extern char MSG_TYPE_LOGIN[];
	extern char MSG_TYPE_LOGOUT[];
	extern char MSG_TYPE_MSG[];
	extern char MSG_TYPE_RET_SUCC[];
	extern char MSG_TYPE_RET_FAIL[];
	extern char MSG_TYPE_NOTI_LOGIN[];	/* broadcast message type */
	extern char MSG_TYPE_NOTI_LOGOUT[];	/* broadcast message type */
	extern char MSG_TYPE_FB[];
	extern char MSG_TYPE_FI[];
	extern char MSG_TYPE_FE[];
	extern char MSG_TYPE_FOK[];
	extern char MSG_TYPE_FNO[];
	extern char MSG_TYPE_FRIENDLIST[];
	extern char MSG_TYPE_ADDFRIEND[];
	extern char MSG_TYPE_ADDOK[];
	extern char MSG_TYPE_ADDNO[];

/* user request type */
	const  int  USER_REQUEST_TYPE_SIZE = 10;
	extern char USER_REQUEST_TYPE_MSG[]; /* request sending message */
	extern char USER_REQUEST_TYPE_FTO[]; /* request sending file */
	extern char USER_REQUEST_TYPE_FOK[]; /* agree with receiving file */
	extern char USER_REQUEST_TYPE_FNO[]; /* refuse receiving file */
	extern char USER_REQUEST_TYPE_FRIENDLIST[]; /* request display friend list */
	extern char USER_REQUEST_TYPE_ADDFRIEND[];  /* request add friend */
	extern char USER_REQUEST_TYPE_ADDOK[];		/* agree with adding friend */
	extern char USER_REQUEST_TYPE_ADDNO[];		/* refuse adding friend */

/* server */
	/* registed user file */
	extern char REGISTED_FILE[];
	extern char FRIENDSHIP_FILE[];

/* epoll */
	const int MAX_EVENTS = 1024;

/* file transfer */
	/* file transfer attribute */
	const int MAX_DIR_LEN       = 256;
	const int MAX_FILE_NUM      = 3000;
	const int FILE_TYPE_SIZE       = 10;
	const int FILE_DATA_BLOCK_SIZE = MSG_DATA_SIZE - FILE_TYPE_SIZE;
	/* file type */
	extern char FILE_TYPE_DIR[]; /* file that will be transfered is a dir */
	extern char FILE_TYPE_FB[];  /* the begining of transfer for a file */
	extern char FILE_TYPE_FI[];  /* transfering a file */
	extern char FILE_TYPE_FE[];  /* the end of transfer for a file */
	/* receiving dir */
	extern char RECEIVE_DIR[]; 

/* ring queue */
	const int RING_QUEUE_SIZE = 10240;
	
};

#endif
