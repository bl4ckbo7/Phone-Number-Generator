/*
PROGRAM NAME: PHONE NUMBER GENERATOR v0.1.2017
AUTHOR: ANDY KAWA(bl4ckbo7)
DATE CODED(1st Version): June 5, 2017
*/

#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <fstream>
#include "DigitsGenerator.h"
#include "digitsGen.cpp"

int main()
{
    system("color 0a");
    system("title PHONE NUMBER GENERATOR - by bl4ckbo7");
    srand(time(0));
    std::string centralstr[8], opr[2];
    const int sizeNum = 8;
    int SIMchoice, totalNums;

    welcome(); //welcome function to show the title and other information

    SIMcard();

    std::cin>>SIMchoice;
    std::cout<<"\n\n";

    std::cout<<"Total numbers generated? \n";
    std::cin>>totalNums;

    std::ofstream SaveNums;
    SaveNums.open("Phone Numbers Generated.txt", std::ios::out);

    switch(SIMchoice){

        case 1:
            for(int repeat=0; repeat<totalNums; repeat++){
                //generates the phone number of the given length
                for(int i=0; i<sizeNum; i++){
                    centralstr[i] = digitsGen();
                }

                //generates prefix operator codes for TIGO
                for(int i=0; i<2; i++){
                    opr[i] = operTigo();
                }

                //outputs the generated phone number prefixed (06********)
                std::cout<<"\n06";
                for(int j=0; j<4; j++){
                    std::cout<<opr[j]<<centralstr[j];
                    if(SaveNums){
                        SaveNums<<opr[j]<<centralstr[j];
                    }
                    else{
                        std::cout<<"\nSORRY! FILE NOT FOUND!\n";
                    }
                }

                std::cout<<"\n";
                //outputs the generated phone number prefixed (071*******)
                std::cout<<"\n071";
                for(int k=0; k<7; k++){
                    std::cout<<centralstr[k];
                    if(SaveNums){
                        SaveNums<<centralstr[k];
                    }
                    else{
                        std::cout<<"\nSORRY! FILE NOT FOUND!\n";
                    }
                }
                std::cout<<"\n";
            }
                SaveNums.close();
                std::cout<<"\n\n";

            break;

        case 2:
            for(int repeat=0; repeat<totalNums; repeat++){
                for(int i=0; i<sizeNum; i++){
                    centralstr[i] = digitsGen();
                }
                //generates prefix operator codes for AIRTEL
                std::cout<<"\n068";
                for(int i=0; i<7; i++){
                     std::cout<<centralstr[i];
                }

                std::cout<<"\n";

                std::cout<<"\n078";
                for(int i=0; i<7; i++){
                     std::cout<<centralstr[i];
                }
                std::cout<<"\n";
            }
                std::cout<<"\n\n";

            break;

        case 3:
            for(int repeat=0; repeat<totalNums; repeat++){
                for(int i=0; i<sizeNum; i++){
                    centralstr[i] = digitsGen();
                }

                //generates prefix operator codes for VODACOM
                for(int i=0; i<3; i++){
                    opr[i] = operVoda();
                }

                //outputs the generated phone number prefixed (074/075/076*******)
                std::cout<<"\n07";
                for(int j=0; j<4; j++){
                    std::cout<<opr[j]<<centralstr[j];
                }
                std::cout<<"\n";
            }
                std::cout<<"\n\n";

            break;

        case 4:
            for(int repeat=0; repeat<totalNums; repeat++){
                for(int i=0; i<sizeNum; i++){
                    centralstr[i] = digitsGen();
                }

                std::cout<<"\n073";
                for(int i=0; i<7; i++){
                     std::cout<<centralstr[i];
                }
                std::cout<<"\n";
            }
                std::cout<<"\n\n";

            break;

        case 5:
            for(int repeat=0; repeat<totalNums; repeat++){
                for(int i=0; i<sizeNum; i++){
                    centralstr[i] = digitsGen();
                }

                std::cout<<"\n062";
                for(int i=0; i<7; i++){
                     std::cout<<centralstr[i];
                }
                std::cout<<"\n";
            }
                std::cout<<"\n\n";

            break;

        case 6:
            for(int repeat=0; repeat<totalNums; repeat++){
                for(int i=0; i<sizeNum; i++){
                    centralstr[i] = digitsGen();
                }

                std::cout<<"\n077";
                for(int i=0; i<7; i++){
                     std::cout<<centralstr[i];
                }
                std::cout<<"\n";
            }
                std::cout<<"\n\n";

            break;
    }


getch();

return 0;
}
