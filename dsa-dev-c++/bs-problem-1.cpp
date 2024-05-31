#include<bits/stdc++.h>
using namespace std;

// first and last position of an element in sorted array
int firstOcc(int arr[],int size,int key){
	int start = 0;
	int end = size - 1;
	int mid = start + ( end - start ) / 2;
	int ans = -1; 
	while(start<=end){
		if(arr[mid]==key){
			ans = mid;
			end = mid - 1;
		}else if(arr[mid] > key){
			 end = mid -1;
		}else if(arr[mid] < key){
			start = mid + 1;
		}
		mid = start + ( end - start ) / 2;
	}
	return ans;  
}

int lastOcc(int arr[],int size,int key){
	int start = 0;
	int end = size - 1;
	int mid = start + ( end - start ) / 2;
	int ans = -1; 
	while(start<=end){
		if(arr[mid]==key){
			ans = mid;
			start = mid + 1;
		}else if(arr[mid] > key){
			 end = mid -1;
		}else if(arr[mid] < key){
			start = mid + 1;
		}
		mid = start + ( end - start ) / 2;
	}
	return ans;
}
int countTheOcc(int arr[],int size,int key){
	int firstIndex = firstOcc(arr,size,key);
	int lastIndex = lastOcc(arr,size,key);
	
	return (lastIndex - firstIndex) + 1; 
}
int peak(int arr[],int size){ // log n
	int start = 0 , end = size - 1;
	int mid = start + (end - start) / 2;
	
	while(start<end){
		if(arr[mid] < arr[mid + 1]){
			start = mid + 1;
		}else{
			end = mid;
		}
		mid = start + (end - start) / 2;
	}
	return arr[start];
}
int main(){
//	int arr[] = {1,2,2,3,3,4};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int key = 3;
//	cout << "The First occurence of " << key << " at " << firstOcc(arr,size,key) << " Index \n";
//	cout << "The Last occurence of " << key << " at " << lastOcc(arr,size,key) << " Index \n";
//	cout << "Total occurence of " << key <<  " is " << countTheOcc(arr,size,key) << "\n";
	int arr[] = {2,3,4,5,1};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Peak of " << peak(arr,size) << '\n';
	return 0;
}


