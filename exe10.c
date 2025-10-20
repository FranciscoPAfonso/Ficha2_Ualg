#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  char c1, c2, c3;
  int nota_global;
  int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;

  scanf(" %c", &c1);
  scanf(" %c", &c2);
  scanf(" %c", &c3);
  scanf(" %d", &nota_global);  
  
  char notas[] = {c1, c2, c3};
  for(int i = 0; i < 3; i++){
    switch (notas[i]) {
      case 'A': countA++; break;
      case 'B': countB++; break;
      case 'C': countC++; break;
      case 'D': countD++; break;
      case 'E': countE++; break;
      default: printf("NO\n"); return 0;
    }
  }
  if (nota_global < 0 || nota_global > 20){
    printf("NO\n");
    return 0;
  }

  if (nota_global == 20){
    if (countA == 3){ printf("OK\n");return 0;}
    else{printf("NOT OK\n");return 0;}
  }
  else if (nota_global == 19){
    if (countA == 2 && countB == 1){printf("OK\n");return 0;}
    else{printf("NOT OK\n");return 0;}
  }
  else if (nota_global == 17 || nota_global == 18){
    if ((countB == 2 && countA == 1) || (countB == 3)){printf("OK\n");return 0;}
    else{printf("NOT OK\n");return 0;}
  }
  else if (nota_global >= 14 && nota_global <= 16){
    if (countC >= 1 && ((countA == 2 || countB == 2) || (countA == 1 && countB == 1))){printf("OK\n");return 0;}
    else{printf("NOT OK\n");return 0;}
  }
  else if (nota_global >= 10 && nota_global <= 13){
    if (countD >= 1 && countE == 0){printf("OK\n");return 0;}
    else{printf("NOT OK\n");return 0;}
  }
  else{
    if (countE > 0){printf("OK\n");return 0;}
    else{printf("NOT OK\n");return 0;}
  }


  return 0;
}
