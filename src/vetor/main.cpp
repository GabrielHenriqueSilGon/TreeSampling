#include "quick.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
using namespace std;

int 
main ()
{
  float *arr;
  
  int decide;
  double tempo = 0.0;
  
  int j = 0;
  
  cout << "De o tamanho da Arvore:\n";
  cout << "1 para 500, 10 para 5.000, 100 para 50.000, 1000 para 500.000\n";
  cin >> decide;

  decide = decide * 500;
  
  arr = new float [decide];

  float f = 0.0;
  float decimal = 0.0;
  int i = 0;
 
  clock_t begin = clock();
  
  srand (time (NULL));
  for (i = 0; i < decide; i++)
    {
      f = rand () % 100000;
      decimal = rand () % 1000;
      f = f - (decimal/1000);
      
      arr[i] = f;
    }
    
    quickSort(arr, 0, i - 1);
    
    clock_t end = clock();
    tempo += (double)(end - begin) / CLOCKS_PER_SEC;
    cout << "\n\nArvore Criada! Tempo gasto: " << tempo <<" segundos.\n\n";
    
    
    tempo = 0.0;
    cout << "\n\nPesquisando numeros...\n\n";
    
    clock_t begin1 = clock();
  for (int k = 0; k < 10000; k++)
    {
      cout << " a ";
      f = rand () % 100000;
      decimal = rand () % 1000;
      f = f - (decimal/1000);
      
      for (int o = 0; o < decide; o++) {
      if (arr[o] == f)
        cout << arr[o] << " ";
        else 
        arr[j] = arr[o]; j++; }
    }
    
    clock_t end1 = clock();
    tempo += (double)(end1 - begin1) / CLOCKS_PER_SEC;
    cout << "\n\nTempo gasto para pesquisa: " << tempo <<" segundos.\n\n";
      
  return 0;
}
