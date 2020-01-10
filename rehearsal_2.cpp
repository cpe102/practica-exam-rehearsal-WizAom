#include<iostream>
using namespace std;
int main(){
    int i=0;
    double x,sum=0;
    while(i>=0){
        cout << "Enter x: ";
        cin >> x;
        if(x!=0){
            if(x>0){
            sum=sum+x;
            }
        }else{
            cout << "sum = " << sum;
            return 0;
        }
    }
}