﻿//ourfunc.cpp --defining your own function
#include<iostream>
void simon(int);
int main(){
    using namespace std;
    simon(3);
    cout<<"Pick an integer *";
    int count;
    cin>>count;
    simon(count);
    cout<<"Done!"<<endl;

    return 0;

}