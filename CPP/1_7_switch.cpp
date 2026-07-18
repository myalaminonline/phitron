#include<iostream>
using namespace std;

int main(){

    int day;
    cin >> day;

    switch(day){
        case 1:
            cout << "Saturday" << endl;
            break;
        case 2:
            cout << "Sunday" << endl;
            break;
        case 3:
            cout << "Monday" << endl;
            break;
        case 4:
            cout << "Tuesday" << endl;
            break;
        case 5:
            cout << "Wednesday" << endl;
            break;
        case 6:
            cout << "Thursday" << endl;
            break;
        case 7:
            cout << "Friday" << endl;
            break;
        default:
            cout << "Invalid Input" << endl;
    }
        
    int x = 10;
    switch (x%2)
    {
        case 0:
            cout << "Even" << endl;
            break;
        case 1:
            cout << "Odd" << endl;
            break;
    }

    char c = 'A';
    switch (c)
    {
        case 'A':
            cout << "Vowel" << endl;
            break;
        case 'E':
            cout << "Vowel" << endl;
            break;
        case 'I':
            cout << "Vowel" << endl;
            break;
        case 'O':
            cout << "Vowel" << endl;
            break;
        case 'U':
            cout << "Vowel" << endl;
            break;
        default:
            cout << "Consonant" << endl;
    }
    
    return 0;
}