#include "bitree.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
using namespace std;

int 
main ()
{
  BiTree *b = CreateBiTree ();
  BiTree *auxb = CreateBiTree ();
  BiRecord br;
  int decide;
  double tempo = 0.0;
  
  cout << "De o tamanho da Arvore:\n";
  cout << "1 para 500, 10 para 5.000, 100 para 50.000, 1000 para 500.000\n";
  cin >> decide;

  decide = decide * 500;

  float f = 0.0;
  float decimal = 0.0;
 
  clock_t begin = clock();
  
  srand (time (NULL));
  for (int i = 0; i < decide; i++)
    {
      f = rand () % 100000;
      decimal = rand () % 1000;
      f = f - (decimal/1000);
      br.key = f;
      insertBiTree (&b, br);
    }
    
    clock_t end = clock();
    tempo += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "\n\nArvore Criada! Tempo gasto: " << tempo <<" segundos.\n\n";
    
    //Bicentral(b);
    tempo = 0.0;
    cout << "\n\nPesquisando numeros...\n\n";
    
    clock_t begin1 = clock();
  for (int i = 0; i < 10000; ++i)
    {
      auxb = CreateBiTree ();
      f = rand () % 100000;
      decimal = rand () % 1000;
      f = f - (decimal/1000);
      br.key = f;
      pesquisaBi(&b, &auxb, br);
      removeBiTree(&b, br);
    }
    
    clock_t end1 = clock();
    tempo += (double)(end1 - begin1) / CLOCKS_PER_SEC;
    cout << "\n\nTempo gasto para pesquisa: " << tempo <<" segundos.\n\n";
    
      //cout << "\n\n\nArvore final:\n\n";
      //Bicentral(b);
  return 0;
}
