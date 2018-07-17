#include <stdio.h>

int main(){
	int i,j;
	int A[]={1,3,5,2,5,1,6,9,10,2};
	int n=sizeof(A)/sizeof(int);
	int key,k;
	printf("%d\n",n);
	for(k=0;k<n;k++){
		printf("%d\n", A[k]);
	}
	for(j=1;j<n;j++){
		key = A[j];
		for(i=j-1;i>=0 && A[i]>key;i--){
			A[i+1]=A[i];
		}
		A[i+1]=key;
	}
	int k1;
	for(k1=0;k1<n;k1++){
		printf("%d\n",A[k1]);
	}
	return 0;
}
