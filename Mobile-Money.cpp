#include <iostream>
using namespace std;

int main(){
    const int defaultpin = 0000;
    const int defaultbalance = 1000;
    int attempts = 0;
    int amount;
    int pin, cpin, npin;
    char Y, N, y, n;
    char options;
    float balance;
    float rbalance;
    float reference;
    float digits;
    int number;
    int select;

    cout<<"*********** MOBILE MONEY *************\n";
    cout<<"Authentication\n";
    cout<<"1. Check Balance\n";
    cout<<"2. Send Money\n";
    cout<<"3. Reset Pin\n";
    cout<<"4. Allow Cashout\n";
    cout<<"Select an Option ";
    cin>>select;

    if(select == 1){
        do
        {
            cout<<"Enter your 4-digit Pin: ";
            cin>>pin;
                if(pin != defaultpin){
                    cout<<"Your Pin is incorrect";
                    cout<<"Try Again";
                }
                else if(pin == defaultpin){
                    cout<<"Your Balance is "<<defaultbalance;
                }
        } while (pin != defaultpin && attempts <3);
        
    }
    if(attempts > 3){
        cout<<"Max attemps reached";
        cout<<"Existing Program";
    }
    else if(select == 2){
        cout<<"1. MoMo User\n";
        cout<<"2. Non MoMO User\n";
        cout<<"3. Diff. Network\n";
        cout<<"Select an Option ";
        cin>>select;

        if(select == 1){
            cout<<"Enter number \n";
            cin>>number;
            cout<<"Enter Amount \n";
            cin>>amount;
            cout<<"Enter Reference \n";
            cin>>reference;
            cout<<"Enter your 4-digit Pin: \n";
            cin>>pin;
            do
            {
                attempts++;
                if(pin != defaultpin){
                    cout<<"Incorrect Pin, try again";
                }
                else if(pin == defaultpin){
                    cout<<"You have succesfully sent "<<amount<<" to "<<number<<endl;
                    rbalance = defaultbalance - amount;
                    cout<<"Your remaining balance is "<<rbalance<<endl;
                }
            } while (pin != defaultpin && attempts>3);
            if(attempts>3){
                cout<<"Max attempts reached";
                cout<<"Existing Program";
            }
        }
        else if(select == 2){
            cout<<"Visit the nearest MoMo Agent";
        }
        else if(select==3){
            cout<<"Select network\n";
            cout<<"1. Vodafone\n";
            cout<<"2. AirtelTigo\n";
            cout<<"3. Glo\n";
            cin>>select;
                if(select == 1){
                    cout<<"Enter number \n";
                    cin>>number;
                    cout<<"Enter Amount \n";
                    cin>>amount;
                    cout<<"Enter Reference \n";
                    cin>>reference;
                    cout<<"Enter your 4-digit Pin: \n";
                    cin>>pin;
                    do
            {
                attempts++;
                if(pin != defaultpin){
                    cout<<"Incorrect Pin, try again";
                }
                else if(pin == defaultpin){
                    cout<<"You have succesfully sent "<<amount<<" to "<<number<<endl;
                    rbalance = defaultbalance - amount;
                    cout<<"Your remaining balance is "<<rbalance<<endl;
                }
            } while (pin != defaultpin && attempts>3);
            if(attempts>3){
                cout<<"Max attempts reached";
                cout<<"Existing Program";
            }
                }
                else if(select == 2){
                    cout<<"Enter number \n";
                    cin>>number;
                    cout<<"Enter Amount \n";
                    cin>>amount;
                    cout<<"Enter Reference \n";
                    cin>>reference;
                    cout<<"Enter your 4-digit Pin: \n";
                    cin>>pin;
                    do
            {
                attempts++;
                if(pin != defaultpin){
                    cout<<"Incorrect Pin, try again";
                }
                else if(pin == defaultpin){
                    cout<<"You have succesfully sent "<<amount<<" to "<<number<<endl;
                    rbalance = defaultbalance - amount;
                    cout<<"Your remaining balance is "<<rbalance<<endl;
                }
            } while (pin != defaultpin && attempts>3);
            if(attempts>3){
                cout<<"Max attempts reached";
                cout<<"Existing Program";
            }
                }
                else if(select == 3){
                    cout<<"Enter number \n";
                    cin>>number;
                    cout<<"Enter Amount \n";
                    cin>>amount;
                    cout<<"Enter Reference \n";
                    cin>>reference;
                    cout<<"Enter your 4-digit Pin: \n";
                    cin>>pin;
                    do
            {
                attempts++;
                if(pin != defaultpin){
                    cout<<"Incorrect Pin, try again";
                }
                else if(pin == defaultpin){
                    cout<<"You have succesfully sent "<<amount<<" to "<<number<<endl;
                    rbalance = defaultbalance - amount;
                    cout<<"Your remaining balance is "<<rbalance<<endl;
                }
            } while (pin != defaultpin && attempts>3);
            if(attempts>3){
                cout<<"Max attempts reached";
                cout<<"Existing Program";
            }
                }
        }        
    } 
    else if(select == 3){
        cout<<"Are You Sure You Wanna Reset PIN\n";
        cout<<"Choose Options Y/N\n";
        cin>>options;
        if(options == 'Y' || options == 'y'){
            cout<<"Enter New Pin\n";
            cin>>npin;
            pin == npin;
            cout<<"Your New Pin is "<<npin;
        }
        else{
            cout<<"Your default pin is"<<defaultpin;

        }
    }
    else if(select == 4){
        cout<<"Enter your 4-digits PIN \n";
        cin>>pin;
        cout<<"You've allowed Cashout";
            if(pin != defaultpin){
                cout<<"Incorrect Pin, Try again";
            }
    }
    return 0;
}