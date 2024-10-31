#include <iostream>
using namespace std;

class Main{
    public: 
        Main(){

            static int option;
            cout << "Please select option \n1.Register \n2.Login" << endl;
            cout << "Select an option ";
            cin >> option;
        }  
};

int main(){
    Main mainobj;

    return 0;
}