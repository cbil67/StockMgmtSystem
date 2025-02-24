# include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<string>
using namespace std;

class dept {
public:
    /* This function allows the user to add details like item name, id, and company name to the 
    text file. */
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
    cout << "**********************************************"
            "**********************************";
    cout << "\n\n\t\t\tDepartment Store Management System";
    cout << "\n\n\t\t\t\t  Control Panel\n";
    cout << "\n********************************************"
            "************************************\n";
    cout << "\n\n 1. Add New Item";
    cout << "\n 2. Display Items";
    cout << "\n 3. Check Specific Item";
    cout << "\n 4. Update Item";
    cout << "\n 5. Delete Item";
    cout << "\n 6. Exit";
}

void dept:: add_item() {
    system("cls");
    system("Color 0A");
    fstream file;
    /* This function adds the information into the text file.
     *  The data that we are adding is: 
     *  Item number, ID, name and company name. */
    int no_item, item_id;
    string itm_name;
    string c_name;
    cout << "\n\n Add new item: \n";
    cout << "----------------------------------------------"
            "----------------------------\n";
    cout << "Item Code: ";
    cin >> item_id;
    cout << "----------------------------------------------"
            "----------------------------\n";
    cout << "\n\n Item Name: ";
    cin >> itm_name;
    cout << "\n\n Company Name:";
    cin >> c_name;
    cout << "\n\n No. of Item: ";
    cin >> no_item;
    file.open("items.txt", ios::out | ios::app);
    file << " " << item_id << " " << itm_name << " "
        << c_name << " " << no_item << "\n";
    cout << "=============================================="
            "============================"
        << endl;
    file.close();
}

int main(){
    dept d;
    d.control_panel();
    int choice; /* Store the choice that the user made. */

    char x;
    cout << "\n\n Your choice: ";
    cin >> choice;
    switch(choice) {
        case 1:
            do {
                d.add_item();
                cout << "Do you want to add another item (y/n) "
                        ": ";
                cin >> x;
            }while(x == 'y');
            break;
        default:
            cout << "\n\n Invalid value...Please Try Again";
    }
    cout << "\n";
    
    return 0;
}