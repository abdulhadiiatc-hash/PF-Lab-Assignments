#include<iostream>
using namespace std;
void input(string &line){  //string pass by reference leni hai taky direct uski value main waly variable ma store ho
    cout<<"Enter a line: ";
    getline(cin, line);
}
void print(string line){
    for(int i=0;i<line.length();i++){
        cout<<line[i];
    }
}
int main(){
    string line;
    input(line);
    print(line);
    return 0;    
}