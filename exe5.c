#include <stdio.h>
#include <stdlib.h>

int main(){
  int op, a, b, c;
  scanf("%d %d %d %d", &op, &a, &b, &c);

  int nums[3] = {a, b, c};

  if (op >= 0) {
      for (int i = 0; i < 2; i++) {
          for (int j = i + 1; j < 3; j++) {
              if (nums[i] > nums[j]) {
                  int temp = nums[i];
                  nums[i] = nums[j];
                  nums[j] = temp;
              }
          }
      }
  } else {
      for (int i = 0; i < 2; i++) {
          for (int j = i + 1; j < 3; j++) {
              if (nums[i] < nums[j]) {
                  int temp = nums[i];
                  nums[i] = nums[j];
                  nums[j] = temp;
              }
          }
      }
  }

  printf("%d %d %d\n", nums[0], nums[1], nums[2]);

  return 0;
}

