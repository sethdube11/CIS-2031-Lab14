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
        //❓❓ QUESTION 9, add the constructor here
        //TODO Remove answer
        Player(string n, int hp){
            name = n;
            hitPoints = hp;
        }

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
    //TODO Remove answer
    Player a = Player("Bill", 100);
    a.damage(43);
    cout << a.getName() << " has " << a.getHitPoints() << " hp." << endl;
}
