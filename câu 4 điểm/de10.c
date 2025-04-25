#include <stdio.h>

int main(){
	int a[101],n,i;
	printf("nhap vao so so nguyen cua day: ");
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		printf("nhap vao phan tu a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	int max = a[0],cnt = 0;
	for(i = 0;i < n;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	printf("\nmax = %d",max);
	for(i = 0;i < n;i++){
		if(a[i] == max){
			cnt++;
		}
	}
	printf("\nSo lan xuat hien cua %d la: %d",max,cnt);
	
	int min = a[0],dem = 0;
	for(i = 0;i < n;i++){
		if(min > a[i]){
			min = a[i];
		}
	}
	printf("\nmin = %d",min);
	for(i = 0;i < n;i++){
		if(a[i] == min){
			dem++;
		}
	}
	printf("\nSo lan xuat hien cua %d la: %d",min,dem);
}
	
