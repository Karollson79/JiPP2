#include "iostream"
#include <fstream>
#include "cstring"

using namespace std;

void docu(){
    ifstream f("doc.txt");
    if(f.is_open())
        cout << "\n" << f.rdbuf() << "\n\n";
}

void err(){
    cout << "ERROR: wrong number of arguments.\n\n";
    docu();
}

int main(int argc, char *argv[]){
    if(!strcmp(argv[1], "add")){
        if(argc != 4){
            err();
            return 0;
        }
        else{
            cout << "\n" << atoi(argv[2])+ atoi(argv[3]);
            return 0;
        }
    }
    else if(!strcmp(argv[1], "subtract")){
        if(argc != 4){
            err();
            return 0;
        }
        else{
            cout << "\n" << atoi(argv[2]) - atoi(argv[3]);
            return 0;
        }
    }
    else if(!strcmp(argv[1], "volume")){
        if(argc != 6){
            err();
            return 0;
        }
        else{
            cout << "\n" << 0.5*(atoi(argv[2]) + atoi(argv[3]))*atoi(argv[4])*atoi(argv[5]);
            return 0;
        }
    }
    else if(!strcmp(argv[1], "help")){
        if(argc != 2){
            err();
            return 0;
        }
        else{
            docu();
            return 0;
        }
    }
    else
        return 0;
}