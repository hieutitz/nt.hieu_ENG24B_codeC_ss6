#include <stdio.h>
int main(){
	int n1,n2,n3,n4,n5, count1=0, count2=0;
	printf("Nhap so nguyen thu 1:\n");
	scanf("%d",&n1);
	printf("Nhap so nguyen thu 2:\n");
	scanf("%d",&n2);
	printf("Nhap so nguyen thu 3:\n");
	scanf("%d",&n3);
	printf("Nhap so nguyen thu 4:\n");
	scanf("%d",&n4);
	printf("Nhap so nguyen thu 5:\n");
	scanf("%d",&n5);
	if ( n1 % 2 == 0){
		count2++;
	}else {
		count1++;
	}
	if ( n2 % 2 == 0){
		count2++;
	}else {
		count1++;
	}
	if ( n3 % 2 == 0){
		count2++;
	}else {
		count1++;
	}
	if ( n4 % 2 == 0){
		count2++;
	}else {
		count1++;
	}
	if ( n5 % 2 == 0){
		count2++;
	}else {
		count1++;
	}
	printf("So so chan: %d\n", count2);
	printf("So so le: %d\n", count1);
	
	return 0;
}

