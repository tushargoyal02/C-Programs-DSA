#include<stdio.h>
int main(){
	int a[50],i,j,loc,n,temp;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	printf("\nEnter %d elements:",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//selection sort
	for(i=0;i<n;i++){
		temp=a[i];
		loc=i;
		for(j=i+1;j<n;j++){
			if(a[j]<temp){
				temp=a[j];
				loc=j;
			}
		}o
		a[loc]=a[i];
		a[i]=temp;
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	scanf("%d");
	return 0;
}
