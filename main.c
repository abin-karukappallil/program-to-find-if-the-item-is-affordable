#include <stdio.h>
void main() {
	float hundred,ten,one,price,sum;
	scanf("%f %f %f %f", &hundred,&ten,&one,&price);
	hundred = hundred * 100;
	ten = ten * 10;
	one = one * 1;
	sum = hundred + ten + one;
	if(sum>=price){
	printf("1");
	}
	else if(sum<price){
	printf("0");
	}
}