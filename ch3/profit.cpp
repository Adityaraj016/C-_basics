//enter cost price and selling price by keywords
//decide whether its a prifit or loss
//enter loss and profit 

#include<iostream>
using namespace std;

int main(){
    int cp,sp;
    cout<<"enter the cost price"<<endl;
    cin>>cp;
     cout<<"enter the selling price"<<endl;
    cin>>sp;

    if(sp>cp){
        cout<<"profit"<<endl;
        cout<<"the seller has got a profit of:"<<sp-cp<<endl;
    }
    else if(cp==sp){
        cout<<"no loss and no profit"<<endl;
    }
    else{
        cout<<"loss"<<endl;
        cout<<"the seller has loss of:"<<cp-sp<<endl;
    }
}