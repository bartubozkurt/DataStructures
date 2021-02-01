#include<stdio.h>

int main(){
	int  arr[10], i, x ,n;
	
	printf("How many elements: ");
	scanf("%d",&n);
	
	printf("Enter the array elements: ");
	for(i = 0; i < n; i++)
		  scanf("%d",&arr[i]);
	
	printf("Enter the element to search: ");
	scanf("%d",&x);
	
	for(i = 0; i<n;i++){
		if(arr[i] == x)
		   break;
	}
	
	if(i < n)
		 printf("Element found -- > %d", i);
	else
		printf("Element not found!!!");
	
	return 0;
}
