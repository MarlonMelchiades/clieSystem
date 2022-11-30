#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct pedido

{

     char namePed[200];
     char CPF[200];
     char numPed[200];
     char qtdPed[200];
     char valorped[200];

int cod;

}logP[200];

struct cadastro

{

     char CPF[200];
     char telefone[200];
     char nome[200];
     char endereco[200];
     char data[200];


int vazio,cod;

struct pedido clientePed;

}log[200];

// ---- funções

int verifica_pos(void);

int verifica_cod( int cod );

int opt;

void cadastroP(int cod,int pos);

void list();

void cadastroPedido();

void consultaCod (void);

void excluirCliente (void);

int main(void){ // ----- main

int i,Opcao,OpcaoCliente,posicao,retorno;

int codaux;

do

{

    printf("1 - Cadastrar Novo Cliente\n");
    printf("2 - Cliente\n");
    printf("3 - Alterar Cliente\n");
    printf("4 - Excluir Cliente\n");
    printf("5 - Cadastrar Pedido\n");
    printf("6 - Alterar Pedido\n");
    printf("7 - Excluir Pedido\n");
    printf("8 - Sair\n");
    printf(" Selecione uma opcao por favor: ");

scanf("%d", &Opcao);

getchar();

if (Opcao == 1)

{

printf("Voce selecionou a opcao 1 - Cadastrar Novo Cliente\n");

posicao=verifica_pos();

if ( posicao != -1 )

{

printf("\nEntre com um codigo de 1 a 200 para seu cadastro: \n");

scanf("%d",&codaux);fflush(stdin);

retorno = verifica_cod( codaux );

if ( retorno == 1 )

cadastroP( codaux, posicao );

else{

printf("\nCodigo ja existente ou invalido pressione enter para voltar ao menu principal\n");

getchar();

system("cls");

main();

}

}

else

printf("\nNao e possivel realizar mais cadastros!\n");

break;

 

}
