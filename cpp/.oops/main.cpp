#include <bits/stdc++.h>
using namespace std;
class Product
{
    float price;
    int quantity;

public:
    void getData()
    {
        // cout << "Enter Price Info : ";
        cin >> price;
        // cout << "Enter Quantity  Info : ";
        cin >> quantity;
    }

    void displaydata()
    {
        cout << "Price is " << price << endl;
        cout << "Quantity is " << quantity << endl;
    }
    float totalBill()
    {
        return price * quantity;
    }
};
int main()
{
    Product p1;
    p1.getData();
    p1.displaydata();
    float bill = p1.totalBill();
    cout << "bill " << bill << endl;
    return 0;
}