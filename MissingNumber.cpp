//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends


int missingNumber(int A[], int N)
{
    // Your code goes here
    int arrsum=0,num=0,sum=0;
    for(int j=0;j<N+1;j++){
        sum=sum+j;
    }
    for(int i=0;i<N-1;i++){
        arrsum=arrsum+A[i];
    }
    num=sum-arrsum;
    return num;
}