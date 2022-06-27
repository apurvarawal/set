#include<iostream>
#include<set>
using namespace std;

typedef multiset <int> :: iterator IT;
int main(){
    // > it stores multiple elements that have same elements.
    // > stored in sorted manner, according to internal comparison
    // > values once inserted can't be mosified.
    // > associative container -- values are referred by their value and not by their index.
    // > underlying implementation is by BST.

    int arr[] = {10,10,40,20,30,70,70,50,30,30,30,30};
    int n = sizeof(arr)/sizeof(int);
    multiset <int> m(arr,arr+n);

    m.erase(70);

    m.insert(80);

    for(int a:m){
        cout<<a<<" ";
    }
    cout<<endl;
    cout<<m.count(10)<<endl;

    //find 
    auto it = m.find(30);
    cout<<*it<<endl;

    //find the range of same elements
    pair <IT,IT> p = m.equal_range(30);
    for(auto it = p.first; it!=p.second; it++){
        cout<<*it<<" ";
    }
    return 0;
}