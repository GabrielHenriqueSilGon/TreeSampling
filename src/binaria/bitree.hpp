#ifndef BITREE_HPP 
#define BITREE_HPP

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct BiRecord BiRecord;
typedef struct BiTree BiTree;

struct BiRecord{
	float key;
};

struct BiTree{
	BiRecord reg;
	BiTree *esq, *dir;
};

BiTree* CreateBiTree();
bool BiTVazia(BiTree **t);
void insertBiTree(BiTree **t, BiRecord r);
void pesquisaBi(BiTree **t, BiTree **aux, BiRecord r);
int isInBiTree(BiTree *t, BiRecord r);

void removeBiTree(BiTree **t, BiRecord r);
void antecessorBi(BiTree **t, BiTree *aux);

void Bipreordem(BiTree *t);
void Bicentral(BiTree *t);
void Biposordem(BiTree *t);
void BiwidthPath(BiTree *t);

#endif