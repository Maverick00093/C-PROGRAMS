#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&arr){
	int n=arr.size();
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min]){            // > IN PLACE OF < FOR DESENDING
				min=j;
			}
		}
		swap(arr[i],arr[min]);
	}
}
void printArray(vector<int>&arr){
	for(int &val:arr){
		cout<<val<<" ";
	}
}
int main(){
	vector<int>arr={64,25,12,22,11};
	cout<<endl<<"unsorted : ";
	printArray(arr);
	selectionSort(arr);
	cout<<endl<<"sorted : ";
	printArray(arr);
}
