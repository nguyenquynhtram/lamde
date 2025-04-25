#include <stdio.h>

int main(){
	int i,j,n,m;
	char a[50][50];
	
	printf("nhap vao kich thuoc hinh chu nhat: ");
	scanf("%d%d",&n,&m);
	
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			if(i == 0||i == n - 1){
				a[i][j] = '*';
			}
			else if(j == 0 || j == m - 1){
				a[i][j] = '*';
			}
			else{
				a[i][j] = ' ';
			}
		}
	}
	for(i = 0;i < n;i++){
		for(j = 0;j < m;j++){
			printf("%c",a[i][j]);
		}
		printf("\n");
    }
}
