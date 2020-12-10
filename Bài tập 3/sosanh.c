#include <stdio.h>;

int main(){
	int A, B;
	printf("nhap A = ");
	scanf ("%d",&A);
	printf("nhap B = ");
	scanf ("%d", &B);
	if(A >B){
		printf("A > B", A,B );
	}else if (A == B){
		printf("A = B", A,B);
	}else {
	    printf("A < B", A,B );
	}
	
	getchar();
	return 0 ;
}
