#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n;i++) cout << arr[i] <<" ";
}

void reverseArray(int i, int arr[], int n){
    if(i>=n/2){ 
        printArray(arr,n);
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1, arr, n);
}
int main()
 {
	//code
	int t;
	cin>>t;
	int n;
	while(t>0){
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++) cin>>arr[i];
    	reverseArray(0,arr,n);
    	cout << endl;
    	t--;
	}
    return 0;
}