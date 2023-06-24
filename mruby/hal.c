#include "hal.h"
#include <stdio.h>
#include <stdio.h>

int hal_write(int fd, const void *buf, int nbytes){
    char *p = (char *)buf;
    for( int i=0 ; i<nbytes ; i++ ) putchar( *p++ );
    return nbytes;
}

int hal_flush(int fd){
    return 0;    
}

void hal_abort(const char *s){
    return;  // TODO: Reboot
}
