#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b, c, result;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  
  if (((a < 21)&&(b < 21)&&(c < 21))&&((a > -1)&&(b > -1)&&(c > -1))){
    result = (a * 0.5) + (b * 0.3) + (c * 0.2) + 0.5;
    printf("%d\n", result);
  }
  else{
    printf("NO\n");
    return 0;
  }
  return 0;
}
