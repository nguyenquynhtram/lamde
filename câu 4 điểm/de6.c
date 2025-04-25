#include <stdio.h>
#include <math.h>

int ktrasochinhphuong(int n){
	int s = sqrt(n), a = 0;
	if(s * s == n){
		a ++;
	}
	return a;
}

int main(){
	int n ;
	printf("nhap vao so nguyen duong n: ");
	scanf("%d",&n);
	int i,cnt = 0;
	printf("Cac so chinh phuong nho hon %d: ",n);
	for(i = 0;i < n;i++){
		if(ktrasochinhphuong(i)!= 0){
			cnt++;
			printf("%3d",i);
		}
	}
	printf("\nCo %d so chinh phuong nho hon %d!",cnt,n);
}

