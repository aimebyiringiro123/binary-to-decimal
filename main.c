#include <stdio.h>

int main(void) {
  int decimal= 0, binary, base= 1,rem, num;
  printf("Enter a binary number ");
  scanf("%d", &binary);

  num= binary;

  while(binary != 0){
    rem= binary % 10;
    decimal= decimal + rem*base;
    binary= binary/10;
    base= base*2;
  }
  printf("Decimal equivalent of the binary number is %d", decimal);
  return 0;
}