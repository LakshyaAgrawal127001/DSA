#include<bits/stdc++.h>
using namespace std;

int missing_no(int arr[],int size){
    int res = size * (size + 1)/2;
    int sum = 0;
    for(int i = 0; i < size-1; i++){
       sum += arr[i];
    }

    int ans = res - sum;

    return ans;
}

int main(){
    int arr[6] = {1,3,4,5,6};

    int ans = missing_no(arr,6);

    cout << ans << endl; 
    return 0;
}
