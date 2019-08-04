#include <iostream>
#include <fstream>

using namespace std;

// Set array and Prices
int items[5] = {0, 0, 0, 0, 0};
int mP = 3;
int eP = 4;
int fP = 1;
int brP = 2;
int buP = 1.5;

// When need to loop
int main();

int num;

int checkout(){
    // Calculate
    int one = mP * items[0];
    int two = eP * items[1];
    int thr = fP * items[2];
    int fou = brP * items[3];
    int fiv = buP * items[4];

    int total = one + two + thr + fou + fiv;
    cout <<
    "Milk : " << items[0] << "   | Price : $" << one << endl <<
    "Eggs : " << items[1] << "   | Price : $" << two << endl <<
    "Fruit : " << items[2] << "  | Price : $" << thr << endl <<
    "Bread : " << items[3] << "  | Price : $" << fou << endl <<
    "Butter : " << items[4] << " | Price : $" << fiv << endl << endl;

    cout << "total for today : " << total + 0.12;
    return 1;
}

int list(){
    // Calculate
    int one = mP * items[0];
    int two = eP * items[1];
    int thr = fP * items[2];
    int fou = brP * items[3];
    int fiv = buP * items[4];
    cout <<
    "Milk : " << items[0] << "   | Price : $" << one << endl <<
    "Eggs : " << items[1] << "   | Price : $" << two << endl <<
    "Fruit : " << items[2] << "  | Price : $" << thr << endl <<
    "Bread : " << items[3] << "  | Price : $" << fou << endl <<
    "Butter : " << items[4] << " | Price : $" << fiv << endl
    << endl <<
    "Is this good? [Y/n]";
    string opt;
    cin >> opt;

    if (opt == "y" || opt == "Y"){
        checkout();
    }
    if (opt == "n" || opt == "N"){
        main();
    }

    return 0;
}

int main(){
    cout << "Welcome to 5Market, pick your items: " << endl;
    cout 
    << "1. Milk    | $3.00" << endl 
    << "2. Eggs    | $4.00" << endl 
    << "3. Friut   | $1.00" << endl 
    << "4. Bread   | $2.00" << endl 
    << "5. Butter  | $1.50" << endl 
    << "Just type [D] when you are done with your order!" << endl
    << "or do [L] to view your list" << endl << endl;
    string opt;
    cin >> opt;
    cout << endl;
    if(opt != "1" && opt != "2" && opt != "3" && opt != "4" &&  opt != "5" && opt != "l" && opt != "d" && opt != "D" && opt != "L"){
        cout << "ERR: NOT AN OPTION" << endl;
        main();
    }

    // Get order
    if(opt == "1"){
        cout << "How many gallons? : ";
        cin >> num;

        items[0] = num;
        main();
    }
    if(opt == "2"){
        cout << "How many boxes? : ";
        cin >> num;

        items[1] = num;
        main();
    }
    if(opt == "3"){
        cout << "How many fruits? : ";
        cin >> num;

        items[2] = num;
        main();
    }
    if(opt == "4"){
        cout << "How many loafs? : ";
        cin >> num;

        items[3] = num;
        main();
    }
    if(opt == "5"){
        cout << "How many sticks? : ";
        cin >> num;

        items[4] = num;
        main();
    }

    // Set the things for when done and list order
    if(opt == "d" || opt == "D"){
        checkout();
    }

    if (opt == "l" || opt == "L"){
        list();
    }
}
