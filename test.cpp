#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "Game.h"

using namespace std;
int main(int argc, char* argv[]) 
{
   
    Game a(argv[1]);
    a.run();

}