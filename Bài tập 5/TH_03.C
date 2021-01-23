//khoi khai bao
#include <stdio.h>
//khoi khai bao
int a, b, c;
int So_lon_nhat_la();

int main(){
  
  
  printf("a = ");
  scanf("%d", &a);
  
  printf(" b = ");
  scanf("%d", &b);
  
  printf("c = ");
  scanf("%d", &c);
  int So_lon_nhat_la();
  
  return 0;
}
//khoi dinh nghia ham
int So_lon_nhat_la(){
  if (a >= b && a >= c) {
  	
	  printf(": %d",a);
	} else if (b >= c && b > c) {
		printf("%d",b);
		
		
	} else {
		printf("%d",c);
  }
return 1;
}
