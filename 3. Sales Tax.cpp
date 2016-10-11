//
//  3.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 11/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    float purchase = 95;
    float stateTax = 0.04;
    float countyTax = 0.02;
    float totalSales = purchase + ((purchase*stateTax) + (purchase*countyTax));
    
    cout<< "The total purchase is $95"<< endl;
    cout<< "If the state sales tax is 4% and the county sales tax is 2%, the total purchase is ";
    cout<<totalSales<<endl;
}
