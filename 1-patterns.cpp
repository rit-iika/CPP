#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row and col: ";
    cin>>row>>col;
    cout<<"row is: "<<row<<" and col is: "<<col<<endl;
    for(int j=0;j<col;j++){
    for(int i=0;i<row;i++){
         cout<<"*";
        
    }
    cout<<endl;
    }



    return 0;
}