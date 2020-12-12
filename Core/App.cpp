//
// Created by roy on 12.12.2020.
//

#include "App.h"
#include "../Commands/ExitCommand.h"

#include "iostream"

using namespace std;


int App::run(){

    continue_reading = true;

    char commandText;

    while(continue_reading){

        cout << "Press Some key = ";
        cin >>  commandText;
        cout << endl;

        if(commandText == 'x'){
            ExitCommand(*this).Execute();
        }

    }

    return 0;
}

int App::exitApp() {
    this->continue_reading = false;
    return this->continue_reading;
}

App::~App() {
    cout << "App Finished";
}
