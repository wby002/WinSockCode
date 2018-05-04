#ifndef MSGSNDSRV_H
#define MSGSNDSRV_H

#define MSG_SEND_VERS   'B'
#define MSG_SEND_PORT   18
#define MSG_BUF_SIZE    512

#define MSG_SUCCESS     0
#define MSG_VERSION_ERR -1
#define MSG_FIELD_ERR   -2

enum msp_field
{
    MSP_VERSION,
    MSP_RECIP,
    MSP_RECIP_TERM,
    MSP_MESSAGE,
    MSP_SENDER,
    MSP_SENDER_TERM,
    MSP_COOKIE,
    MSP_SIGNAT,
    MSP_TOTAL
};

struct field_name
{
    enum msp_field field;
    char *name;
};

#endif // MSGSNDSRV_H
