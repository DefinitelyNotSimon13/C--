#include <iostream>
#include <sqlite3.h>
#include "functions.cpp"
using namespace std;

int main() {
    //Pointer to SQLite connection
    sqlite3* db;
    //Save Connection result
    int exit = 0;
    exit = sqlite3_open("UserData.db", &db);
    //Test for error
    if (exit) {
        cout << "DB Open Error: " <<sqlite3_errmsg(db) << endl;
    } else {
        cout << "Opened Database Successfully!" << endl;
    }




    sqlite3_close(db);
    return(0);

}