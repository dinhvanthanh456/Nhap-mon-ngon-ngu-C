//khoi khai bao
#include <stdio.h>

//khoi ham main
ind sum(int a, int b,int c);//khoi bao ham sum  
int main() {
int x = 1, y= 3, z= 2;
printf("tong: %d"sum(x,y,z));
return 0;
}
//khoi dinh nghia ham

ind sum(int a, int b,int c){
int d = a + b + c;
return d;
}	
