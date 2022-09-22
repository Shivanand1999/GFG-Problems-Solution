#include <bits/stdc++.h>
using namespace std;


// Time Complexity T = O(nlogn), S = O(n)
class Solution{
public:
    void quickSort(int arr[], int low, int high){
        if(low<high){

            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot-1);
            quickSort(arr, pivot+1, high);
        }
    }

    int partition(int arr[], int low, int high){
        int pivot = arr[low];
        int i = low;
        int j = high;
        
        while(i<j){
            while(arr[i]<=pivot && i<=high-1){
                i++;
            }

            while(arr[j]>pivot && j>=low){
                j--;
            }

            if(i<j)
                swap(arr[i], arr[j]);
        }
        swap(arr[j], arr[low]);
        return j;
    }

};

void printArray(int arr[], int n){
    for(int i=0; i<n;i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];

    Solution obj;
    cout << "Before Sorting Array: " << endl;
    printArray(arr, n);
    obj.quickSort(arr, 0, n-1);
    cout << "After Quick Sort Algorithm: " << endl;
    printArray(arr, n);
    return 0;
}