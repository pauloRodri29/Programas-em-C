#include <stdlib.h>
#include <stdio.h>
//calculadora usando o "IF" e "FOR"
void main(){

    int n1,n2; //criação de duas variáveis para pegar os dois números da operação
    int op; //para pegar a opção selecionado pelo usuário

    for (int i = 1; i != 0 ;)//loop para fazer o programa rodar até que é o "i" seja diferente de 0,caso contrário o loop é parado 
    {
    printf(" 1.Adição \n 2.Subtração \n 3.Divisão \n 4.Multiplicação\n 0.Sair\n");/*Mostrará as opções de operções para serem
    selecionadas pelo usuário, pode-se também fazer uma nova função com nome "MENU" e chamar ela aqui*/
    printf("Selecione uma opção: ");
    scanf("%i",&op);/*pegará o numero da opção*/

    if (op == 1)
    {
        printf("\n Adição\nDigite dois números(A cada numero inserido pressione ENTER para prosseguir):\n");//comando "printf" mostrará uma mensagem na tela
        scanf("%i %i",&n1,&n2);/*comando "scanf" pegará os dois números e armazenará nas duas variáveis criadas(n1 e n2),
ou pode-se criar dois "scanf" que pegará os dois números e armazenará da mesma forma*/
        printf("\nResultado = %i\n", n1+n2);/*mostrará o resultado da operação, também pode-se criar uma váriavel 
chamada "resultado" para colocar o resultado da operação*/}

      if (op == 2){
    printf("\n Subtração\nDigite dois números(A cada numero inserido pressione ENTER para prosseguir):\n");//comando "printf" mostrará uma mensagem na tela
        scanf("%i %i",&n1,&n2);/*comando "scanf" pegará os dois números e armazenará nas duas variáveis criadas(n1 e n2),
ou pode-se criar dois "scanf" que pegará os dois números e armazenará da mesma forma*/
        printf("\nResultado = %i\n", n1-n2);/*mostrará o resultado da operação, também pode-se criar uma váriavel 
chamada "resultado" para colocar o resultado da operação*/}

      if (op == 3){
    printf("\n Divisão\nDigite dois números(A cada numero inserido pressione ENTER para prosseguir):\n");//comando "printf" mostrará uma mensagem na tela
        scanf("%i %i",&n1,&n2);/*comando "scanf" pegará os dois números e armazenará nas duas variáveis criadas(n1 e n2),
ou pode-se criar dois "scanf" que pegará os dois números e armazenará da mesma forma*/
        printf("\nResultado = %i\n", n1/n2);/*mostrará o resultado da operação, também pode-se criar uma váriavel 
chamada "resultado" para colocar o resultado da operação*/}

       if (op == 4){
    printf("\n Multiplicação\nDigite dois números(A cada numero inserido pressione ENTER para prosseguir):\n");//comando "printf" mostrará uma mensagem na tela
        scanf("%i %i",&n1,&n2);/*comando "scanf" pegará os dois números e armazenará nas duas variáveis criadas(n1 e n2),
ou pode-se criar dois "scanf" que pegará os dois números e armazenará da mesma forma*/
        printf("\nResultado = %i\n", n1*n2);/*mostrará o resultado da operação, também pode-se criar uma váriavel 
chamada "resultado" para colocar o resultado da operação*/}

    if (op == 0){
        printf("\nPrograma Finalizado, xauzinhoo!!!!!!");
        exit(0);
        i = op;//finalizará o loop do FOR passando o valor de "op" para "i" = 0 
    }
    }//for

}