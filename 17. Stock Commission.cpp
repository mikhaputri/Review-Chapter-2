//
//  17.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 11/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    int shares = 750;
    int stockPrice = 35;
    float percentCommission = 0.02;
    
    float amountPaid = shares*stockPrice;
    float amountCommission = amountPaid*percentCommission;
    float totalAmount = amountPaid+amountCommission;
    
    cout<< "The amount paid for the stock alone is $"<<amountPaid<<endl;
    cout<<"The amount of the commission is $"<<amountCommission<<endl;
    cout<<"The total amount paid is $"<<totalAmount<<endl;
    
    return 0;
}
