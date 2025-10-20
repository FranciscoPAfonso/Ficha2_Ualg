#include <stdio.h>

int compare(int a, int b) {
    if (a == b) return 0;

    int a_par = a % 2 == 0;
    int b_par = b % 2 == 0;

    if (a_par && !b_par) return 1;
    if (!a_par && b_par) return -1;

    if (a_par && b_par) {
        if (a == 0) {
            if (b < 0) return 1;
            else return -1;
        }
        if (b == 0) {
            if (a < 0) return -1;
            else return 1;
        }

        int a_div3 = a % 3 == 0;
        int b_div3 = b % 3 == 0;

        if (a_div3 && !b_div3) return 1;
        if (!a_div3 && b_div3) return -1;

        if (a_div3 && b_div3) {
            if (a > b) return 1;
            else return -1;
        } else {
            if (a > b) return -1;
            else return 1;
        }
    }

    int a_div5 = a % 5 == 0;
    int b_div5 = b % 5 == 0;

    if (a_div5 && !b_div5) return 1;
    if (!a_div5 && b_div5) return -1;

    if (a_div5 && b_div5) {
        if (a > b) return 1;
        else return -1;
    } else {
        if (a > b) return -1;
        else return 1;
    }
}

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    int result = compare(x, y);

    if (result == 0) printf("IGUAL\n");
    else if (result < 0) printf("MENOR\n");
    else printf("MAIOR\n");

    return 0;
}

