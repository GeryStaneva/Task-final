#include <iostream>
using namespace std;

int main () {
    cout << "Hi, there. I am Gery. What's your name ?" << endl;
    string Friend;
    cin >> Friend;
    cout << "Hi, " << Friend << " What's your age? ";
    int AgeGery=48;
    int AgeFriend;
    cin >> AgeFriend;
    cout << "The sum of our years is " << AgeGery + AgeFriend << ". Can you tell my age :-)";
    return 0;
}