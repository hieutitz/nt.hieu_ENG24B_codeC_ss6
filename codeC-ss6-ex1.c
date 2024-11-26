#include <stdio.h>
int main(){
	int n1,n2,n3,n4,n5, sum = 0;
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
	if (n1%2 != 0){
		sum += n1;
	}if (n2%2 != 0){
		sum += n2;
	}if (n3%2 != 0){
		sum += n3;
	}if (n4%2 != 0){
		sum += n4;
	}if (n5%2 != 0){
		sum += n5;
	}
	printf("Tong cac so le la: %d\n",sum);
	
	
	
}
