//
//  13.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 11/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    float percentProfit = 0.35;
    float productPrice = 14.95;
    
    float sellingPrice = productPrice + (productPrice*percentProfit);
    
    cout<< "The selling price of a circuit board that costs $14.95 is $"<<sellingPrice<<endl;
    
    
    return 0;
}