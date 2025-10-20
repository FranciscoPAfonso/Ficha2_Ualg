#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char sex;
    double peso, imc, alt;
    int altura;

    scanf("%c %lf %d", &sex, &peso, &altura);

    if ((sex != 'M' && sex != 'H') || peso < 0 || altura < 0){
        printf("NO\n");
        return 0;
    }

    alt = altura / 100.0;
    imc = peso / (alt * alt);

     printf("%.3f ", imc);

     if (sex == 'M') {
        if (imc >= 32.4) printf("YES\n");
        else printf("NO\n");
    } else if (sex == 'H') {
        if (imc >= 31.2) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}

