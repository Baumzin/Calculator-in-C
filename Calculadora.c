#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float SomaNumeros(){
    float a, b, soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%f",  &a);
    printf("Digite o segundo numero: ");
    scanf("%f",  &b);
    printf("Soma: %f\n", soma = a + b);

    system("pause");
    system("cls");
    
    return soma;
}

float SubtraiNumeros(){
    float a, b, subtracao = 0;
    printf("Digite o primeiro numero: ");
    scanf("%f",  &a);
    printf("Digite o segundo numero: ");
    scanf("%f",  &b);
    printf("Subtra��o: %f\n", subtracao = a - b);

    system("pause");
    system("cls");
    
    return subtracao;
}

float  MultiplicaNumeros(){
    float a, b, multiplicacao = 0;
    printf("Digite o primeiro numero: ");
    scanf("%f",  &a);
    printf("Digite o segundo numero: ");
    scanf("%f",  &b);
    printf("Multiplica��o: %f\n", multiplicacao = a * b);

    system("pause");
    system("cls");
    
    return multiplicacao;
}

float DivideNumeros(){
    float a, b, divisao = 0;
    printf("Digite o primeiro numero: ");
    scanf("%f",  &a);
    printf("Digite o segundo numero: ");
    scanf("%f",  &b);
    printf("Divis�o: %f\n", divisao = a / b);

    system("pause");
    system("cls");
    
    return divisao;
}

float RaizQuadrada(){
    float a, raiz = 0;
    printf("Digite o numero: ");
    scanf("%f",  &a);
    printf("Raiz quadrada de %d �: %f\n", a, raiz = sqrt(a));

    system("pause");
    system("cls");

    return raiz;
}

float Porcentagem(){
    float a, porcentagem = 0, valor = 0;
    int op = 0;

    printf("O que quer fazer?\n1 - Saber a porcentagem de algum n�mero\n2 - Saber o valor decimal de uma porcentagem\n");
    scanf("%d",  &op);
    switch (op){
        case 1:
            printf("Digite o n�mero: ");
            scanf("%f",  &a);
            printf("Qual a porcentagem? ");
            scanf("%f", &porcentagem);
            printf("O valor da porcentagem �: %f\n", valor = a * (porcentagem/100));
            
            system("pause");
            system("cls");

            return valor;
        break;
        case 2:
            printf("Qual a porcentagem? ");
            scanf("%f", &porcentagem);
            printf("O valor da porcentagem �: %f\n", valor = porcentagem/100);

            system("pause");
            system("cls");
            
            return valor;
        break;
        default:
            printf("Op��o invalida\n");
            system("pause");
            system("cls");

            return valor;
        break;
    }   
}

int main(){
    int op = 0;
    char sair = 'N';
    setlocale(LC_ALL, "");

    do{
        printf("Escolha o que deseja:\n");
        printf("1 - Adi��o\n");
        printf("2 - Subtra��o\n");
        printf("3 - Multiplica��o\n");
        printf("4 - Divis�o\n");
        printf("5 - Extrair raiz quadrada\n");
        printf("6 - Saber porcentagem\n");
        printf("7 - Sair\n");
        scanf("%d", &op);

        switch(op){
            case 1:
                SomaNumeros();
            break;
            case 2:
                SubtraiNumeros();
            break;
            case 3:
                MultiplicaNumeros();
            break;
            case 4:
                DivideNumeros();
            break;
            case 5:
                RaizQuadrada();
            break;
            case 6:
                Porcentagem();
            break;
            case 7:
                printf("Obrigado por usar nosso porgrama!\n");

                sair = 'S';
            break;
            default:
                printf("Op��o inv�lida!\n");
                system("pause");
                system("cls");
            break;
        }

    }while(sair !=  'S' && sair != 's');

    return 0;

}
