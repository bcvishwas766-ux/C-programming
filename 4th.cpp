
#include <iostream>
#include <string>
class car {
    public:
    std::string brand;
    std::string color;
    int year;

    void startengine() {
        std::cout << "the " << color << " " << brand << "'s engine is now running!" << std::endl;
    }
};
int main(){
    car mycar;
    mycar.brand = "toyota";
    mycar.color = "red";
    mycar.year = 2023;

    car friendscar;
    friendscar.brand = "tesla";
    friendscar.color = "blue";
    friendscar.year = 2024;

    mycar.startengine();
    friendscar.startengine();

    return 0;
}