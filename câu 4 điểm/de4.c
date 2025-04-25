#include <stdio.h>

int main(){
	int a ,b ;
	printf("nhap vao 2 so nguyen duong: ");
	scanf("%d%d",&a,&b);
	
	int i,ucln,bcnn;
	for(i = a;i >= 1;i--){
		if(a % i == 0 && b % i == 0){
			ucln = i;
			break;
		}
	}
	bcnn = (a/ucln)*b;
	
	printf("ucln(%d,%d) = %d",a,b,ucln);
	printf("\nbcnn(%d,%d) = %d",a,b,bcnn);
}

	
