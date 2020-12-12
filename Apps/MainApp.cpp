//
// Created by roy on 12.12.2020.
//


#include "iostream"


#include "MainApp.h"
#include "MobileApp.h"
#include "BookApp.h"

#include "../Commands/ExitCommand.h"
#include "../Commands/RunAppCommand.h"


using namespace std;

int MainApp::run(){
    cout << "Main App started " << endl;
    continue_reading = true;

    char commandText;

    while(continue_reading){

        cout << "Choose App = ";
        cin >>  commandText;
        cout << endl;

        if(commandText == 'x'){
            ExitCommand(*this).Execute();
        }

        if(commandText == 'm'){
            RunAppCommand(*new MobileApp()).Execute();
        }

        if(commandText == 'b'){
            RunAppCommand(*new BookApp()).Execute();
        }

    }

    return 0;
}
