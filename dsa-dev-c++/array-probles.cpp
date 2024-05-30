#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[],int size){
	for(int i=0;i<size;i++){
		cout << arr[i] <<" ";
	}
	cout << "\n";
}
void swapAlternate(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1 < size){
			swap(arr[i],arr[i+1]);
		}
	}
}

int uniuqInArray(int arr[],int size){
	/**
	 way 1
	*/
	
//	for(int i=0;i<size;i++){
//		int count = 1;
//		for(int j=0;j<size;j++){
//			if(arr[i]==arr[j] && i != j){
//				count ++;
//				break;
//			}
//		}
//		if(count==1){
//			return arr[i];
//		}
//	}
	
	/**
	way 2
	*/
	int ans = 0;
	for(int i=0;i<size;i++){
		ans = ans ^ arr[i];
	}
	return ans;
}

int dupicatesInArray(int arr[], int size){	


// ------------------ ONE ----
//	for(int i=0;i<size;i++){
//		for(int j=1+i;j<size;j++){
//			if(arr[i]==arr[j]){
//				return arr[j];
//				break;
//			}
//		}	
//	}
	// ------------ second ---------------
	
	int ans = 0;
	for(int i=0;i<size;i++){
		ans ^= arr[i];
	}
	
	
	for(int i=0;i<size;i++){
		ans ^=i;
	}
	return ans;
}

int intersectionOfTwoArr(int arr1[],int arr2[],int size1,int size2){
	
	// not a optimise
	int ans[size1 < size2 ? size1 : size2 ]; 
	int k = 0; // k for ans size 
	for(int i=0;i<size1;i++){
		// for first array
		for(int j=0;j<size2;j++){
			// second array
			
			if(arr1[i] < arr2[j]){
				break;
			}
			
			if(arr1[i]==arr2[j]){
				ans[k] = arr1[i];
				k++;	
				break;
			}
		}
	}
	for(int i=0;i<k;i++){
		cout << ans[i] << " " << endl;
	}
	return -1;
}
#include <vector>
int pairSum(int arr[],int size,int total){
//	int ansArr[size];
//	int k=0;
//	for(int i=0;i<size;i++){
//		for(int j=i+1;j<size;j++){
//			if(arr[i]+ arr[j] == total){
//				ansArr[k] =arr[i];
//				ansArr[k+1] = arr[j];
//				k+=2;				
//			}
//		}
//	}
//	ansArr.sort();
//	printArr(ansArr,sizeof(ansArr) /sizeof(ansArr[0]));
	
	// solition 2;
	vector<vector<int> > ans;
		for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]+ arr[j] == total){
				vector<int> temp;
				temp.push_back(min(arr[i],arr[j]));
				temp.push_back(max(arr[i],arr[j])); 
				ans.push_back(temp);			
			}
		}
	}
	sort(ans.begin(),ans.end());
	for (size_t i = 0; i < ans.size(); i++) {
  		for (int j = 0; j < ans[i].size(); j++) {
    		cout << ans[i][j] << " ";
  		}
  			cout << " "; // Add a space after each pair
		}

	return 0;
}


void tripplePairSum(int arr[],int size,int total){
	bool isFound = false;
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			for(int k=j+1;k<size;k++){
				if(arr[i] + arr[j] + arr[k] == total ){
					cout << arr[i] << " " << arr[j] << " " << arr[k] << " \n";
					isFound = true;
				}
			}
		}
	}
}

void sort0_1(int arr[],int size){
	int i = 0;
	int j = size - 1;
	int step = 0;
	
	while(i<j){
		cout << "step " << step++ << '\n';
		printArr(arr,size);
		while(arr[i]==0 && i<j){
			i++;
		}
		while(arr[j]==1 && i<j){
			j--;
		}
		
		if( i < j ){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}
//	printArr(arr,size);
}

void sort0_1_2(int arr[],int size){
	int left = 0;
	int mid = 0;
	int high = size - 1;
	int step = 0;
	while(mid<high){
		// 1. 0 <= 5 
		switch(arr[mid]){
			// arr[mid] = 1. 0

			case 0:
				swap(arr[left],arr[mid]);
				// wrong so swap ;
				left++;
				mid++;
			break;
			case 1:
				mid++;

			break;
			case 2:
				swap(arr[mid],arr[high]);
				high--;
			break;
		}
	}
}
int main(){
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {3,4};
//	int size1 = sizeof(arr1) / sizeof(arr1[0]);
//	int size2 = sizeof(arr2) / sizeof(arr2[0]);
//	cout << "Before Changeing alternate" << endl;
//	printArr(arr,size);
//	swapAlternate(arr,size);
//	cout << "\n After Changeing alternate" << endl;
//	cout << "Array" << endl;
//	printArr(arr,size);
//	cout <<  "InterSection Of array :- "<< intersectionOfTwoArr(arr1,arr2,size1,size2 );
//	cout << "Pair sum: - \n ";  
//	int s = 12;
//	int arr[] = {0,1,1,0,0,1};
	int arr[] = {0,1,2,1,1,0,2};
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "Calling function \n ";
	sort0_1_2(arr,size);
	printArr(arr,size);
	return 0;
}
