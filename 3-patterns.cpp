#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"prinitng inverted pyramid.."<<endl;
    cout<<"enter n: "<<endl;
    cin>>n;
    cout<<"n is:" <<n<<endl;

    for(int row=n;row>=1;row--){
        for(int i=1;i<=row;i++){
            cout<<"*";
        }
        cout<<endl;

    }
 



    return 0;
}