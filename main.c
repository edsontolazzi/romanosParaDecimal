#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

  char num[] = "III";

  scanf ("Digite o número a ser transformado: %s", num); 

  char um = 'I';
  char cinco = 'V';
  char dez = 'X';
  char cinq = 'L';
  char cem = 'C';
  char quin = 'D';
  char mil = 'M';

  int um1 = 1;
  int cinco1 = 5;
  int dez1 = 10;
  int cinq1 = 50;
  int cem1 = 100;
  int quin1 = 500;
  int mil1 = 1000;

  char nulo;
  int i = 0;
  int x[10];
  int res;

  i = strlen(num);

  for (int j; j < i; j++) {
    if (num[j] == um) {
      x[j] = um1;
    }
    if (num[j] == cinco) {
      x[j] = cinco1;
    }
    if (num[j] == dez) {
      x[j] = dez1;
    }
    if (num[j] == cinq) {
      x[j] = cinq1;
    }
    if (num[j] == cem) {
      x[j] = cem1;
    }
    if (num[j] == quin) {
      x[j] = quin1;
    }
    if (num[j] == mil) {
      x[j] = mil1;
    }
  }

  res = x[i];

  while (i != 0) {
    if(x[i] > x[i-1]) {
      res = res - x[i-1];
    }
    if(x[i] < x[i-1]) {
      res = res + x[i-1];
    }
    if(x[i] == x[i-1]) {
      res = res + x[i-1];
    }
    i--;
  }

  printf("%d\n", i);
  printf("%d\n", res);
  
  return 0;
}
