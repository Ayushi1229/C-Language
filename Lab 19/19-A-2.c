#include <stdio.h>
void display(int a1, int a2)
 {
  printf("%d\n", a1);
  printf("%d\n", a2);
}

int main()
 {
  int aArray[] = {2, 8, 4, 12};
  display(aArray[1], aArray[2]); 
  return 0;
}
