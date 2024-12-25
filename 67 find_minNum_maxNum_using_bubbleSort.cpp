#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int> &arr){
	int n=arr.size();
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}

int main(){
	vector<int> arr={45,58,95,32,45,15,48,99,85,76};
	bubbleSort(arr);
	cout<<"MIN NO. :"<<arr.front()<<endl;
	cout<<"MAX NO. :"<<arr.back();
}

