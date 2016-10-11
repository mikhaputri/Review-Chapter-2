//
//  8.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 11/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    float price1 = 15.95,
    price2 = 24.95,
    price3 = 6.95,
    price4 = 12.95,
    price5 = 3.95;
    float salesTax = 0.07;
    
    float subtotal = price1 + price2 + price3 + price4 + price5;
    float totalsalesTax = subtotal*salesTax;
    float total = subtotal + totalsalesTax;
    
    cout<<"Here is the list of the five items you purchased: "<<endl;
    cout<<"Price of item 1 = $"<< price1<<endl<< "Price of item 2 = $"<<price2<<endl<< "Price of item 3 = $"<<price3<<endl<< "Price of item 4 = $"<<price4<<endl<< "Price of item 5 = $"<<price5<<endl;
    cout<<"The amount of sales tax is $"<<totalsalesTax<<endl;
    cout<<"The total is $"<<total<<endl;
    
    return 0;
    
}
