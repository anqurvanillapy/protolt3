/**
 *  Back
 *  ====
 *
 *  Backup servers that listen to main server's pulse.
 */

#ifndef __PROTOLT3_BACK_H
#define __PROTOLT3_BACK_H

void back_init(char *ip_addr, char *port);
void add_front(char *ip_addr, char *port);
void start_listen(void);

#endif // !__PROTOLT3_BACK_H
