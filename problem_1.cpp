#include <iostream>
using namespace std;
int main () {
    int f;
    cin>>f;
    for(int i=1;i<=f; i++){
        if(i%2!=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    for(int i=1; i<=f; i++){
        if(i%2==0){
            cout<<i<<" ";
    }
        
    }
        
    return 0;
}
