//
//  18.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 11/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include <iostream>
using namespace std;

int main ()
{
    double totalCust = 16500;
    float buyPerWeek = 0.15;
    float citrusCust = 0.58;
    
    float numCustBuyMoreThan1 = totalCust*buyPerWeek;
    float numCustBuyCitrus = totalCust*citrusCust;
    
    cout<<"Number of Customer that buy one or more energy drink per week "<<numCustBuyMoreThan1<<endl;
    cout<<"Number of Customer in the survey who prefer citrus-flavored "<<numCustBuyCitrus<<endl;
    
    return 0;
}