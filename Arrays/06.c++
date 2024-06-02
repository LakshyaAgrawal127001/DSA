// 6: Find the third smallest element in an array of unique elements size n. Where n>3.

#include <bits/stdc++.h>
using namespace std;

int thirdSmallest(int arr[], int n)
{

    int firstele = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        firstele = min(firstele, arr[i]);
    }
    
    int secondtele = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != firstele)
        {
            secondtele = min(secondtele, arr[i]);
        }
    }
    
    int thirdtele = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != secondtele)
        {
            thirdtele = min(thirdtele, arr[i]);
        }
    }

    return thirdtele;
}
int main()
{

    int arr[5] = {28, 3, 16, 5, 21};

    int ans = thirdSmallest(arr, 5);
    cout << ans << endl;

    return 0;
}