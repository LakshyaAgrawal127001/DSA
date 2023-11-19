#include <bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int size){
    
    int st = 0;
    int ed = size-1;

    while(st <= ed){
        swap(arr[st++],arr[ed--]);
    }
}

int main(){
    
    int arr[5] = {23,343,239,92,12};  

   reverse_array(arr,5);

   for(int i = 0; i < 5; i++){
    cout << arr[i] << " ";
   }
   cout << endl;

    return 0;
}
