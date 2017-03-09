#ifndef  _NETWORK_H_
#define  _NETWORK_H_
#include "platform.h"

void my_ip_assign(void);
void network_init(void);
extern void SYSRESET(void);

extern uint8_t DstIP[4];
extern uint16_t DstPort;
extern uint16_t LocalPort;


#define SOCK_DHCP			0
#define MY_MAX_DHCP_RETRY	3
#define DATA_BUF_SIZE   64
extern uint8_t gDATABUF[DATA_BUF_SIZE];
// Default Network Configuration
extern wiz_NetInfo gWIZNETINFO ;
void network_init(void);
void my_ip_assign(void);
void LOOP_TASK(uint8_t socket_port_num);
void dhcp_process(uint8_t socket_port_num);
void socket_process(uint8_t socket_port_num);
void W5500_NETWORK_init(uint8_t socket_port_num);
bool socket_start(SOCKET s);
void my_ip_conflict(void);

#endif   // _NETWORK_H_

