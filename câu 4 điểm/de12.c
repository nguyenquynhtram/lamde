#include <stdio.h>

int main(){
	double a,b,c,d,e,f;
	
	printf("nhap vao a,b,c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	printf("nhao vao d,e,f: ");
	scanf("%lf%lf%lf",&d,&e,&f);
	
	double dd = a*e - b*d;
	double dx = c*e - b*f;
	double dy = a*f - c*d;
	
	if(dd == 0){
		if(dx == 0 && dy == 0){
			printf("He phuong trinh co vo so nghiem!");
		}
		else{
			printf("He phuong trinh vo nghiem!");
		}
	}
	else{
		printf("He phuong trin co nghiem duy nhat: ");
		printf("\nx = %lf",dx/dd);
		printf("\ny = %lf",dy/dd);
	}
}
