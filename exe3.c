#include <stdio.h>
#include <stdlib.h>

int main(){
  long long int time, dias, horas, minutos, segundos;
  scanf("%lld", &time);

  if (time < 0){
    printf("NO\n");
    return 0;
  }

  dias = (((time / 60) / 60) / 24);
  time -= dias * 60 * 60 * 24;
  horas = ((time / 60) / 60);
  time -= horas * 60 * 60;
  minutos = (time / 60); 
  time -= minutos * 60;
  segundos = time;
  printf("%lld:%lld:%lld:%lld\n",dias, horas, minutos, segundos);
  return 0;
}



