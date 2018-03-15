//
// Created by Mitchell Shelton on 3/15/18.
//

#ifndef KILLBOT9000_STATEMACHINE_H
#define KILLBOT9000_STATEMACHINE_H

#include <string>

using namespace std;

class StateMachine {
public:
    string state;

    static string currentState(string input);
    static string action(string current_state);
    void process(const string &input);
    string retrieve_state();
};

#endif //KILLBOT9000_STATEMACHINE_H
