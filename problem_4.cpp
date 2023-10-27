#include <iostream>

using namespace std;
int main () {

    int f1, f2, r, sum=0;
    cin>>f1;

    f2=f1;
    while(f1>0 )

    {
        r = f1 % 10;

        f1 = f1 /10;
        sum = sum + r;

    }

    cout << sum << endl;
    if(sum % 5==0) {

        cout<<"Yes";
    }else{

        cout<<"No";
    }


    

    
    

    return 0;
}
