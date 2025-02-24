# include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string>
using namespace std;

class dept {
public:
    void add_item();
    void display_item();
    void check_item();
    void update_item();
    void delete_item();
    /* This function allows the user to see the menu and 
        perform either of the four actions. */
    void control_panel();
};

void dept:: control_panel(){
    system("Color 0A");
    system("cls");
    cout << "*********************"
            "*********************";
    cout << "\n\n\t\t\t Department Store Management System";
    cout << "\n\n\t\t\t\t Control Panel\n";
    cout <<  "\n*********************"
            "*********************\n";
    cout << "\n\n 1. Add New Item";
    cout << "\n 2. Display Items";
    cout << "\n 3. Check Specific Item";
    cout << "\n 4. Update Item";
    cout << "\n 5. Delete Item";
    cout << "\n 6. Exit";
}

int main(){
    dept d;
    d.control_panel();
    return 0;
}