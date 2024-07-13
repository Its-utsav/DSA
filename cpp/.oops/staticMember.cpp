#include <iostream>
using namespace std;
class Product
{
    int rate;
    int qty;

public:
    static int totalAmount;
    void setData()
    {
        // cout << "Enter Product Rate: " << rate;
        cin >> rate;
        // cout << "Enter Qty: " << qty;
        cin >> qty;
        totalAmount += (rate * qty);
    }
    void displayData()
    {
        cout << "Product Rate = " << rate << endl;
        cout << "Product Qty = " << qty << endl;
    }
};

int Product::totalAmount = 0;
int main()
{
    Product p1, p2;
    p1.setData();
    p1.displayData();
    p2.setData();
    cout << "Total Bill = " << Product::totalAmount << endl;
    return 0;
}