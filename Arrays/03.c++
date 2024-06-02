// Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include <bits/stdc++.h>
using namespace std;
void inputArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}
int searchElement(int arr[], int n, int element){
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            return i;
        }
    }
        return -1; 
}
int main(){
    
    cout << "Enter the size of array" <<endl;
    int n;
    cin >> n;
    
    cout << "Enter the array eleement" <<endl;
    int arr[n];
    inputArray(arr,n);

    cout << "Search in element" <<endl;
    int ele; 
    cin >> ele;

    int ans = searchElement(arr,n,ele);
    cout << ans;

    return 0;
}