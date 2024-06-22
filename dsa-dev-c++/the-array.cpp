#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int minElement(int arr[],int size){
	int min = INT_MAX;
	for(int i=0;i<size;i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int maxElement(int arr[],int size){
	int max = INT_MIN;
	for(int i=0;i<size;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	return max;
}

bool linearSearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i] == key){
			return true;
			break;
		}	
	}
	return false;
}

void reverseTheArray(int arr[],int size){
	int temp = 0;
	int start = 0;
	int last = size - 1;
	while(start <= last){
		temp = arr[start];
		arr[start] = arr[last];
		arr[last] = temp;
		start++;
		last--;
	}
}

void swapAltenate(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1 < size){
			swap(arr[i],arr[i+1]);
		}
	}
}

int uniueqInArray(int arr[],int size){
	//  ----------------- broute force --------------
	// 
	/*
	int ans = -1;
	for(int i=0;i<size;i++){
		int count = 1;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j] && j!=i){
				count++;
			}
		}
		if(count==1) ans = arr[i];
	}
	return ans;
	
	*/
	// -------- optimal --------------
	int ans = 0;
	for(int i=0;i<size;i++){
		ans^=arr[i];
	}
	return ans;
}

void pairSum(int arr[],int size,int total){
	int ans[size];
	int k=0;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i] + arr[j] == total){
				ans[k] = arr[i];
				ans[k+1] = arr[j];
				k+=2; 
			}
		}
	}
	int n = sizeof(ans)/sizeof(ans[0]);
	sort(ans,ans + n);

	printArray(ans,n);
}

