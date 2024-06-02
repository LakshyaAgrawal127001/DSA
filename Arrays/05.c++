// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

#include <bits/stdc++.h>
using namespace std;

int secondlargest(int arr[], int n)
{
    int firstele = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        firstele = max(firstele, arr[i]);
    }

    int secondele = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != firstele)
        {
            secondele = max(secondele, arr[i]);
        }
    }
    return secondele;
}
int main()
{

    int arr[5] = {28, 3, 16, 5, 2};

    int ans = secondlargest(arr, 5);
    cout << ans << endl;

    return 0;
}