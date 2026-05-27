#include<iostream>
#include<string>

class restaurent {
public:
    std::string name;
    int price;

void menu(){
   
    std::cout<<"Dish Name " <<" "<< name << " Price: $" << price << std::endl;

}};
int main(){
    restaurent pizza;
    pizza.name = "pizza";
    pizza.price = 149;

    restaurent burger;
    burger.name = "burger";
    burger.price = 5;

    pizza.menu();
    burger.menu();

    return 0;
}