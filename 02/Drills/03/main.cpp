#include "PPP.h"

int main() {
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;
    cout << "Enter the name of your friend: ";
    string friend_name;
    cin >> friend_name;
    cout << "	Dear " << first_name << "!\n";
    cout << "How are you? I am fine. I miss you.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
}
