#include <iostream>
#include <vector>
#include "include/user.h"

using namespace std;

struct Chanel {
    string name;
    vector<User> users;
    vector<User> banUsers; 
};