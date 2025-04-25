#include <stdio.h>

int main(){
	int a[101],n,i;
	
	printf("nhap vao so phan tu cua day: ");
	scanf("%d",&n);
	
	for(i = 0;i < n;i++){
		printf("nhap vao phan tu a[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	int max = 1,j;
	
	//tao 1 mang co n phan tu va gan gia tri cua cac phan tu = 0
	int cnt[n];
	for(i = 0;i < n;i++){
		cnt[i] = 0;
	}
	
	for(i = 0;i < n;i++){
		for(j = i;j < n;j++){
			//dem so lan xuat hien cua 1 phan tu trong mang
			if(a[j] == a[i]){
				cnt[i]++;
			}
			
			//tim phan tu mang xuat hien nhieu nhat
			if(cnt[i] > max){
				max = cnt[i];
			}
		}
	}
	
	if(max == 1){
		printf("Cac so trong day deu xuat hien 1 lan");
	}
	else{
		for(i = 0;i < n;i++){
		    if(cnt[i] == max){
			    printf("So co so lan xuat hien nhieu nhat trong day la: %d",a[i]);
	        }
        }
	}
}
    
			
			
