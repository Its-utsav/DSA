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
	
	// --------------- uniuq element ----------------------
	// int arr[] = {3,5,3,6,5}; // 6;
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int ans = uniueqInArray(arr,size);
	// if(ans != -1 || ans == 0){
	// 		cout << "Uniueq in array is "<< ans;
	// }else {
	//		cout << "no Uniueq in array " ;
	// }
	// ----------------------------------------------------
	
	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	printArray(arr,size);
	int total = 5;
	pairSum(arr,size,total);
	 
	return 0;
}
