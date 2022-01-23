//#include <iostream>
//using namespace std;
//int main() {
//	int n, i, a, max=-2147000000, min=2147000000;
//	cin>>n;
//	for(i=1; i<n; i++){
//		cin>>a;
//		if(a>max) max=a;
//		if(a<min) min=a;
//	}
//	cout<<max-min;
//	return 0;
//}
//#include <stdio.h>
//int main() {
//	int n, b, c, a;
//	scanf("%d-%d", &n, &a);
//	n=n/10000;
//	a=a/1000000;
//	if(a<3){
//		n=n+1899;
//		n=2019-n;
//		printf("%d ", n);		
//	}
//	else{
//		n=n+1999;
//		n=2019-n;
//		printf("%d ", n);		
//	}
//	if(a%2==0) printf("W");
//	else printf("M");
//	return 0;
//}
#include <stdio.h>
int main() {
	char a[100];
	int res=0, cnt=0, i;
	scanf("%s", &a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]>=49 && a[i]<= 57){
			res=res*10+(a[i]-48);
		} 
	}
	printf("%d\n", res);
	for(i=1; i<=res; i++){
		if(res%i==0) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