void sort01(int arr[],int size){
	int i=0,j = size -1;

	while(i<j){
		while(arr[i]==0 ){
			i++;
		}
		while(arr[j]==1){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}	
}

void sort012(int arr[],int size){
	int start = 0, mid = 0, end = size - 1;
	
	while(mid <= end){
		switch(arr[mid]){
			case 0:
				swap(arr[start],arr[mid]);
				start++;
				mid++;
				cout << "in case of 0 \n"  << endl;
				printArray(arr,size) ;
			break;
			case 1:
				mid++;
				cout << "in case of 1 \n" <<  endl;
				printArray(arr,size) ;
			break;
			case 2:
				swap(arr[end],arr[mid]);
				end--;
				cout << "in case of 2 \n"  << endl;
				 printArray(arr,size);
			break;
		}
	}	
}

bool binarySearch(int arr[],int size,int key){
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
	
	while(start <= end){
		if(arr[mid] == key){
			return true;
		}
		if(arr[mid] < key){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
		mid = start + (end - start) / 2;
	}
	
	return false;
}

int firstOccOfElem(int arr[],int size,int key){
	int start = 0,end = size - 1;
	int mid = start + (end - start) / 2;
	int index = 0;
	while(start <= end){
		// match
		if(arr[mid] == key){
			index = mid;
			end = mid - 1;
		}
		// >
		if(arr[mid] > key){
			end = mid -1;
		}
		if(arr[mid] < key){
			start = mid + 1;
		}		
		// <
		mid = start + (end - start) / 2;
	}
	return index;
}

int lastOccOfElem(int arr[],int size,int key){
	int start = 0,end = size - 1;
	int mid = start + (end - start) / 2;
	int index = 0;
	while(start <= end){
		// match
		if(arr[mid] == key){
			index = mid;
			start = mid + 1;
		}
		// >
		if(arr[mid] > key){
			end = mid -1;
		}
		if(arr[mid] < key){
			start = mid + 1;
		}		
		// <
		mid = start + (end - start) / 2;
	}
	return index;
}

int peakIndexInMountainArr(int arr[],int size){
	int start = 0 , end = size - 1;
	int mid = start + (end - start) / 2;
	printArray(arr,size);
	while(start < mid){
		if(arr[mid] < arr[mid + 1]){
			start = mid + 1; 
		}else{
			end = mid; 
		}
		mid = start + (end - start) / 2;
	}
	return arr[start];
}

int pivoitElmentInRotedSortedArray(int arr[],int size){
	int start = 0, end = size - 1;
	int mid = start + (end - start) / 2;
	
	while(start < mid ){
		if(arr[mid] >= arr[0]){
			start = mid + 1;
		}else{
			end = mid;
		}
		mid = start + (end - start) / 2;
	}
	
	return arr[end];
}

int serachElementInRotedSortedArray(int arr[],int size,int key){
	
}
int main(){
	
	// int arr[] = {12,13,15,14,0};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int minValue = minElement(arr,size);
	// int maxValue = maxElement(arr,size);
	// cout << "min value " << minValue << " " << "max value "<< maxValue << endl;
	// int key = 0;
	// int serach1Ans = linearSearch(arr,size,0);
	//	if(serach1Ans){
	//		cout << key <<" Found in array "<< endl;
	//	}else{
	//		cout << key <<" Not Found in array "<< endl;
	//	}
	
	// -----------------  Reverse the array ---------------
	// printArray(arr,size);
	// cout << "\n Reversing the array \n";
	// reverseTheArray(arr,size);
	// printArray(arr,size); 
	// ----------------------------------------------------
	
	// ---- ---------------- swap alternate ---------------
	// in odd size array last element reamin at same postions
	// printArray(arr,size);
	// cout << "swap alternete elemenent "<< endl;
	// swapAltenate(arr,size);
	// printArray(arr,size);
	// ----------------------------------------------------
	
	// --------------- uniuqe element ----------------------
	// int arr[] = {3,5,3,6,5}; // 6;
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int ans = uniueqInArray(arr,size);
	// if(ans != -1 || ans == 0){
	// 		cout << "Uniueq in array is "<< ans;
	// }else {
	//		cout << "no Uniueq in array " ;
	// }
	// ----------------------------------------------------
	
	// -------------- pair sum ----------------------------
	// int arr[] = {1,2,3,4,5};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// printArray(arr,size);
	// int total = 5;
	// pairSum(arr,size,total);
	// ----------------------------------------------------
	
	// -------------- sort 0 ,1 and 2 ---------------------
	// together all element
	//	int arr[] = {0,1,1,0,0,1,0};
	// int arr[] = {0,1,1,2,2,0,0,1,0};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// printArray(arr,size);
	// sort012(arr,size);
	// printArray(arr,size);
	// -------------------------------------------------------
	
	// ------------------- Binary Search ---------------------
	// int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,55,77,88};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int key = 10;
	// bool ans = binarySearch(arr,size,key);
	// if(ans){
	//	cout << key << " Found in array \n";
	// }else{
	// 	cout << key << " Not found in array \n";
	// }
	// -------------------------------------------------------
	
	// ------------------- Binary Search Problems ------------
	// 1. First And Last Occurence of Element in array and Count total occurences
	// int arr[] = {1,2,3,3,5};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int key = 3;
	// int firstOccurenceOfElement = firstOccOfElem(arr,size,key);
	// int lastOccurenceOfElement = lastOccOfElem(arr,size,key);
	// int totalOccurenceOfElement = lastOccurenceOfElement - firstOccurenceOfElement + 1;
	// cout << "First Occuerences " << firstOccurenceOfElement << " Last Occuerences " << lastOccurenceOfElement << " Total Occuerences " << totalOccurenceOfElement << endl;
	
	// 2. peak Index In Mountain Array
	// example 1. [0,1,0] -> ans 1
	// example 2. [0,1,2,3,2,1] -> ans 3
	// int arr[] = {0,1,2,3,2,1};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int ans = peakIndexInMountainArr(arr,size);
	// printArray(arr,size);
	//cout << "Peak Element in The array is " << ans << endl;
	
	// 3. Search Pivoit Element in roted sorted array
	// int arr[] = {7,9,12,14,1,2};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int ans = pivoitElmentInRotedSortedArray(arr,size);
	// cout << "Ans is " << ans;
	
	
	// 4. Search Element in Roted Sorted Array
	int arr[] = {7,9,1,2,3};
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 2;
	bool ans = serachElementInRotedSortedArray(arr,size,key);
	
	if(ans){
		cout << key << " Found in array \n";
	}else{
		cout << key << " Not Found in array \n";
	}
	// -------------------------------------------------------
	
	
	return 0;
}
