#include <stdio.h>

int main(void) {

  int a, b;
  char ch;

  printf("Do you want to (Enter first letter):\n");
  printf("(A)dd, (S)ubtract, (M)ultiply, or (D)ivide?\n");

  do {
    printf("Your choice: ");
    ch = getchar();
     switch(ch) {
    case 'A': printf("%d", a + b);
      break;
    case 'S': printf("%d", a - b);
      break;
    case 'M': printf("%d", a * b);
      break;
    case 'D': if(b!=0) printf("%d", a / b);
  }
  } while(ch!='A' && ch!='S' && ch!='M' && ch!='D');
  
  printf("\n");

  printf("Enter first number: ");
  scanf("%d", &a);
  
  printf("Enter second number: ");
  scanf("%d", &b);

 

  return 0;
}
