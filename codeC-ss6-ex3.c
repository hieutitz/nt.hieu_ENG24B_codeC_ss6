#include <stdio.h>

int main(){
	int correctPass = 12345;
	int pass;
	do{
		printf("Nhap mat khau la so co 5 chu so:\n");
	    scanf("%d",&pass);
	      if (pass==correctPass){
		printf("mat khau dung\n");
	      }else{
		printf("chua chinh xac\n");
	    }
	 } while (pass!=correctPass);
	return 0;
}
