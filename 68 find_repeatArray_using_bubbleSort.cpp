#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr){
	int n=arr.size();
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap (arr[j],arr[j+1]);
			}
			if(arr[j]==arr[j+1]){
			   cout<<arr[j]<<" ";
			}
		}
	}
}

int main(){
	vector<int> arr={55,48,29,55,52,26,26,57};
	bubbleSort(arr);
}

