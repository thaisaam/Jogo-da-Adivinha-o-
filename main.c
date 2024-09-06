#include <stdio.h>
//Versão 01 do game adivinhação
//Criando uma mensagem inicial 
//Definir as variaveis 
//Criar laço de tentativas com as verificações

int main() {
  printf("-----BEM VINDO AO JOGO DE ADIVINHAÇÃO-----\n");
  printf("Descubra meu numero secreto em 3 tentativas\n");
  printf("Meu numero esta entre 0 e 10\n");
  printf("\n************************************\n");

  //------------Variaveis 
  int numeroSecreto =7;
  int chute;

  //------Iniciando o FOR
  for(int i=1; i<=3; i++){
    printf("Qual e seu chute:");
    scanf("%d", &chute);

    //Verificando o chute digitado
    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);
    int menor = (chute < numeroSecreto);

    if(acertou){
      printf("Parabens Voce acertou");
      break; //Encerrando o laço for
    }
    else if(maior){
      printf("Seu chute foi maior que o numero secreto\n");
    }
    else if(menor) {
      printf("Seu numero foi menor que o numero secreto\n");
    }
  }
  printf("Fim das tentativas\n");
  return 0;
}