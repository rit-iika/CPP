#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    cout<<"n is: "<<n<<endl;

    for(int row=1;row<=n;row++){
        for(int i=1;i<=row;i++){
            cout<<count<<" ";
        }
        count++;
        cout<<endl;
    }




    return 0;
}