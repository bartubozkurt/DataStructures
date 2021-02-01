#include<stdio.h>

int binarySearch(int arr[],int i, int begin,int end);

int main(){
	int array[] = {10,11,12,13, 14};
	int n  = sizeof(array) / sizeof(array[0]);
	int i  = 13;
	
	int result = binarySearch(array,i,0,n-1);
	
	if (result == -1)
	   printf("Not Found!");
    else
    	printf("Element  is found at %d.",result);
	
	
}

int binarySearch(int arr[],int i, int begin,int end){
	
	while(begin <= end){
		int mid = begin + (end - begin) / 2;
	
	
		if(arr[mid] == i)
	       return mid;
	   
   	    if(arr[mid] < i)
           begin = mid +1;
       
       else
          end = mid -1;
	}
	return -1;
}


