/**
 *  Proto<3
 *  =======
 *
 *  A minimal heartbeat protocol.
 */

#ifndef __PROTOLT3_PROTOLT3_H
#define __PROTOLT3_PROTOLT3_H

typedef struct {

} protolt3_ctx_t;

typedef struct {
    protolt3_ctx_t *ctx;
} protolt3_packet_t;

void _hot_switch(protolt3_ctx_t *ctx);

#endif // !__PROTOLT3_PROTOLT3_H
