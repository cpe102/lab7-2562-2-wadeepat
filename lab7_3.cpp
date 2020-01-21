#include<iostream>
using namespace std;

int main(){
    string status;
    int age;
    double money,height;
    cout<<"Enter age: ";
    cin>>age;

    if(age<=20){
        cout<<"Enter Height: ";
        cin>>height;
            if(height<160)
                status="UNFRIEND";
            else if(height<175)
                status="FRIEND";
            else{
                cout<<"Enter Money: ";
                cin>>money;
                    if(money>690000000){
                        status="MARRIED";
                    }else{
                        status="ONE-NIGHT-STAND";
                    }
            }
    }else{
        if(age<30){
            
            cout<<"Enter Money: ";
            cin>>money;
            if(money>100000000){
                status="BEST FRIEND";
            }else{
                status="UNFRIEND";
            }
        }else{
            status="UNFRIEND";
        }
    }
    cout<<status;
}