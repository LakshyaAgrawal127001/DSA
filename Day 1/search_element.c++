#include <bits/stdc++.h>
using namespace std;

int search_element(int arr[],int size,int element){

    for(int i = 0; i < size; i++){
        if(arr[i] == element) return i;
    }
    return -1;
} 

int main(){
   
   int arr[10] = {12,3432,123,23,5,643,723,8,923,10};
   
   
   int ans = search_element(arr,10,9);

   cout << ans << endl;

    return 0;
}
