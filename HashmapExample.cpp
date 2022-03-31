#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    map<string, string> mydictionairy;
    mydictionairy.insert(pair<string,string>("apple", "derApfel"));
    mydictionairy.insert(pair<string, string>("orange", "die orange"));
    mydictionairy.insert(pair<string, string>("banana", "die banana"));

    for  (auto pair : mydictionairy)
    {
        cout << pair.first << "-" << pair.second << endl;
    }
}
