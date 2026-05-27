#include <iostream>
#include <string>
class car{
public:
std::string brand;
std::string colour;
int year;
};
int main() {
car mycar;
mycar.brand="defender";
mycar.colour="white";
mycar.year=2020;
car friendcar;
friendcar.brand="porshe";
friendcar.colour="yellow";
friendcar.year=2001;
std::cout<<"my car deteals"<<mycar.brand <<" " <<"is" <<"" <<mycar.colour <<" " <<"of" <<mycar.year <<" " <<std::endl;
std::cout<<"my car deteals" <<" " <<friendcar.brand <<" "  <<"is" <<" " <<friendcar.colour <<" " <<"of" <<" "<<friendcar.year;
}