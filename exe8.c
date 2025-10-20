#include <stdio.h>
#include <stdlib.h>

int main(){
  int i, refeicoes = 0;
  float preco = 2.49;
  float result = 0.0;

  scanf("%d", &i);
  
  if (i < 0){
    printf("NO\n");
    return 0;
  }

  for(int j = 1; j <= i; j++){  
    if (refeicoes >= 50) preco = 2.37;
    if (refeicoes >= 100) preco = 2.20;
    if (refeicoes >= 200) preco = 1.98;
    if (refeicoes >= 300) preco = 1.68;
    result += preco;
    refeicoes += 1;
  } 
  printf("%.2f\n", result);
  return 0;
}
