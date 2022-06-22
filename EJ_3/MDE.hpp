#include <stdint.h>
#include <stdio.h>
#include <iostream>
#include <cstdlib> 
#include <ctime>



uint16_t sgn[] = {
    #include "../EJ_2/sgn.h"
};

typedef enum {
    ACUMULAR,
    PROMEDIAR
}_state;




 class MDE{
     public:
     explicit MDE(){}
     ~MDE() {}

     void init(){
        N = rand() % 51;
        acum = 0;
        estado=ACUMULAR;
     }

     void fsm(){

        for (int i = 0; i <= N+1; i++)
        {
            switch(estado){

                case ACUMULAR:
                    acum = acum + sgn[i];
                    if(i==N){
                        estado=PROMEDIAR;
                    }
                    break;

                case PROMEDIAR:
                    printf("Promedio de los primeros %d numeros del archivo 'sgn.h': %d",i,acum/i);
                    acum = 0;
                    estado=ACUMULAR;
                    break;
                
                default:
                    init();

            }
        }
        
    }

    private:
    int N;
    uint32_t acum;
    _state estado;
    
}; 