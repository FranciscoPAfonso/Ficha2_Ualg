#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fidelidade = 0, incidentes = 0, idade = 0, penalizacao = 0;
float mensalidade = 0.0;

int main(){
  scanf("%f %d %d %d", &mensalidade, &fidelidade, &incidentes, &idade);
  
  if(mensalidade < 0 || fidelidade < 0 || incidentes < 0 || idade < 0){
    printf("NO\n");
    return 0;
  }
  
  if(incidentes > fidelidade || fidelidade > idade){
    printf("NO\n");
    return 0;
  }

  penalizacao -= fidelidade / 5;
  
  if (incidentes > 4){
    penalizacao -= incidentes / 5;
  }
  
  penalizacao += 5 * ceil(idade / 10.0);   

  if(mensalidade < 0){
    printf("NO\n");
    return 0;
  }  

  mensalidade += mensalidade * (penalizacao / 100.0);

  mensalidade = ceil(mensalidade * 100) / 100;

  printf("%.2f\n", mensalidade);
  return 0;
}

