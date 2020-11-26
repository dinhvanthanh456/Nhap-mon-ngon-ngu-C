#include <stdio.h>

int main(){
  //khai bao bien
  double R;
  R = 2.5;
  //khai bao hang
  const double PI = 3.14;
  //khai bao nhieu bien
  double CHU VI,DIEN TICH;
  printf("R=%.1f", R);
  printf("\n");
  printf("PI:%.2f",PI);
  CHU VI = (double) 2*R*PI;
  DIEN TICH = (double) R*R*PI;
  printf("\n\n");
  printf("2*R*PI\tR*R*PI\n%.1f\t%.1f",CHU VI,DIEN TICH);
 
  getchar();
  return 0;
}
