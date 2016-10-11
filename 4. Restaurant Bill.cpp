//
//  4.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 11/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    double meal = 88.67;
    double mealTax = 0.0675;
    double tipCharge = 0.2;
    
    double mealCost = meal + (meal*mealTax);
    double taxAmount = meal*mealTax;
    double tipAmount = mealCost*tipCharge;
    double totalBill = mealCost + tipAmount;
    
    cout<< " The meal cost is "<< mealCost<< endl;
    cout<< " The tax amount is "<< taxAmount<<endl;
    cout<< " The tip amount is "<<tipAmount<<endl;
    cout<< " The total bill is "<<totalBill<<endl;
    
    return 0;
    
}