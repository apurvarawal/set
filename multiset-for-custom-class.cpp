#include<iostream>
#include<set>
using namespace std;

class compare_value{
    public:
    
    bool operator()(pair<string,int> p1 , pair<string,int> p2){
        return p1.second<p2.second;
    }
};
int main(){
    pair<string,int> p1 = make_pair("A",100);
    pair<string,int> p2 = make_pair("G",40);
    pair<string,int> p3 = make_pair("R",90);

    multiset< pair<string,int> , compare_value> m;

    m.insert(p1);
    m.insert(p2);
    m.insert(p3);
    for(auto p : m){
        cout<<p.first<<" and "<<p.second<<endl;
    }
    return 0;
}