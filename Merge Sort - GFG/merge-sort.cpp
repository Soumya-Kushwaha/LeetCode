//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void f(int arr[],int l,int r){
        int temp=arr[l];
        arr[l]=arr[r];
        arr[r]=temp;
    }
    void merge(int arr[], int l, int mid, int r)
    {
        int low = l;
        int high = mid + 1;
        int k = 0;
        
        vector<int>temp(r-l+1);
        
        while (low <= mid && high <= r){
            if (arr[low] <= arr[high]){
                temp[k]=arr[low];
                low++;
            }
            else{
                temp[k]=arr[high];
                high++;
            }
            k++;
        }
        while (low <= mid){
            temp[k]=arr[low];
            low++;
            k++;
        }
        while (high <= r){
            temp[k]=arr[high];
            high++;
            k++;
        }
        for (int i= l,j=0; i<=r; i++,j++)
            arr[i] = temp[j];
    }
    
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l >= r)
            return;
        
        int mid = l + (r - l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};


//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends