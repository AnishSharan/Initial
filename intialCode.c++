#include<bits/stdc++.h>
using namespace std;

bool main()
{
    cout<<"Enter an array of size 5";
    int arr[5];     // initilize array
    for(int i=0;i<5;i++)    
    {
        cin>>arr[i];    // take input
    }
    sort(arr,arr+5);    // sort array
    cout<<"The sorted array is ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];    // printing the array
    }
    reverse(arr,arr+n);
    cout<<"The reversed array is ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];    // printing the array
    }
    // End of program
}