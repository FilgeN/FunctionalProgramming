#include <iostream>
#include "Smartphone.h"
#include "OS.h"
#include <vector>

using namespace std;



int main() {
    vector<Smartphone*> smartphones;
    smartphones.push_back( new Smartphone("Samsung", "Galaxy Note", "Android", JellyBean) );
    smartphones.push_back( new Smartphone("Sony", "M4 Aqua", "Android", Lollipop));
    smartphones.push_back( new Smartphone("Samsung", "S4", "Android", KitKat));
    smartphones.push_back( new Smartphone("Nokia", "Lumia 735", "WP", Apollo));

    Smartphone* temp = smartphones[3];
    cout << *(smartphones[3]) << endl;


    return 0;
}