#include <iostream>
#include <string>

using namespace std;

void sendMessage(string recipient, string message) {
    cout << "Sending message to " << recipient << ": " << message << endl;
}

void receiveMessage(string sender, string message) {
    cout << "Received message from " << sender << ": " << message << endl;
}

void ringing() {
    cout << "Ringing..." << endl;
}

void makePhoneCall(string recipient) {
    cout << "Calling " << recipient << "..." << endl;
    ringing();

    // Simulating the call until the receiver picks up
    bool callAnswered = false;
    while (!callAnswered) {
        string response;
        cout << "Receiver, pick up the call? (yes/no): ";
        cin >> response;

        // Input validation
        if (response == "yes") {
            callAnswered = true;
            cout << "Call connected!" << endl;
        }
        else {
            ringing();
        }
    }
}

int main() {
    string recipient, sender, message;

    cout << "Enter recipient's name: ";
    cin >> recipient;

    cin.ignore();  // Consume the newline character left in the buffer

    cout << "Enter sender's name: ";
    getline(cin, sender);

    cout << "Enter message: ";
    getline(cin, message);

    sendMessage(recipient, message);

    cout << endl;

    receiveMessage(sender, message);

    cout << endl;

    makePhoneCall(recipient);

    return 0;
}
