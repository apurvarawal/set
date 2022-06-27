#include<iostream>
#include<set>
using namespace std;
int main(){
    int arr[]={10,11,12,10,11};
    set <int> s;
    int n=sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    
    s.erase(10);
    auto it = s.find(11);
    s.erase(it);
    for(set <int> :: iterator it=s.begin(); it!=s.end(); it++){
        cout<<*(it)<<" ";
    }
    return 0;
}