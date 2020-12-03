#include <stdio.h>

main(void) {
	
  int van,toan,v,t;
  printf("diem trung binh van va toan cua hoc sinh");
  printf("diem van=");
  scanf("%d,&v");
  printf("diem toan=");
  scanf("%d,&t");
  dtb=(v+t)/2;
  printf("v\t\dtb\n%d\t%0.1f"van,toan,dtb);
  return 0;
}
