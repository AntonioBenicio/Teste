  //ponteiro para algo é um recurso utilizado para guardar o inicio do endereço de algo na maquina
  int mostra (*p){
    printf("%d",*p);
  }
  int main(void ){
  int p=34;
 mostra(&p);