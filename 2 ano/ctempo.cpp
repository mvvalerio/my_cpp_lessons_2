#include <iostream>
#include <ctime>
#include <unistd.h>    


using namespace std;


int main(){


    while(true){

    system("clear");

    time_t timestamp;

    time(&timestamp);
    
    
    cout << "current time is: " << ctime(&timestamp);

    sleep(1);

    }


}