// 2: Calculate the average of elements in an array of size 18.


#include <bits/stdc++.h>
using namespace std;

int sumofArrays(int arr[],int n){
    int ans = 0;

    for(int i = 0; i < n; i++){
        ans += arr[i];
    }
    return ans;
}

double averageofArray(int ans, int n){
    double result = ans / n;

    return result;
}
int main(){

    int arr[18] = {1,2,34,234,23,23,12,18,16,28,21,25,29,23,92,12,82,45};

    int ans = sumofArrays(arr,18);
    cout << "Sum " << ans <<endl;

    double average = averageofArray(ans,18);
    cout << "Average " << average <<endl;


    return 0;
}