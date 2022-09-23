#include <bits/stdc++.h>
using namespace std;

/*
// Brute Force
// T = O(n*log(n)) + O(n)  S = O(n)
int removeDuplicates(int arr[], int n){
    set<int> s;
    for(int i=0; i<n;i++){
        s.insert(arr[i]);
    }
    int k = s.size();
    int j=0;
    for(int x: s){
        arr[j++] = x;
    }

    return k;
}
*/

// Two Pointer Approach: T = O(n), S = O(1)
int removeDuplicates(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }

    return i+1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << removeDuplicates(arr, n);
}