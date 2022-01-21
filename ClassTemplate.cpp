#include <iostream>
using namespace std;
enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T> struct Traits;
template<>
struct Traits<Fruit>{
    static string name(int i){
        if(i==0)
            return "apple";
        else if(i==1)
            return "orange";
        else if(i==2)
            return "pear";
        else {
            return "unknown";
        }
    }
};
template<>
struct Traits<Color>{
    static string name(int i){
        if(i==0)
            return "red";
        else if(i==1)
            return "green";
        else if(i==2)
            return "orange";
        else {
            return "unknown";
        }
    }
};
