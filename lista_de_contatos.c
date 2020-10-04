#include <stdio.h>
#include <time.h>
#include <string.h>
#include<stdlib.h>

/* to do(){
 * Agenda de Telefone:
 * Nome
 * E-mail
 * Endereço(Rua, numero, complemento, bairro, cidade, estado, país)
 * Telefone(DDD Numero)
 * Data de Aniversário(Dia Mes Ano)
 * Observação
}

 a. Definir Estrutura - ok
 b. Declarar variaveis de vetor até 100 pessoas - ok
 c. Buscar pelo primeiro nome trazer uma lista - ok
 d. Buscar pelo mes de aniversario trazer uma lista - 0k
 e. Buscar pelo dia e mes de aniversario trazer uma lista - ok
 f. Inserir pessoas em órdem alfabetica -
 g. Imprimir nome, telefone e e-mail ou todos os dados - ok
 h. Fazer um menu principal - 50%
*/

typedef struct contact {
    char nome[100];
    char email[50];
    // --------------
    int numero;
    char rua[50];
    char complemento[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char pais[50];
    // -----------------
    char ddd[2];
    char telefone[9];
    //-----------------
    int aniversario[3];
    //-----------------
    char obs[200];
    //-----------------

} Contact;



void printContactNameEmail(Contact con) {
    // Personal info;
    printf("Nome:\n%s\n", con.nome);
    printf("E-mail:\n%s\n", con.email);

    //Phone Number;
    printf("DDD: \n%s\n", con.ddd);
    printf("Numero: \n%s\n", con.telefone);
}

void printContact(Contact con) {

    // Personal info;
    printf("Nome:\n%s\n", con.nome);
    printf("E-mail:\n%s\n", con.email);
    printf("Aniversario:\n%d/%d/%d", con.aniversario[1], con.aniversario[2], con.aniversario[3]);

    //Adress;
    printf("Numero: \n%d\n", con.numero);
    printf("Rua:\n%s\n", con.rua);
    printf("Complemento:\n%s\n", con.complemento);
    printf("Bairro:\n%s\n", con.bairro);
    printf("Cidade:\n%s\n", con.cidade);
    printf("Estado:\n%s\n", con.estado);
    printf("Pais:\n%s\n", con.pais);

    //Phone Number;
    printf("DDD: \n%s\n", con.ddd);
    printf("Numero: \n%s\n", con.telefone);

    //Extras
    printf("OBS:\n%s\n", con.obs);

}


Contact contactBook[2];

void searchByName(char nome[50]);

void searchByBdmonth(int mes);

void searchByBdmonthDay(int mes, int dia);

void screemActionSearchByBdmonthDay();

void screemActionSearchByBdmonth();

void screemActionSearchByName();

void screenActionAddContact();
Contact addContact(Contact con)
int main() {
    printf("****Agenda Telefonica****\n");
    Contact contact;
    contact = addContact(contact);
    contactBook[0] = contact;
    int options = 0;

    while (options != 10) {

        printf("\nDigite uma opcao: ");
        scanf("%d", &options);
        system("cls");
        switch (options) {
            case 0:
                screemActionSearchByName();
                break;
            case 1:
                screemActionSearchByBdmonth();
                break;
            case 2:
                screemActionSearchByBdmonthDay();
                break;

        }
    }


    return 0;
}


void screemActionSearchByBdmonthDay() {
    system("cls");
    int mes;
    int dia;
    printf("\n*******Buscar Por Dia e Mes*************\n");
    printf("\nDigite o Mes\n");
    scanf("%d", &mes);
    printf("Digite o dia");
    scanf("%d", &dia);
    searchByBdmonthDay(mes, dia);
}

void screemActionSearchByBdmonth() {
    system("cls");
    int mes;
    printf("\n*******Buscar Por Mes*************\n");
    printf("\nDigite o Mes\n");
    scanf("%d", &mes);
    searchByBdmonth(mes);
}

void screemActionSearchByName() {
    system("cls");
    char nome[50];
    printf("\n*******Buscar Por nome*************\n");
    printf("\nDigite o Nome\n");
    scanf("%s", &nome);
    searchByName(nome);
}

void screenActionAddContact() {
    int number;

    system("cls");
    printf("***********Adicionar Contatos***********");
    Contact con;


    // Personal info;
    printf("Digite o nome do contato:\n");
    scanf("%s", &con.nome);

    printf("Digite o e-mail: \n");
    scanf("%s", &con.email);

    printf("Digite o Dia de Aniversario: \n");
    scanf("%d", &con.aniversario[1]);

    printf("Digite oo Mes de Aniversario: \n");
    scanf("%d", &con.aniversario[2]);

    printf("Digite o Ano de Aniversario: \n");
    scanf("%d", &con.aniversario[3]);

    //Adress;
    printf("Bairro");
    scanf("%s",&con.bairro);

    printf("Digite o Rua: \n");
    scanf("%s",&con.rua);

    printf("Digite o Ano de Complemento: \n");
    scanf("%s",&con.complemento);

    printf("Digite o Numero: \n");
    scanf("%d", &con.numero);

    printf("Cidade: \n");
    scanf("%s",&con.cidade);

    printf("Estado: \n");
    scanf("%s",&con.estado);

    printf("Pais : \n");
    scanf("%s",&con.pais);

    //Phone Number;
    printf(" DDD: \n");
    scanf("%s",&con.ddd);
    printf("Telefone: \n");
    scanf("%s",&con.telefone);

    //Extras
    printf("Observacao: \n");
    scanf("%s",&con.obs);

    addContact(con);

    printf("Contato adicionado");


}

void searchByName(char nomeForSearch[50]) {

    int tamVet = (sizeof(contactBook) / sizeof(contactBook[0]));
    int achei = 0;

    for (int i = 0; i < tamVet; ++i) {

        if (strcmp(nomeForSearch, contactBook[i].nome) == 0) {
            achei++;
            printContactNameEmail(contactBook[i]);
        }
    }

    if (achei == 0) {
        printf("Dado nao encontrado");
    } else {
        printf("Foram encontrado %d", achei);
    }

}

void searchByBdmonth(int mes) {

    int tamVet = (sizeof(contactBook) / sizeof(contactBook[0]));
    int achei = 0;

    for (int i = 0; i < tamVet; ++i) {
        if (mes == contactBook[i].aniversario[2]) {
            achei++;
            printContactNameEmail(contactBook[i]);
        }
    }

    if (achei == 0) {
        printf("Dado nao encontrado");
    } else {
        printf("Foram encontrado %d", achei);
    }
}

void searchByBdmonthDay(int mes, int dia) {

    int tamVet = (sizeof(contactBook) / sizeof(contactBook[0]));
    int achei = 0;

    for (int i = 0; i < tamVet; ++i) {
        if (mes == contactBook[i].aniversario[2] && dia == contactBook[i].aniversario[1]) {
            achei++;
            printContactNameEmail(contactBook[i]);
        }
    }

    if (achei == 0) {
        printf("Dado nao encontrado");
    } else {
        printf("Foram encontrado %d", achei);
    }
}

Contact addContact(Contact con) {

    // Personal info;
    strcpy(con.nome, "filipe");
    strcpy(con.email, "filipe.lain@gmail.com");
    con.aniversario[1] = 20;
    con.aniversario[2] = 03;
    con.aniversario[3] = 1989;

    //Adress;
    con.numero = 1;
    strcpy(con.rua, "1145");
    strcpy(con.complemento, "Casa");
    strcpy(con.bairro, "N.bandeirante");
    strcpy(con.cidade, "Brasilia");
    strcpy(con.estado, "Distrito Federal");
    strcpy(con.pais, "Brasil");

    //Phone Number;
    strcpy(con.ddd, "61");
    strcpy(con.telefone, "996396271");

    //Extras
    strcpy(con.obs, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec ut vehicula dolor. In in augue.");

    return con;
}

Contact addContactTest(Contact con) {

    // Personal info;
    strcpy(con.nome, "filipe");
    strcpy(con.email, "filipe.lain@gmail.com");
    con.aniversario[1] = 20;
    con.aniversario[2] = 03;
    con.aniversario[3] = 1989;

    //Adress;
    con.numero = 1;
    strcpy(con.rua, "1145");
    strcpy(con.complemento, "Casa");
    strcpy(con.bairro, "N.bandeirante");
    strcpy(con.cidade, "Brasilia");
    strcpy(con.estado, "Distrito Federal");
    strcpy(con.pais, "Brasil");

    //Phone Number;
    strcpy(con.ddd, "61");
    strcpy(con.telefone, "996396271");

    //Extras
    strcpy(con.obs, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec ut vehicula dolor. In in augue.");

    return con;
}