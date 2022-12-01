#include <iostream>
#include <string>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;


class Player {
    private:
        string name;
        int hitPoints;

    public:
      //constructor
      Player(string n, int h){
        name = n;
        hitPoints= h; 
      }

Player a = Player("Ron",10);

        string getName(){
            return name;
        }

        int getHitPoints(){
            return hitPoints;
        }

        void damage(int points){
            if ( points > hitPoints )
                hitPoints = 0;
            else
                hitPoints = hitPoints - points;
        }
};

int main(){
    a.getName;
    a.getHitPoints;
    a.damage;
}
