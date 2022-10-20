#include "bitree.hpp"
#include <iostream>

using namespace std;

BiTree *
CreateBiTree ()
{
  return NULL;
}

bool
BiTVazia (BiTree ** t)
{
  return *t == NULL;
}

void
insertBiTree (BiTree ** t, BiRecord r)
{

  if (BiTVazia (t))
    {
      *t = (BiTree *) malloc (sizeof (BiTree));
      (*t)->esq = NULL;
      (*t)->dir = NULL;
      (*t)->reg = r;

    }
  else
    {

      if (r.key < (*t)->reg.key)
	{
	  insertBiTree (&(*t)->esq, r);
	}

      if (r.key > (*t)->reg.key)
	{
	  insertBiTree (&(*t)->dir, r);
	}

    }

}

void
pesquisaBi (BiTree ** t, BiTree ** aux, BiRecord r)
{

  if (*t == NULL)
    {
      //printf ("[ERROR]: Node not found!");
      return;
    }

  if ((*t)->reg.key > r.key)
    {
      pesquisaBi (&(*t)->esq, aux, r);
      return;
    }
  if ((*t)->reg.key < r.key)
    {
      pesquisaBi (&(*t)->dir, aux, r);
      return;
    }

  *aux = *t;
  cout << (*aux)->reg.key << " "; 
  
}


int
isInBiTree (BiTree * t, BiRecord r)
{

  if (t == NULL)
    {
      return 0;
    }

  return t->reg.key == r.key || isInBiTree (t->esq, r) || isInBiTree (t->dir, r);
}


void
antecessorBi (BiTree ** t, BiTree * aux)
{

  if ((*t)->dir != NULL)
    {
      antecessorBi (&(*t)->dir, aux);
      return;
    }

  aux->reg = (*t)->reg;
  aux = *t;
  *t = (*t)->esq;
  free (aux);
}


void
removeBiTree (BiTree ** t, BiRecord r)
{
  BiTree *aux;

  if (*t == NULL)
    {
      //printf ("[ERROR]: Record not found!!!\n");
      return;
    }

  if (r.key < (*t)->reg.key)
    {
      removeBiTree (&(*t)->esq, r);
      return;
    }
  if (r.key > (*t)->reg.key)
    {
      removeBiTree (&(*t)->dir, r);
      return;
    }

  if ((*t)->dir == NULL)
    {
      aux = *t;
      *t = (*t)->esq;
      free (aux);
      return;
    }

  if ((*t)->esq != NULL)
    {
      antecessorBi (&(*t)->esq, *t);
      return;
    }

  aux = *t;
  *t = (*t)->dir;
  free (aux);
}


void
Bipreordem (BiTree * t)
{
  if (!(t == NULL))
    {
      cout << t->reg.key << " ";
      Bipreordem (t->esq);
      Bipreordem (t->dir);
    }
}


void
Bicentral (BiTree * t)
{
  if (!(t == NULL))
    {
      Bicentral (t->esq);
      cout << t->reg.key << " ";
      Bicentral (t->dir);
    }
}

void
Biposordem (BiTree * t)
{
  if (!(t == NULL))
    {
      Biposordem (t->esq);
      Biposordem (t->dir);
      cout << t->reg.key << " ";
    }
}


/*
void
BiwidthPath (BiTree * t)
{
  Fila q;
  Item no, filho;

  FFVazia (&q);
  no.p = t;
  Enfileira (&q, no);

  while (!isVazia (&q))
    {

      Desenfileira (&q, &no);
      printf ("%d ", no.p->reg.key);

      if (no.p->esq != NULL)
	{
	  filho.p = no.p->esq;
	  Enfileira (&q, filho);
	  //printf(" Entrei esquerda! ");
	}

      if (no.p->dir != NULL)
	{
	  filho.p = no.p->dir;
	  Enfileira (&q, filho);
	  //printf(" Entrei direita! ");
	}

    }


}
*/
