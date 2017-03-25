/**
 *  Front
 *  =====
 *
 *  Main server that sends back messages in delta time to the backup servers to
 *  confirm it is alive.
 */

#ifndef __PROTOLT3_FRONT_H
#define __PROTOLT3_FRONT_H

void front_init(char *ip_addr, char *port);
void add_back(char *ip_addr, char *port);
void start_pulse(void);

#endif // !__PROTOLT3_FRONT_H
