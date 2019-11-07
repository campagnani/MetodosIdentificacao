#include"math.h"
#include"stdio.h"
#include"stdlib.h"
#define pi 6.283185307179586

long int k=0;

void executaDegrau(double duracao, int amplitude, double taxaDeAmostragem)
{
    for (double t = 0; t<duracao ; t+=taxaDeAmostragem)
    {
        printf("%f\t%d;\n",t, amplitude);
        //cout << tempo << "\t" << saida << ";" ;
        k+=1;
    }
}


void executaDegraus(int amplitude, double frequenciaMin, double frequenciaPasso, double frequenciaMax, double taxaDeAmostragem)
{
    double w=0;
    for (double frequencia = frequenciaMax; frequencia>=frequenciaMin; frequencia -= frequenciaPasso)
    {
        //printf("\t\t\t%f\n",(float) frequencia);
        for (double t = 0; t<(1/frequencia) ; t+=taxaDeAmostragem)
        {
            int saida;
            if(amplitude*sin(pi*frequencia*t)>=0) saida =  amplitude;
            else                                 saida = -amplitude;
            float tempo = k*taxaDeAmostragem;
            printf("%f\t%d;\n",tempo, saida);
            //cout << tempo << "\t" << saida << ";" ;
            k+=1;
        }
        w += (1/frequencia);
    }
}

void executaSinVar(int amplitude, double frequenciaMin, double frequenciaPasso, double frequenciaMax, double taxaDeAmostragem)
{
    
    double w=0;
    for (double frequencia = frequenciaMax; frequencia>=frequenciaMin; frequencia -= frequenciaPasso)
    {
        //printf("\t\t\t%f\n",(float) frequencia);
        for (double t = 0; t<(1/frequencia) ; t+=taxaDeAmostragem)
        {
            int saida = amplitude*sin(pi*frequencia*t);
            float tempo = k*taxaDeAmostragem;
            printf("%f\t%d;\n",tempo, saida);
            //cout << tempo << "\t" << saida << ";" ;
            k+=1;
        }
        w += (1/frequencia);
    }
}
