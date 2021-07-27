#include <stdio.h>

int main() {
  int a = 0, b;
  int n;
  scanf("%d", &n);

  while (n--) {
    scanf("%d", &b);
    a += b;
  }
  
  printf("%d\n", a);
  return 0;
}