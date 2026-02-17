#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;
    cin >> n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    int left = 0,right = n - 1,mid = 0;
    bool fund = false;
    while(left <= right)
    {
        mid = (left + right)/2;
        if(arr[mid] == key)
        {
            cout << mid + 1 << endl;
            fund = true;
            break;
        }
        else if(arr[mid] < key)
        {
            left = mid;
        }
        else if(arr[mid] > key)
            right = mid;
    }
    if(!fund) cout << "NOT FOUND";

    return 0;
}