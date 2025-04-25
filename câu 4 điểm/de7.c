#include <stdio.h>

int main(){
	int a[101],b[101],c[101],x,n,i;
	
	printf("nhap vao so x: ");
	scanf("%d",&x);
	
	printf("nhap vao so so nguyen cua day: ");
	scanf("%d",&n);
	printf("nhap vao day so nguyen: ");
	for(i = 0; i < n;i++){
		scanf("%d",&a[i]);
	}
	
	int cnt = 0,dem = 0;
	for(i = 0; i < n;i++){
		if(a[i] < x){
			b[cnt] = a[i];
			cnt ++;		
		}
		else if(a[i] > x){
			c[dem] = a[i];
			dem++;
		}
	}
	
	printf("Co %d so nho hon %d!",cnt,x);
	printf("\nCac so trong day nho hon %d la: ",x);
	for(i = 0;i < cnt;i++){
		printf("%-3d",b[i]);
	}
	
	printf("\nCo %d so lon hon %d!",dem,x);
	printf("\nCac so trong day lon hon %d la: ",x);
	for(i = 0;i < dem;i++){
		printf("%-5d",c[i]);
	}
}	
	
		
