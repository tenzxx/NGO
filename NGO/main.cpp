//
//  main.cpp
//  NGO
//
//  Created by tenzin choten on 19/12/23.
//

#include <iostream>
using namespace std;

int main() {
    float x,adult,children,senior,sale;
    
    cout<<"enter X \n";
    cin>>x;
    
    cout<<"Enter the sales done \n";
    cin>>sale;
    
    adult = x * 5;
    
    int temp;
    
    temp = (sale - adult);
    
    children = temp / 3;
    senior = children * 2;
    
    children = children * 2;
    senior = senior * 3;
    
    cout<<"children $"<<children<<endl;
    cout<<"adult $"<<adult<<endl;
    cout<<"senior $"<<senior<<endl;
    
    return 0;
}
