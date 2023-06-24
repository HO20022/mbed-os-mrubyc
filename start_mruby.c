#include <stdio.h>
#include <stdlib.h>
#include "mrubyc.h"
#include "start_mruby.h"

extern unsigned char mrbbuf[];

static unsigned char memory_pool[MRBC_MEMORY_SIZE];

void start_mrubyc(void)
{
    mrbc_init(memory_pool, MRBC_MEMORY_SIZE);

    if( mrbc_create_task(mrbbuf, 0) != NULL ){
        mrbc_run();
    }
}
