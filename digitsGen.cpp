#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include "DigitsGenerator.h"

void welcome(){
    std::string title[] = {"\t\tPhone", " Number", " Generator", " -", " by", " bl4ckbo7\n\n"};

    for(int j=0; j<6; j++){
        std::cout<<title[j];
        _sleep(200);
    }

    std::cout<<"\n\tVisit https://libphonenumber.appspot.com to prove if SIM number exists.\n";
    std::cout<<"\n\t\tContact Email: bl4ckbo7@protonmail.com\n";

    std::cout<<"\n\n";
}

void SIMcard(){
    std::cout<<"Choose the SIM Card to generate numbers: \n\n";
    std::cout<<"1) TIGO\n2) AIRTEL\n3) VODACOM\n4) TTCL\n5) HALOTEL\n6) ZANTEL\n\n";
}

char digitsGen(){

    static const char digits[] = "123456789";

    int stringLength = sizeof(digits)-1;

return digits[rand()%stringLength];
}

char operTigo(){
    static const char SIMdigitTigo[] = "57";

    int stringLength = sizeof(SIMdigitTigo)-1;

return SIMdigitTigo[rand()%stringLength];
}

char operVoda(){
    static const char SIMdigitVoda[] = "456";

    int stringLength = sizeof(SIMdigitVoda)-1;

return SIMdigitVoda[rand()%stringLength];
}
