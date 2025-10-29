#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Any Number: ";
    cin>>num;
    cout<<endl;
    if(num&1){
        cout<<"Your Number "<<num<<" is Odd"<<endl;    
    } 
    else{ 
        cout<<"Your Number "<<num<<" is Even"<<endl;
    }
    return 0;
}