//
//  main.cpp
//  CSCI271-Week4-lab.cpp
//
//  Created by Carlos Gomez  on 2/7/26.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    
    string fullName;
    int birthMonth;
    int birthDay;
    string zodiac;
    

    cout << "Enter your full name: ";
    getline(cin, fullName);
    
    cout << "Enter birth month (1-12): ";
    cin >> birthMonth;
    
    cout << "Enter birth day: ";
    cin >> birthDay;
    
    if ((birthMonth == 1 && birthDay >=20) || (birthMonth == 2 && birthDay <=18))
        zodiac = "Aquarius";
    else if ((birthMonth == 2 && birthDay >=20) || (birthMonth == 3 && birthDay <=18))
        zodiac = "Pisces";
    else if ((birthMonth == 3 && birthDay >= 21) || (birthMonth == 4 && birthDay <= 19))
        zodiac = "Aries";
    else if ((birthMonth == 4 && birthDay >=20) || (birthMonth == 5 && birthDay <=20))
        zodiac = "Taurus";
    else if ((birthMonth == 5 && birthDay >=21) || (birthMonth == 6 && birthDay <=20))
        zodiac = "Gemini";
    else if ((birthMonth == 6 && birthDay >=21) || (birthMonth == 7 && birthDay <=22))
        zodiac = "Cancer";
    else if ((birthMonth == 7 && birthDay >=23) || (birthMonth == 8 && birthDay <=22))
        zodiac = "Leo";
    else if ((birthMonth == 8 && birthDay >=23) || (birthMonth == 9 && birthDay <=22))
        zodiac = "Virgo";
    else if ((birthMonth == 9 && birthDay >=23) || (birthMonth == 10 && birthDay <=22))
        zodiac = "Libra";
    else if ((birthMonth == 10 && birthDay >=23) || (birthMonth == 11 && birthDay <=21))
        zodiac = "Scoepio";
    else if ((birthMonth == 11 && birthDay >=22) || (birthMonth == 12 && birthDay <=21))
        zodiac = "Saggitarius";
    else if ((birthMonth == 12 && birthDay >=22) || (birthMonth == 1 && birthDay <=19))
        zodiac = "Capricorn";
    
    
    cout << "Hello, " << fullName <<"!" << " Your zodiac sign is: " << zodiac << endl;
    
    return EXIT_SUCCESS;
}

