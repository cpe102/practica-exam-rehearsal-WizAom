#include<iostream>
using namespace std;
int main(){
    string name=" ";
    double i;
    cout << "What is your name?: ";
    cin >> name;
    cout << "What is your GPA?: ";
    cin >> i;
    if(i>=3.50){
        cout << name << " InW Jrim Jrim!!!";
    }else{
        cout << "Try harder, " << name << "!!!";
    }
    return 0;
}
