#include <iostream>
#include "StateMachine.h"

using namespace std;

int main() {
    cout << "Run State Machine:" << endl;

    string the_state;
    string content;
    StateMachine state_machine;

    state_machine.process("1");
    the_state = state_machine.retrieve_state();
    cout << "state is " + the_state + " after 1 action" << endl;

    state_machine.process(the_state);
    the_state = state_machine.retrieve_state();
    cout << "state is " + the_state + " after 2 action" << endl;

    state_machine.process(the_state);
    the_state = state_machine.retrieve_state();
    cout << "state is " + the_state + " after 3 action" << endl;

    state_machine.process(the_state);
    the_state = state_machine.retrieve_state();
    cout << "state is " + the_state + " after 4 action" << endl;

    return 0;
}