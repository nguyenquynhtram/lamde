#include <stdio.h>

int main(){
	int a = 1,b = 1;
	int i,n,s;
	printf("nhap vao n(n>2): ");
	scanf("%d",&n);
	
	for(i = 1;i <= n -2;i++){
		s = a + b;
		a = b;
		b = s;
	}
	printf("f(n) = %d",s);
}

//cach2
#include <stdio.h>

int fibonacci(int n){
	if(n == 1||n == 2){
		return 1;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}1
	
int main(){
	int n;
	printf("nhap vao n: ");
	scanf("%d",&n);
	
	printf("f(n) = %d",fibonacci(n));
}
