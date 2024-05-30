#include<iostream>
using namespace std;
void minMax(int arr[],int n){
	int max = INT_MIN;
	int min = INT_MAX;
	for(int i=0;i<n;i++){
		if(arr[i] > max ){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	cout << "min value " << min <<"\n max value " << max  << endl;
}
// scopes
void updateArr(int arr[],int size){
	cout << "First Value (address) of arr" << arr << endl;
	arr[0] = 123456; 
	cout << "Inside the update function \n";
	for(int i =0 ;i<size;i++){
		cout << arr[i] << " ";
	}
	cout << "Update function OVER \n";	
}
int sumOfArray(int arr[],int size){
	int sum = 0;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	return sum;
}
bool linearSearch(int a[],int size,int key){
	for(int i=0;i<size;i++){
		if(a[i]==key){
			return true;
			break;
		}
	}
	return false;
}

void printArr(int arr[],int size){

	for(int i=0;i<size;i++){
		cout << arr[i] << " ";
	}
}

void reverseArr(int arr[],int size){
	
	
	int start = 0;
	int end = size-1;
	
	int i = 0;
	
	while(start <= end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main(){
//	int arr[] = {1,2,3,4,5};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	minMax(arr,size);
//	cout << "Before calling function \n";
//	updateArr(arr,size);
//	cout << "After calling function \n";
//		for(int i =0 ;i<size;i++){
//		cout << arr[i] << " ";
//	}
//	int ans = sumOfArray(arr,size);
//	cout << "Addition of Array Element " << ans << '\n';



//	int arrSize ;
//	cout << "Enter The size of Array :";
//	cin >> arrSize;
//	
//	int arr[arrSize];
//	cout << "Enter " << arrSize << " Elements \n";
//	for(int i=0;i<arrSize;i++){
//		cin >> arr[i];
//	}
//	int number ;
//	cout << "Enter The number you need to find : ";
//	cin >> number;
//	
//	int size = sizeof(arr) / sizeof(arr[0]);
//	bool ans = linearSearch(arr,size,number);
//	if(ans){
//		cout << "Element found in array " << '\n';
//	}else{
//		cout << "Element not found in array " << '\n';
//	}

	int arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Before Reverece array \n";
	printArr(arr,size);
	cout << "After Reverece array \n";
	reverseArr(arr,size);
	printArr(arr,size);	
	
	return 0;
}
