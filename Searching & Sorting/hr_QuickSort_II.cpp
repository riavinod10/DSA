#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> quicksort(vector<int> arr){
    if(arr.size()<=1) return arr;
    
    int pivot=arr[0];
    
    vector<int> left,equal,right;
    
    for ( int x: arr){
        if(x<pivot) left.push_back(x);
        if(x==pivot) equal.push_back(x);
        if(x>pivot) right.push_back(x);
    }
    
    left=quicksort(left);
    right=quicksort(right);
    
    vector<int> res=left;
    res.insert(res.end(),equal.begin(),equal.end());
    res.insert(res.end(),right.begin(),right.end());
    
    for(int x: res){
        cout<<x<<" ";
    }
    cout<<endl;
    return res;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr);
    return 0;
}
