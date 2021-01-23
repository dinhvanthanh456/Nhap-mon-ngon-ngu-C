#include<stdio.h>
int main()
{
    int a,b;
    long s; 
    s = 0;
    a = 1;
   printf("\nNhap b: ");
    scanf("%d", &b);

    while(a <= b)
    {
        s = s + a;
        a++;
    }
    printf("\nTong 1 + 2 + ... + %d la %ld: ", b, s);
    return 0;
}
