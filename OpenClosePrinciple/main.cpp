#include <iostream>
#include <array>
#include<vector>
using namespace std;
enum class Color{red,green,blue};
enum class Size{small,medium,large};

struct Product{
 string name;
 Color color;
 Size size;
};

struct ProductFilter{
    vector<Product*> by_color(vector<Product*> item, Color color)
    {
        vector<Product*> result;
        for(auto& i: item){
            if(i->color==color)
            {
                result.push_back(i);
            }
        }
        return result;
    }
};


int main(){
 
 Product apple{"apple mobile",Color::red,Size::medium};
  Product samsung{"samsumgmobile",Color::blue,Size::large};

vector<Product*> items{&apple, &samsung};


  ProductFilter pf;
  auto red_things=pf.by_color(&items,Color::red);

for(auto& item: red_things){
//cout<< item;
cout<< item->name;
}

}