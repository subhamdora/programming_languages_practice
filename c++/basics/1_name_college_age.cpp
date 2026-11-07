#include<iostream>
#include <string>
using namespace std;

int main(){
    string name,collegeName;
    int age;

    cout<< "Enter your Name: ";
    getline(cin,name);

    cout<< "Enter your Age: ";
    cin>> age;
    cin.ignore();

    cout<< "Enter your College Name: ";
    getline(cin,collegeName);

    cout<< "------- Student Details -------\n";
    cout<< "Name: "<< name << endl;
    cout<< "Age: "<< age << endl;
    cout<< "College Name: "<< collegeName << endl;
    return 0;
}