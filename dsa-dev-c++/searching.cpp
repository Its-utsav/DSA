// searching linear and binary 

// linear search WC TC - 0 (n)

#include<iostream>
using namespace std;
bool linearSearch(int a[],int size,int key){
	bool isFound = false;
	for(int i=0;i<size;i++){
		if(a[i] == key){
			isFound = true;
			break;
		}
	}
	return isFound ? true : false;
}
// binary search 0(log n)
int binarySearch1(int arr[],int size,int key){
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start /2);
	
	while(start <= end){
		if(arr[mid] == key){
			return mid;
		}
		 // go to right side
		if(key > arr[mid]){
			start = mid + 1;	
		}else{
			end = mid -1;
		}
		mid = start + (end - start /2);
	}
	
	return -1;
}

int main(){
	// linear search
//	int arr[] = {1,4,10,12,45,67,89,90}; // SC o(1)
//	int size = sizeof(arr) / sizeof(arr[0]);
	// binary search 
	int even[] ={1,2,3,4,5,6} ;
	int odd[] = {12,25,100,101};
	int sizeEven = sizeof(even) / sizeof(even[0]);
	int sizeOdd = sizeof(odd) / sizeof(odd[0]);
	int key = 101;
	
//	bool ans = linearSearch(arr,size,key);
//	if(ans){
//		cout << "Element "<< key <<" present in array \n" ;
//	}else{
//		cout << "Element " << key << " is not present in array \n";
//	}
	cout << key <<" Index in Even Array: " <<  binarySearch1(even,sizeEven,key) << endl; 
	cout << key << " Index in Odd Array: " <<  binarySearch1(odd,sizeOdd,key) << endl; 
	return 0;
}
