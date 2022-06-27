#include<iostream>
#include<set>
using namespace std;
int main(){
    set <pair <int,int>> s;
    s.insert(make_pair(10,1));
    s.insert(make_pair(10,2));
    s.insert(make_pair(20,1));
    s.insert(make_pair(20,3));
    s.insert(make_pair(30,5));
    s.insert(make_pair(10,7));
    s.insert(make_pair(10,8));

    s.erase(s.find(make_pair(10,2)));

    auto it=s.lower_bound(make_pair(10,8));  // lower_bound gives value, which is either greater or equal to it.
    cout<<it->first<<" and "<<it->second<<endl;

    auto it2 =s.upper_bound(make_pair(30,5));  //upper_bound gives value, which is strictly greater than it.
    cout<<it2->first<<" and "<<it2->second<<endl;

    for(auto it: s){
        cout<<it.first<<" and "<<it.second<<endl;
    }
    return 0;
}