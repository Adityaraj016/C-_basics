//wap to check whether a charecter is alphabet or not
#include<iostream>
using namespace std;

int main(){
    char c; 
    cout<<"enter the charecter"<<endl;
    cin>>c;
    if(c>=65 && c<=90){
        cout<<"upper case alphbet"<<endl;
    }
    else if(c>=97 && c<=122){
        cout<<"lower case alphabet"<<endl;
    }
    else{
        cout<<"not an alphabet"<<endl;
    }
}