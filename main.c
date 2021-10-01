#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PRINTARRAY(a) printf("{");do{int i; for(i = 0; i < (sizeof(a)/sizeof(a[0])); i++) {if(i!=0){printf(", ");}printf("%d",a[i]);}printf("}\n");} while (0);

int main() {
  int array[10];
  array[0] = 0;
  int i;
  srand(time(NULL));
  for (i = 1; i < (sizeof(array) / sizeof(int)); i++) {
    array[i] = rand();
  }
  printf("{");
  for (i = 0; i < (sizeof array / sizeof(int)); i++) {
    if (i != 0) {printf(", ");}
    printf("%d",array[i]);
  }
  printf("}\n");

  int revarray[10];
  int *revpointer = revarray;
  i = 0;
  int j;
  for (j = (sizeof array / sizeof(int)) - 1; j >= 0; j--) {
    revpointer[j] = array[i];
    i++;
  }
  printf("{");
  for (i = 0; i < (sizeof revarray / sizeof(int)); i++) {
    if (i != 0) {printf(", ");}
    printf("%d",*(revpointer+i));
  }
  printf("}\n");
}
