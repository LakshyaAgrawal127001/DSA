// 1: Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;

void userinputfn(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int sumOfarray(int arr[], int n)
{
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    return ans;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Enter the array number" << endl;
    int arr[n];

    userinputfn(arr, n);
    printArray(arr, n);
    int ans = sumOfarray(arr, n);
    cout << ans << endl;

    return 0;
}