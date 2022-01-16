#include <stdio.h>
int digit(int b){
	if(b<10) return 1;
	else if(b<100) return 2;
	else if(b<1000) return 3;
	else if(b<10000) return 4;
	else if(b<100000) return 5;
	else if(b<1000000) return 6;
	else if(b<10000000) return 7;
	else if(b<100000000) return 8;
	else if(b<1000000000) return 9;
	else if(b<10000000000) return 10;
	else if(b<100000000000) return 11;
}
int main(){
	int n, a;
	scanf("%d", &n);
	printf("%d", digit(n));
	return 0;
}
