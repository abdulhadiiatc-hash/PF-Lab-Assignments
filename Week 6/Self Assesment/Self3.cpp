#include<iostream>
using namespace std;
int main(){
    string word;
    int i=0, mod;
    cout<<"Enter a String: ";
    cin>>word;
    bool is_even=false;
    while (word[i]!= '\0')
    {
        i++;
    }
    mod = i % 2;
    if(mod == 0){
        is_even = true;
        cout<<"True";
    }else{
        cout<<"False";
    }
    
}