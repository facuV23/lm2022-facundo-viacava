#include <stdint.h>
#include <stdio.h>



uint16_t sgn[] = {
 #include "sgn.h"
};


int main(){

    for (int i = 0; i < 64; i++)
    {
        printf("%d, ",sgn[i]);
    }

}