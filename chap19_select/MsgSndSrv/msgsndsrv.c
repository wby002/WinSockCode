#include <WinSock2.h>
#include <stdio.h>
#include "msgsndsrv.h"

#pragma comment(lib, "ws2_32.lib")

static struct field_name msp_info[MSP_TOTAL] = {
{ MSP_VERSION,  "VERSION" },
{ MSP_RECIP,    "RECIPENT" },
{ MSP_RECIP_TERM,  "RECIP-TERM" },
{ MSP_MESSAGE,  "MASSAGE" },
{ MSP_SENDER,  "SENDER" },
{ MSP_SENDER_TERM,  "SENDER-TERM" },
{ MSP_COOKIE,  "COOKIE" },
{ MSP_SIGNAT,  "SIGNATURE" },
};

static SOCKET msp_client_soc[FD_SETSIZE];
static int client_max;
