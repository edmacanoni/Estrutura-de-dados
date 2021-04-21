#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(){
   tamanho = 0;
   estrutura = new TipoItem[max_itens];

}
