# include <iostream>
# include <string>
# include <cstring>
# include <conio.h>
# include <stdio.h>

# include "crs.h"
# include "sqlite3.h"


using namespace std;

void create_users_database(){

    // FOR CREATING USERS DATABASE.

    char* err;
    sqlite3* db;
    sqlite3_stmt* stmt;
    sqlite3_open("database.db", &db);

    int response = sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS users(uid VARCHAR(20), pwd VARCHAR(20));", NULL, NULL, &err);

    if(response != SQLITE_OK){
        cout << "ERROR... " << err;
    }

}

void create_cars_database(){

    // FOR CREATING CARS DATABASE

    char* err;
    sqlite3* dbs;
    sqlite3_stmt* stmt;
    sqlite3_open("carsdatabase.db", &dbs);

    int response = sqlite3_exec(dbs, "CREATE TABLE IF NOT EXISTS carsTable (name VARCHAR(20), price INT ,type VARCHAR(20), status VARCHAR(20));", NULL, NULL, &err);

    if(response != SQLITE_OK){
        cout << "ERROR... " << err;
    }

}
  Void create_receipt_database(){

Char* err;
Sqlite3* dbms;
Sqlite3_stmt* stmt;
Sqlite3_open(“receiptdb.db”, &dbms);

int response = sqlite3_exec(dbms, “CREATE TABLE IF NOT EXISTS receipt_table (name VARCHAR(20), Total_price INT, From_date INT, Till_date INT);”, NULL, NULL, &err);

if(response != SQLITE_OK){
    cout  << “Error” << err;
}
}

int main(){

    create_users_database();
    create_cars_database();

    sys syst;
    syst.show_menu();

    return 0;
}
