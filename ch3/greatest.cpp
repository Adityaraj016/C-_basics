#include<iostream>
using namespace std;

int main(){
    int x,y,z;
    cout<<"enter the 1st number"<<endl;
    cin>>x;
    cout<<"enter the second number"<<endl;
    cin>>y;
    cout<<"enter the third number"<<endl;
    cin>>z;

    if(x>=y && x>=z){
        cout<<x<<" is greatest"<<endl;
        
    }
    else if(y>=x && y>=z){
        cout<<y<<" is greatest"<<endl;
    }
    else{
        cout<<z<<" is greatest"<<endl;
       
    }
    
}