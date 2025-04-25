#include <stdio.h>
#include <math.h>

int ktrasonto(int n){
	int i,s = 0;
	for(i = 2;i < n;i++){
		if(n % i == 0){
			s += 1;
		}
	}
	return s;
}			
	
int main(){
	int i,n,s,cnt = 0;
	printf("nhap vao so nguyen duong n: ");
	scanf("%d",&n);
	
	if( n == 1||n == 2){
		printf("Khong co so nguyen to nao be hon %d",n);
	}
	else{
		printf("Cac so nto be hon %d la: ",n);
	    for(i = 2;i < n;i++){
		    s = ktrasonto(i);
		    if(s == 0){
			    cnt += 1;
			    printf("%3d",i);
		    }
	    }
	    printf("\nCo %d so nguyen to be hon %d",cnt,n);
	}
}
	
