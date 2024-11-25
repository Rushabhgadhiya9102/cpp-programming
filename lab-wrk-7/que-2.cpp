#include <iostream>
using namespace std;

int main(){

    int language, recharge;

    cout << "press 1 for English" << endl
         << "press 2 for Hindi" << endl
         << "press 3 for Gujarati" << endl << endl;

    cout << "select the language: ";
    cin >> language;

    switch(language){

        case 1:
             cout << "press 1 for Internet Recharge" << endl
                  << "press 2 for Top-up Recharge" << endl
                  << "press 3 for Special Recharge" << endl << endl;

                  cout << "select the recharge pack: ";
                  cin >> recharge;

                  switch(recharge){

                    case 1:
                        cout << "You have successfully done a Internet Recharge";
                       break; 

                    case 2:
                        cout << "You have successfully done a Top-Up Recharge";
                       break; 

                    case 3:
                        cout << "You have successfully done a Special Recharge";
                       break; 
                  }
             break; 

        case 2:
             cout << "Internet Recahrge ke liye 1 dabaiye" << endl
                  << "Top-up Recahrge ke liye 2 dabaiye" << endl
                  << "Special Recharge ke liye 3 dabaiye" << endl << endl;

                  cout << "select the recharge pack: ";
                  cin >> recharge;

                   switch(recharge){

                    case 1:
                        cout << "Aapne safaltapurvak Internet Recharge kar liya hai";
                       break; 

                    case 2:
                        cout << "Aapne safaltapurvak Top-Up Recharge kar liya hai";
                       break; 

                    case 3:
                        cout << "Aapne safaltapurvak Special Recharge kar liya hai";
                       break; 
                  } 
             break;

        case 3:
             cout << "Internet Recahrge mate 1 dabavo" << endl
                  << "Top-up Recahrge mate 2 dabavo" << endl
                  << "Special Recahrge mate 3 dabavo" << endl << endl; 

                  cout << "select the recharge pack: ";
                  cin >> recharge;

                   switch(recharge){

                    case 1:
                        cout << "Tame safaltapurvak Internet Recharge karyu chhe";
                       break; 

                    case 2:
                        cout << "Tame safaltapurvak Top-Up Recharge karyu chhe";
                       break; 

                    case 3:
                        cout << "Tame safaltapurvak Special Recharge karyu chhe";
                       break; 
                  }
             break;                 
    }     

    return 0;
}