// 7: Find the maximum and minimum element of an array.

#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[],int n){
    int more = INT_MIN;

    for(int i = 0; i < n; i++){
        // more = max(more, arr[i]);

        if(arr[i] > more) more = arr[i];
    }
    return more;
}
int minElement(int arr[],int n){
    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        // mini = min(mini, arr[i]);

        if(arr[i] < mini) mini = arr[i];
    }
    return mini;
}
int main(){
     
    int arr[6] = {2,8,1,6,2,5};

    int max = maxElement(arr,6);
    int min = minElement(arr,6);

    cout << "Max: "<< max << endl << "Min: "<<min ;
    return 0;
}