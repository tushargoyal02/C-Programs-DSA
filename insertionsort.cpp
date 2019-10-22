//insertion sort
#include<stdio.h>
int main(){
	int a[50],i,j,n,temp;
	printf("Enter no. of elements:");
	scanf("%d",&n);
	printf("\nEnter %d elements:",n);
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	//insertion sort
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		while(temp<a[j] && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nSorted array:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	scanf("%d");
	return 0;
}
