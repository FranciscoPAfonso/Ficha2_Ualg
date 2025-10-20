#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int a, b, c, d;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if ((a > 20) || (b > 20) || (c > 20)){
    printf("NO\n");
    return 0;
  }
  if ((a < 0) || (b < 0) || (c < 0)){
    printf("NO\n");
    return 0;
  }

  d = round((a * 0.4)+ (b * 0.6));

  if (d >= 9.5){
    if (c > d) printf("%d\n", c);
    else printf("%d\n", d);
    return 0;
  }
  else{
    printf("%d\n", c);
    return 0;
  }

  return 0;
}
