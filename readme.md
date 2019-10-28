# Métodos de Identificação de Sistemas Discretos

O presente repositório visa armazenar códigos geradores de sinais de entrada discretizados em função do tempo e digitalizados, a fim de serem aplicados em plantas contínuas para serem identificadas comparando a entrada com a saída.

## Implementação

O código foi escrito em C++ para poder ser facilmente alterado e implementado em microcontroladores, MATLAB, entre outros.

## Compilação

Para compilar o código no terminal do linux e obter a matriz do sinal - [tempo, amplitude] - basta executar o comando abaixo:

    clear && g++ sinVar.c && clear && ./a.out

A saída pode ser copiada e colada no MATLAB a fim de criar uma variavel no workspace.

## Sinais

O sinal senoidal variável tem aproximadamente a frequência exata da senoide aplicada naquele instante (com exceção do instante da troca de senóide).

### SinVar - Senos de frequências variáveis

Amplitude                   amp             //Amplitude (Tipo: Inteiro)
Frequência Mínima           freqMin 1       //Hz
Passo de troca de frequência freqPasso 1     //Incremento de troca de frequência (uma senoide completa por frequência)
Frequencia Maxima           freqMax 10      //Hz
Taxa de amostragem          taxAmo 0.001    //Segundos

### DegVar - Degraus de frequências variáveis

Mesmos parâmetros.

## Avisos

Estes sinais aplicados na entrada do sistema NÃO produzem sinais com média 0  na saída em plantas com integradores. O mesmo pode valer para plantas não lineares.

Cuidado com a saturação do atuador e/ou saturação da saída da planta.

Se você já tiver algum modelo aproximado da planta, experimente simular estes sinais de entrada e observar a resposta da planta.
