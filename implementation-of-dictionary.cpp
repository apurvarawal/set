#include <iostream>
#include<set>

using namespace std;

int main()
{
    set <string> s;
    
    string input;
    cin>>input;
    
    while(input!="-1"){
        s.insert(input);
        cin>>input;
    }
    
    for(auto ch:s){
        cout<<ch<<endl;
    }
    return 0;
}
