#include <stdint.h>
#include <stdio.h>



uint16_t sgn[] = {
    #include "../EJ_2/sgn.h"
};

typedef enum {
    ACUMULAR,
    PROMEDIAR
}_state;

int N = 40;

 class MDE{
     public:
     explicit MDE(){}
     ~MDE() {}

     void init(){
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
                    printf("Promedio:%d",acum/i);
                    acum = 0;
                    estado=ACUMULAR;
                    break;
                
                default:
                    init();

            }
        }
        
    }

    private:

    uint32_t acum;
    _state estado;
    
}; 