//
//  11.cpp
//  REVIEW BAGUS
//
//  Created by Mikha Yupikha on 11/10/2016.
//  Copyright © 2016 Mikha Yupikha. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{
    int carTank = 20;
    float avgMilesTown = 23.5;
    float avgMilesHighway = 28.9;
    
    float distanceTown = 1 * avgMilesTown;
    float distanceHigway= 1 * avgMilesHighway;
    
    cout<< "The distance the car can travel on one tank of gas when driven in town is "<<distanceTown<<endl;
    cout<< "the distance the car can travel on one tank of gas when driven in highway is "<<distanceHigway<<endl;
    
    return 0;
}