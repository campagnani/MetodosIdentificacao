# Métodos de Identificação de Sistemas

Para identificar um sistema SISO é preciso comparar o sinal de entrada com o sinal de saída do mesmo.

O presente repositório visa armazenar códigos geradores de sinais de entrada discretizados em função do tempo e digitalizados, a fim de serem aplicados no sistema e possibilitar uma identificação mais precisa.

## Implementação

O código foi escrito em C++ para poder ser facilmente alterado e implementado em microcontroladores, MATLAB, entre outros, ou ainda apenas executar e obter a matriz do sinal.

## Compilação (Linux e MacOS)

Primeiramente copie e cole o comando abaixo no terminal para clonar o repositório:

    git clone https://github.com/campagnani/MetodosIdentificacao.git

Vá para a pasta do repositório:

    cd MetodosIdentificacao

Compile e execute com o comando abaixo:

    clear && g++ sinVar.c && clear && ./a.out

A saída do terminal será a matriz de entrada do sistema no formato [tempo, amplitude]. Ela está no formato de ser copiada e colada no MATLAB a fim de criar uma variável no workspace.

## Sinais

O sinal senoidal variável tem aproximadamente a frequência exata da senoide aplicada naquele instante (com exceção do instante da troca de senóide).

### Nulo - Entrada nula

Seve para identificar a resposta do sistema a entrada nula.

### SinVar - Senos de frequências variáveis

Serve para identificar o módulo e fase de uma faixa de frequências específicas.

Amplitude......................amp.............//Amplitude (Tipo: Inteiro)

Frequência Mínima..............freqMin 1.......//Hz

Passo de troca de frequência...freqPasso 1.....//Incremento de troca de frequência (uma senoide completa por frequência)

Frequencia Maxima..............freqMax 10......//Hz

Taxa de amostragem.............taxAmo 0.001....//Segundos

### DegVar - Degraus de frequências variáveis

Identifica integradores, diferenciadores e outras frequências fora da faixa do SinVar.

Mesmos parâmetros.

## Avisos

Estes sinais aplicados na entrada do sistema NÃO produzem sinais com média 0 na saída em plantas com integradores, polos instaveis e possívelmente plantas não lineares.

Cuidado com a saturação do atuador e/ou saturação da saída da planta.

Se você já tiver algum modelo aproximado da planta, experimente simular estes sinais de entrada e observar a resposta da planta.
