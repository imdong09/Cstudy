#include <stdio.h>
int main(){
    int a[200000], b, i, z, c=1, sum=0;
    scanf("%d", &b);
    for(i=1; i<=b; i++){
    	scanf("%d", &a[i]);
	}
		for(z=1; z<=b; z++){
			if(a[z]<=a[z+1]){
				c++;
			}
			else if(a[z]>a[z+1]) c=1;
			if(sum<c) sum=c;
		}
		printf("%d", sum);
	return 0;
}
