#include<iostream>
using namespace std;
char val(char a,char b){
    if(a==b){
        return '0';
    }
    else{
        return '1';
    }
}
char flip(char a,char b){
     if(a==b){
        return '0';
    }
    else{
        return '1';
    }
}
string Grey (string binary){
    string grey="";
    grey+=binary[0];
    for(int i=0;i<binary.length()-1;i++){
        grey+=val(binary[i+1],binary[i]);
    }
    return grey;
     
}
string Binary(string grey){
    string binary="";
    binary+=grey[0];
    for(int i=1;i<grey.length();i++){
        binary+=flip(binary[i-1],grey[i]);
    }
    return binary;
}
int main(){
    string binary;
    string grey;
    int a;
    cout<<"For conversion from binary to grey. (PRESS 1)"<<endl;
    cout<<"For conversion from grey to binary. (PRESS 2)"<<endl;
    cin>>a;
    switch(a){
        case 1: 
            cout<<"Enter the binary number: ";
            cin>>binary;
            cout<<"Grey code:"<<Grey(binary);
            break;
        case 2:
            cout<<"Enter the grey number:";
            cin>>grey;
            cout<<"Binary code: "<<Binary(grey);
            break;
        default: cout<<"not an option";
    }
    return 0;
}