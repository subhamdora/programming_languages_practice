#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<< "Enter Two Numbers: ";
    cin>> a >> b;

    cout<< "\nAddition=" << a+b;
    cout<< "\nSubstraction=" << a-b;
    cout<< "\nMultiplicationn=" << a*b;
    if(b!=0){
      cout<< "\nDivision="<< (float)a/b;
      cout<< "\nReminder="<< a%b;
    }
    else{
      cout<< "In This Case Division and Reminder is not Possible.You Entered Invalid Number.Please Try Again.";
    }
    return 0;
}
