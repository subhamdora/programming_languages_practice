#include<iostream>
#include<string>
using namespace std;

int main(){
    string name,collegeName;
    int age;

    cout<< "Enter your Name: ";
    cin >> name; // word

    cout<< "Enter your Age: ";
    cin>> age;
    cin.ignore(); // use after cin of int variable which clears the leftover '\n'

    cout<< "Enter your College Name: ";
    getline(cin,collegeName); // sentence

    cout<< "------- Student Details -------\n";
    cout<< "Name: "<< name << endl;
    cout<< "Age: "<< age << endl;
    cout<< "College Name: "<< collegeName << endl;
    
    return 0;
}