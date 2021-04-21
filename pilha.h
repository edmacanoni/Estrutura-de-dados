typedef TipoItem;
const max_itens = 100;

class {
  
  private:
  int tamanho;
  TipoItem* estrutura;
  
  public:

  pilha();
  ~pilha();
  
    
  bool estacheio();
  
  bool estavazio();  
  
  void inserir(TipoItem item);
    
  TipoItem remover();
  
  void imprimir();
  
  int qualtamanho();

};

