//
// Created by Mitchell Shelton on 3/15/18.
//
#include "StateMachine.h"
#include <iostream>

using namespace std;

string StateMachine::currentState(string input) {

    string output_state;

    if (input == "1") {
        output_state = "one";
    }
    else if (input == "2") {
        output_state = "two";
    }
    else if (input == "3") {
        output_state = "three";
    }
    else if (input == "4") {
        output_state = "four";
    }

    output_state = StateMachine::action(output_state);

    return output_state;
}

string StateMachine::action(string current_state) {
    string next_state;

    if (current_state == "one") {
        next_state = "2";
    }
    else if (current_state == "two") {
        next_state = "3";
    }
    else if (current_state == "three") {
        next_state = "4";
    }
    else if (current_state == "four") {
        next_state = "1";
    }

    return next_state;
}

void StateMachine::process(const string &input) {
    this->state = StateMachine::currentState(input);
}

string StateMachine::retrieve_state() {
    return this->state;
}