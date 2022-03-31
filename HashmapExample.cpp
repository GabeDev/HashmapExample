#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    //order elements ascending
    //unordered map dosent otder them
    map<string, string> mydictionairy;
    mydictionairy.insert(pair<string,string>("apple", "derApfel"));
    mydictionairy.insert(pair<string, string>("orange", "die orange"));
    mydictionairy.insert(pair<string, string>("banana", "die banana"));

    //acessing a certain element dictionairy[key]
    //keys are unique
    mydictionairy["apple"]="coco";
    // size() returns of collection
    // clear() clears the collection

    //itteration
    for  (auto pair : mydictionairy)
    {
        cout << pair.first << "-" << pair.second << endl;
    }

    //build a pokedex
    map<string, list<string>> pokedex;

    list<string> pickachuAttacks{"thunder shock","tail whip","quick attack"};
    list<string> charmanderAttacks{ "flame thrower","scary face" };
    list<string> chickorita{ "razor leaf","poison powder"};

    pokedex.insert(pair<string, list<string>>("picahu", pickachuAttacks));
    pokedex.insert(pair<string, list<string>>("charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("chik", chickorita));

    for (auto pair : pokedex)
    {
        cout << pair.first<<"-";

        for (auto attack : pair.second)
        {
            cout << attack;
        }
        cout << endl;
    }
}
