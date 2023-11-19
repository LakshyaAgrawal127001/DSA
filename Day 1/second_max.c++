#include <bits/stdc++.h>
using namespace std;

int second_max(int arr[],int size){

    int more1 = INT_MIN;
    for(int i = 0; i < size; i++){
        more1 = max(more1,arr[i]);
    }

    int more2 = INT_MIN; 
    // int more2 = -1;
    for(int i = 0; i < size; i++){
        if(arr[i] != more1) more2 = max(more2,arr[i]);
    }

    return more2;
}

int main(){
   
   int arr[5] = {10,320,890,492,789};

   int ans = second_max(arr,5);

   cout << ans <<endl;

    return 0;
}
