#include <iostream>

using namespace std;
int main () {

    int n, f1=0, f2=1, f3, sum =1;
    cin>>n;

    cout<<f1<<" "<<f2<<" ";

    for(int i=2; i<n; i++){

        f3 = f1 + f2;
        cout<<f3<<" ";

        sum +=f3;
        f1=f2;

        f2 = f3;

    }
    cout<<"\n";

    cout<<sum;
    return 0;

}
