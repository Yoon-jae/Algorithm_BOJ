#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	int n;
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		for(int j=n-i+1; j<n; j++)
			printf(" ");

		for(int k=i; k<=2*n-i; k++)
			printf("*");
		printf("\n");

	}


	return 0;
}


