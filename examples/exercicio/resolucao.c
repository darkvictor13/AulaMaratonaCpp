#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

struct no {
    uint32_t info;
    struct no *esq; // subárvore esquerda
    struct no *dir; // subárvore direita
};

typedef struct arvore {
    struct no *raiz;
    uint32_t quantidade;
}Arvore;

Arvore* criaArvore() {
    Arvore *a = (Arvore *) malloc(sizeof(Arvore));
    a->raiz = NULL;
    a->quantidade = 0;
    return a;
}

struct no *criaNo(uint32_t info) {
    struct no *novo = (struct no *) malloc(sizeof(struct no));
    novo->info = info;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

bool isVazia(Arvore *a) {
    return a->raiz == NULL;
}

void insere (Arvore *a, uint32_t x) {
    if (isVazia(a)) {
        a->raiz = criaNo(x);
        a->quantidade++;
    } else {
        struct no *aux = a->raiz;
        struct no *ant = NULL;
        while (aux != NULL && aux->info != x) {
            ant = aux;
            if (x < aux->info) {
                aux = aux->esq;
            } else {
                aux = aux->dir;
            }
        }
        // insere somente em uma folha caso não tenha achado o valor
        if (aux == NULL) {
            aux = criaNo(x);
            if (x < ant->info) {
                ant->esq = aux;
            } else {
                ant->dir = aux;
            }
            a->quantidade++;
        }
    }
}

void printInOrderRec(struct no *n) {
    if (n != NULL) {
        printInOrderRec(n->esq);
        printf("%u ", n->info);
        printInOrderRec(n->dir);
    }
}

void printInOrder(Arvore *a) {
    if (isVazia(a)) {
        printf("Arvore vazia");
    }else {
        printInOrderRec(a->raiz);
    }
    printf("\n");
}

int main () {
    uint32_t size, x;
    Arvore *a = criaArvore();
    for (scanf("%u", &size); size > 0; size--) {
        scanf("%u", &x);
        insere(a, x);
    }

    printf("%u\n", a->quantidade);
    
    return 0;
}