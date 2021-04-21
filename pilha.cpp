#include <iostream>
#include "pilha.h"

using namespace std;

pilha::pilha(){
   tamanho = 0;
   estrutura = new TipoItem[max_itens];
}

pilha::~pilha(){

delete [] estrutura;
}

bool pilha::pilhacheia(){
   return (tamanho == max_itens);
}

bool pilha::pilhavazia(){
  return (tamanho == 0);

}

void pilha::inserir(TipoItem item){
   if(pilhacheia()){
   cout << "A Pilha esta cheia\n";
   }else {
      estrutura[tamanho] = item;
      tamanho++;
   }
}

 TipoItem pilha::remover(){
   if (pilhavazia()){
   cout << "vazio";
   return 0;
   }else {
      tamanho--;
      return estrutura[tamanho]; 
      }
    
 }
   
 void pilha::imprimir(){
    cout << "Pilha: [ ";
    for (int i=0; i<tamanho; i++){
    cout << estrutura[i] << " ";
    }
    cout << "]\n";
   
    
 int pilha::qualtamanho(){
 return tamanho;
 }
    
