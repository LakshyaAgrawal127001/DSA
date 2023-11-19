#include <bits/stdc++.h>
using namespace std;

void rotate_one(int arr[],int size){
   for(int i = 0; i < size ; i++) swap(arr[i],arr[size-1]);
}

int main(){
   
   int arr[5] = {1,2,3,4,5};
   
   rotate_one(arr,5);

   for(int i = 0; i < 5; i++) 
      cout << arr[i] << " ";

cout << endl;
    return 0;
}
