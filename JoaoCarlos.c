#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 100       

/* ESTRUTURAS DE DADOS*/
typedef struct Usuario {
    char email[TAM];
    char nome[TAM];
    struct Usuario *prox;      
} Usuario;

/* Nó da lista de livros */
typedef struct Livro {
    int id;                    /* código único*/
    char titulo[TAM];
    char autor[TAM];
    int ano;
    int status;                /* DISPONIVEL ou EMPRESTADO */
    char emailEmprestimo[TAM]; /* email de quem pegou; "" se disponível */
    struct Livro *prox;        /* ponteiro para o próximo livro */
} Livro;







int main(void) {

  
  return 0;
}
