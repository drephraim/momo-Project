            #include <iostream>
            using namespace std;

            int main(){
                const int defaultpin = 0000;
                const int defaultbalance = 1000;
                int attempts = 0;
                double amount;
                int cpin, npin;
                int pin;
                char Y, N, y, n;
                char options;
                float balance;
                float rbalance;
                float reference;
                int number;
                int confirmation;
                int select;
                string digits, code;

            cout<<"************* MTN MOBILE MONEY *************\n";
            authentication:
            menu:
            cout<<"Authentication code (*170# or 170)\n";
            cout<<"Enter Code \n";
            cin>>code;
            if(code == "*170#" || code == "170"){
                other:
                cout<<"1. Check Balance\n";
                cout<<"2. Send Money\n";
                cout<<"3. Reset Pin\n";
                cout<<"4. Allow Cashout\n";
                cout<<"5. Exit\n";
                cout<<"Select an Option \n";
                cin>>select;

                if(select==5){
                    exit:
                cout<<"Thank You For Using Our Services";
                return 0;
            }

                if (select == 1) {
                int attempts = 0;
                while (attempts < 3) {
                cout << "Enter your 4-digit Pin: \n";
                cin >> pin;
                if (pin != defaultpin) {
                    cout << "Your Pin is incorrect. Try again\n";
                    attempts++;
                 } else {
                    cout << "Your Balance is " << defaultbalance << endl;
                    cout<<"***********************\n";
                    goto other;
                }
                    }
                    if (attempts >= 3) {
                        cout << "Max attempts reached\n";
                        cout << "Exiting Program";
                        return 0;
                    }
                }

                else if(select == 2){
                    back:
                    cout<<"1. MoMo User\n";
                    cout<<"2. Non MoMo User\n";
                    cout<<"3. Other Network\n";
                    cout<<"4. Back\n";
                    cout<<"Select an Option ";
                    cin>>select;

                    if(select == 1){
                            cout<<"Enter number \n";
                            cin>>number;
                            cout<<"Confirm number \n";
                            cin>>confirmation;
                                if(confirmation != number){
                                    cout<<"You've entered a wrong number";
                                    cout<<"*****************************\n";
                                    goto back;
                                }
                            else{   
                            cout<<"Enter Amount \n";
                            cin>>amount;
                            if(amount > defaultbalance){
                                cout<<"You don't have enough balance for this transaction \n";
                                cout<<"*****************************\n";
                                goto other;
                            }
                            else{
                            
                                cout<<"Enter Reference \n";
                                cin>>reference;
                                
                            }
                            }
                    
                            do
                            {
                                attempts++;
                                cout << "Enter your 4-digit Pin: \n";
                                cin >> pin;
                                if (pin != defaultpin)
                                {
                                    cout << "Incorrect Pin" << endl;
                                }
                                else
                                {
                                    cout << "You have successfully sent " << amount << " to " << number << endl;
                                    rbalance = defaultbalance - amount;
                                    cout << "Your remaining balance is " << rbalance << endl;
                                    cout<<"*****************************\n";
                                    goto other;
                                }
                                
                            } while (attempts < 3);

                            if (attempts >= 3)
                            {
                                cout << "Max attempts reached. Exiting program." << endl;
                            }

                        
                        
                    }
                    else if(select == 2){
                        cout<<"Visit the nearest MoMo Agent\n";
                        cout<<"*****************************\n";
                        goto other;
                    }
                    
                    else if(select==3){
                        cout<<"Select network\n";
                        cout<<"1. Vodafone\n";
                        cout<<"2. AirtelTigo\n";
                        cout<<"3. Glo\n";
                        cout<<"4. Back\n";
                        cout<<"Select Network\n";
                        cin>>select;
                            if(select == 1){
                            cout<<"Enter number \n";
                            cin>>number;
                            cout<<"Confirm number \n";
                            cin>>confirmation;
                                if(confirmation != number){
                                cout<<"You've entered a wrong number\n";
                                cout<<"*****************************\n";
                                goto back;
                                }
                                else{
                                cout<<"Enter Amount \n";
                                cin>>amount;
                                if(amount > defaultbalance){
                                cout<<"You don't have enough balance for this transaction";
                                cout<<"*****************************\n";
                                goto other;
                                }
                                else{
                            
                                cout<<"Enter Reference \n";
                                cin>>reference;
                                
                            }
                            }

                        do
                            {
                                attempts++;
                                cout << "Enter your 4-digit Pin: \n";
                                cin >> pin;
                                if (pin != defaultpin)
                                {
                                    cout << "Incorrect Pin, try again" << endl;
                                }
                                else
                                {
                                    cout << "You have successfully sent " << amount << " to " << number << endl;
                                    rbalance = defaultbalance - amount;
                                    cout << "Your remaining balance is " << rbalance << endl;
                                    cout<<"*****************************\n";
                                    goto other;
                                
                                    
                                }
                                
                                
                            } while (attempts < 3);

                            if (attempts >= 3)
                            {
                                cout << "Max attempts reached. Exiting program." << endl;
                            }

                    }
                            else if(select == 2){
                                cout<<"Enter number \n";
                                cin>>number;
                                cout<<"Confirm number \n";
                                cin>>confirmation;
                            if(confirmation != number){
                                cout<<"You've entered a wrong number\n";
                                cout<<"*****************************\n";
                                goto back;
                            }
                            else{
                                cout<<"Enter Amount \n";
                                cin>>amount;
                            if(amount > defaultbalance){
                                cout<<"You don't have enough balance for this transaction";
                                cout<<"*****************************\n";
                                goto other;
                            }
                            else{
                            
                                cout<<"Enter Reference \n";
                                cin>>reference;
                                
                            }
                            }
                        do
                            {
                                attempts++;
                                cout << "Enter your 4-digit Pin: \n";
                                cin >> pin;
                                if (pin != defaultpin)
                                {
                                    cout << "Incorrect Pin, try again" << endl;
                                }
                                else
                                {
                                    cout << "You have successfully sent " << amount << " to " << number << endl;
                                    rbalance = defaultbalance - amount;
                                    cout << "Your remaining balance is " << rbalance << endl;
                                    cout<<"*****************************\n";
                                    goto other;
                                }
                                
                            } while (attempts < 3);

                            if (attempts >= 3)
                            {
                                cout << "Max attempts reached. Exiting program." << endl;
                            }
                            }

                            else if(select == 3){
                                cout<<"Enter number \n";
                                cin>>number;
                                cout<<"Confirm number \n";
                                cin>>confirmation;
                            if(confirmation != number){
                                cout<<"You've entered a wrong number\n";
                                cout<<"*****************************\n";
                                goto back;
                            }
                            
                                cout<<"Enter Amount \n";
                                cin>>amount;
                            if(amount > defaultbalance){
                                cout<<"You don't have enough balance for this transaction";
                                cout<<"*****************************\n";
                                goto other;
                            }
                            else{
                            
                                cout<<"Enter Reference \n";
                                cin>>reference;
                                
                            }
                        do
                            {
                                attempts++;
                                cout << "Enter your 4-digit Pin: \n";
                                cin >> pin;
                                if (pin != defaultpin)
                                {
                                    cout << "Incorrect Pin, try again" << endl;
                                }
                                else
                                {
                                    cout << "You have successfully sent " << amount << " to " << number << endl;
                                    rbalance = defaultbalance - amount;
                                    cout << "Your remaining balance is " << rbalance << endl;
                                    cout<<"*****************************\n";
                                    goto other;
                                }
                                
                            } while (attempts < 3);

                            if (attempts >= 3)
                            {
                                cout << "Max attempts reached. Exiting program.\n" << endl;
                            }

                            }
                            else if(select==4){
                                goto back;
                            }
} 
                        else if (select==4){
                        goto other;
                    }
                        else if (select>=5){
                            goto other;
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
                        cout<<"Your New Pin is \n"<<npin<<endl;
                        cout<<"*****************************\n";
                        goto other;
                    }
                    else if(options=='N' || options=='n'){
                    }
                    cout<<"*****************************\n";
                    goto exit;
                }
                else if(select == 4){
                    cout<<"1. YES\n";
                    cout<<"2. NO\n";
                    cout<<"3. BACK\n";
                    cin>>select;

                    if(select==1){
                        cout<<"Enter your 4-digits PIN \n";
                        cin>>pin;
                        cout<<"You've allowed Cashout\n";
                        cout<<"*****************************\n";
                        goto other;
                    }
                    else if(select==2){
                    goto other;
                    }

                    else if(select==3){
                    goto other;
                    }

                
                        
                }
                
                
            }
            else{
                goto menu;
            }
            
            
            }
