#include <bits/stdc++.h> 

int ans=0;
void merge(vector<long long> &arr,int low,int mid,int high){
    vector<long long>temp;
    int left=low,right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left++]);
        }else{
            temp.push_back(arr[right++]);
            ans+=mid-left+1;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left++]);
        
    }
    while(right<=high){
        temp.push_back(arr[right++]);
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void mergeSort(vector<long long> &arr,int low,int high){
    if(low>=high)
        return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    vector<long long> arrr;
    for(int x=0;x<n;x++)
        arrr.push_back(arr[x]);
    mergeSort(arrr,0,n-1);
    return ans;
}
