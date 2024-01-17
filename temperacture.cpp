#include <bits/stdc++.h>

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        //°C = (°F − 32) x 5/9
        double Fahrenheit = celsius*1.80+32.00;
        double Kelvin = celsius + 273.15;
        // int arr = [Fahrenheit,Kelvin]
        vector<double> arr;
        
        arr.push_back(Kelvin);
         arr.push_back(Fahrenheit);
   return arr;
    }
};