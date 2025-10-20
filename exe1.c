#include <stdio.h>
#include <stdlib.h>

int main(){
  int x, y, result;
  char operator;
  scanf("%d %c %d", &x, &operator, &y);

  if (operator == '/' && (y == 0)){
    printf("NO\n"); 
    return 0;
  }


  if (operator == '+'){
    result = x + y;
  }
  else if(operator == '-'){
    result = x - y;
  }
  else if(operator == '/'){
    result = x / y + 0.5;
  }
  else if(operator == '*'){
    result = x * y;
  }
  else{
    printf("NO\n");
    return 0;
  }
  printf("%d\n", result);
  return 0;
}
