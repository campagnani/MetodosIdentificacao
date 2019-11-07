#include "sinais.h"

#define amp 255         //Bits PWM
#define freqMin 1       //Hz
#define freqPasso 1     //Incremento de troca de frequencia (uma senoide completa por frequencia)
#define freqMax 10      //Hz
#define taxAmo 0.001    //Periodo em segundos
#define dura 1          //Duração em segundos

int main (void)
{
    printf("sinalEntrada = [\n");
    executaDegrau(dura,0,taxAmo);
    executaDegraus(amp,freqMin,freqPasso,freqMax,taxAmo);
    executaDegrau(dura,0,taxAmo);
    executaSinVar (amp,freqMin,freqPasso,freqMax,taxAmo);
    executaDegrau(dura,0,taxAmo);
    printf("];\n\n");
    return 0;
}
