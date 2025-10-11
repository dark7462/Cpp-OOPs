/*
🧩 Problem 3: Product Inventory
Define a class Product with:
•	Private: price, stock
•	Public: productName, category
•	Constructor to initialize product info
•	Setters/Getters for price, stock
•	Method to display product summary
✅ Use: Constructor, Getters/Setters, Public/Private Members
*/
#include <bits/stdc++.h>
using namespace std;
class Product{
private:
    int price;
    int stock;
public:
    string productName;
    string productcategory;

    Product(int price, int stock, string productName, string productcategory){
        set_price(price);
        set_stock(stock);
        this->productName = productName;
        this->productcategory = productcategory;
    }
    void set_price(int price){
        this->price = price;
    }
    void set_stock(int stock){
        this->stock = stock;
    }
    int get_price(){
        return price;
    }
    int get_stock(){
        return stock;
    }

    void Summary(){
        cout << "Product Name : " << productName << endl;
        cout << "Product category : " << productcategory << endl;
        cout << "Product price : " << get_price() << " Rs" << endl;
        cout << "Product stock : " << get_stock() << endl;
    }

};
#define ll long long
int main(){
    // your code goes here
    Product rice(500, 2, "Rice", "grain");
    rice.Summary();
    return 0;
}