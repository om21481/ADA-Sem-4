#include<iostream>
#include<vector>
using namespace std;

int inversions = 0;

void merge_arrays(int arr[], int start, int end){

    if(start >= end){
        return;
    }

    int mid = start + (end-start)/2;

    int size1 = mid-start+1, size2 = end-mid;

    int arr1[size1];
    int arr2[size2];

    int index = start;
    for(int i=0;i<size1;i++){
        arr1[i] = arr[index++];
    }
    for(int i=0;i<size2;i++){
        arr2[i] = arr[index++];
    }

    // merging arrays and counting inversions
    int i=0, j=0;
    index = start;


    while(i<size1 && j<size2){
        if(arr1[i] <= arr2[j]){
            arr[index++] = arr1[i++];
        }
        else{
            arr[index++] = arr2[j++];
            // inversions need to be counted
            inversions += size1-i;
        }
    }

    while(i<size1){
        arr[index++] = arr1[i++];
    }
    while(j<size2){
        arr[index++] = arr2[j++];
    }

}

void merge_sort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int mid = start + (end-start)/2;

    merge_sort(arr, start, mid);
    merge_sort(arr, mid+1, end);

    merge_arrays(arr, start, end);
}

void print_arr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n = 0;
    cin>>n;

    int data[n];

    for(int i=0;i<n;i++){
        int element = -1;
        cin>>element;
        data[i] = element;
    }

    merge_sort(data, 0, n-1);


    cout<<endl<<inversions<<endl;
    return 0;
}