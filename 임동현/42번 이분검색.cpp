#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int a, b, i, mid, lt, rt;
	scanf("%d %d", &a, &b);
	vector<int> c(a);
	for(i=1; i<=a; i++){
		scanf("%d", &c[i]);
	}
	sort(c.begin(), c.end());
	for(i=1; i<=a; i++){
		if(c[i]==b){
			printf("%d", i);
			break;
		}
	}
	return 0;
}
