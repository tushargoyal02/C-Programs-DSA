#include<stdio.h>
int main(){
	int a[50],n,i,j,temp,f=0;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	printf("\nEnter %d elements :",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//logic of bubble sort
	for(i=0;i<n;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				f=1;
			}
		}
		if(f==0)
		break;
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	scanf("%d");
	return 0;
}
