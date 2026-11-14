#include <bits/stdc++.h>
using namespace std;
int main(){
    //prerequisite : sorted array
    //binary search is only for sorted array 
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    int target;
    cout << "Enter the value you want to target ";
    cin >> target;
    int low = 0 , high = n -1;
    int mid;
    for (;low <=high;){
        mid = (low+high)/2;
        if(arr[mid]==target){
            cout << "index: " << mid;
            return 0;
        }
        else if (arr[mid]<target){
            low = mid + 1;
        }
        else{
            high= mid -1;
        }
        
    }
    cout << "element not found"<< "\n";
}