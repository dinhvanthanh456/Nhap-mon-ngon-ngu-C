#include <stdio.h>

int main() {
	 int all[5]={0,3,5,7,2};
  int h,sum= 0;
	
 
  for(int h = 0; h < 5; ++h) {
  printf("%d\n", all[h]);
  sum +=all[h];
  }
  printf("tong =%d",sum);   
  return 0;
}
