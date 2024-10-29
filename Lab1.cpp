#include <iostream>
using namespace std;
int main(){
    cout<<"Your password:";
    int password;
    cin >> password;

    if(password==1234){
        cout<<"Correct";
    }
    else{
        cout<<"Try again";  
    }
    return 0;
}
