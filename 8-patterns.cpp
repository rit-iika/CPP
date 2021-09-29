#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<"n is: "<<n<<endl;

    for(int row=1;row<=n;row++){

        for(int col=1;col<=n+1-row;col++){

            cout<<col<<" ";
        }
        cout<<endl;
    }



    return 0;
}