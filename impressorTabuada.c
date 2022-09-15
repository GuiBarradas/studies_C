#include <stdio.h>

int main() {
  int num;
  printf("Qual tabuada você quer?");
  scanf("%d", &num);

  for(int i = 0; i <= 10; i++) {
    int multiplicacao = num * i;
    printf("%d x %d = %d\n", num, i, multiplicacao);
  }
}