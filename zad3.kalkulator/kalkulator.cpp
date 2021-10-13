#include "iostream"
#include <fstream>

using namespace std;

void docu(){
    ifstream f("doc.txt");
    if(f.is_open())
        cout << f.rdbuf();
}

void err(){
    cout << "ERROR: wrong number of arguments.\n\n"
    docu();
}

int main(int argc, char *argv[]){
    string operation = argv[1];
    switch (operation) {
        case add:
            if(argc != 4) {
                err();
                return 0;
            }
            else{
                cout << argv[2] + argv[3];
                return 0;
            }
        case subtract:
            if(argc != 4) {
                err();
                return 0;
            }
            else{
                cout << argv[2] - argc[3];
                return 0;
            }
        case volume:
            if(argc != 6){
                err();
                return 0;
            }
            else{
                cout << 0.5*(argv[2] + argv[3])*argv[4]*argv[5];
                return 0;
            }
        case help:
            if(argc != 2){
                err();
                return 0;
            }
            else{
                docu();
                return 0;
            }
    }
}