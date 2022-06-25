#include <stdint.h>
#include <stdio.h>
#include <cstdlib>
#include "MDE.hpp"



int main(){
    srand(time(NULL));

    MDE maquina_MDE;
    
    maquina_MDE.init();
    maquina_MDE.fsm();

    return(0);
}