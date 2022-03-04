#include <stdlib.h>
#include <stdio.h>
//média de uma nota, método simples
int main(){
    float n1,n2,n3,media;//variaveis para a nota 1,2 e 3 e a "media" para armazenar a media do aluno
    printf("Insira a primeira nota: ");
    scanf("%f",&n1);
    printf("Insira a segunda nota: ");
    scanf("%f",&n2);
    printf("Insira a terceira nota: ");
    scanf("%f",&n3);
    media = (n1+n2+n2)/3;//media do aluno
    
    if(media <= 4.9 ){
       printf("\nAluno Reprovado com a média: %.2f\n", media);//mostra a situação do aluno junto com a media
    }
    if(media >= 5 && media <=6.9){
        printf("\nAluno de Recuperacao com a media: %i\n", media);
    }
    if(media >= 7){
        printf("\nAluno Aprovado com a media: %i\n", media);
    }

    return 0;
}