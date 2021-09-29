#include<iostream>
using namespace std;
int main(){
int row,col;
cout<<"enter row and col: "<<endl;
cin>>row>>col;
cout<<"row is:"<<row<<"col is: "<<col<<endl;
cout<<"making hollow rectangle..."<<endl;

 for(int j=1;j<=col;j++){
for(int i=1;i<=row;i++){
 if(i==1 || i==row)
   cout<<"*";
   else if(j==1 || j==col)
       cout<<"*";
    else
    cout<<" ";
   
}
cout<<endl;
 }


    return 0;
}