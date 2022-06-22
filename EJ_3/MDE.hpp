#include <stdint.h>
#include <stdio.h>
#define N 50

uint16_t sgn[] = {
    #include "sgn.h"
};


 class MDE{
     public:
     explicit MDE(uint32_t count){}
     ~MDE() {}

     void init(){
        acum = 0;
        _State=_state::ACUMULAR;
     }

     void fsm(){

        for (int i = 0; i < N; i++)
        {
            switch(_State){

                case _state::ACUMULAR:
                    acum = acum + sgn[i];
                    i++;
                    if(i=N){
                        _State=_state::PROMEDIAR;
                        break;
                    }
                    

                case _state::PROMEDIAR:
                    printf("%d",acum/i);
                    acum = 0;
                    _State=_state::ACUMULAR;
                    break;
                
                default:
                    init();

            }
        }
        
    }

    private:

    uint32_t acum;

    enum class _state{
     ACUMULAR,
     PROMEDIAR
    }_State;


}; 