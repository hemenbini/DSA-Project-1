#include <iostream>
#define taxRate 20
using namespace std;

int main() {
    string productName;
    int productCategory;
    int initialInventory;
    double productPrice;
    int numItemsSold;
    int newInventory;
    double totalSalesAmount;
    int taxAmount(20);
    string salesInfo;
    salesInfo = "We have sold over 100 unit of products";
    string workingCountries[]{"Ethiopia", "Kenya", "USA"};
    auto copyTotalSales = totalSalesAmount;
    decltype(initialInventory) soldPercent = 0;


    cout << "This is a program that analyzes product sales and inventory for a store\n";
    cout << "This program is built using C++ which is a complied language\n";

    cout << "Initializaion Methods\n";
    cout << "Tax Amount: " << taxAmount << "\n" << "Sales Info: " << salesInfo << "\n" << "Working Countries: \n";
    for (int i = 0; i < 3; i++)
    {
        cout << workingCountries[i] << "\n";
    }
    

    cout << "Enter product name: ";
    cin >> productName;

    cout << "Enter product category: ";
    cin >> productCategory;
    

    cout << "Enter initial inventory quantity: ";
    cin >> initialInventory;

    cout << "Enter product price: ";
    cin >> productPrice;

    cout << "Enter number of items sold: ";
    cin >> numItemsSold;

    if(initialInventory >= numItemsSold){
        newInventory = initialInventory;
        newInventory -= numItemsSold;
        totalSalesAmount = numItemsSold * productPrice; 
    }else{
        cout << "Invalid Number \n";
        newInventory = initialInventory;
        totalSalesAmount = 0;
        numItemsSold = 0;
    }
    

    cout << endl << "#Receipt#" << endl;
    cout << "Product Name: " << productName << endl;
    cout << "Product Category: ";
    switch (productCategory) {
        case 1: cout << "Electronics" << endl;
         break;
        case 2: cout << "Groceries" << endl; 
        break;
        case 3: cout << "Clothing" << endl; 
        break;
        case 4: cout << "Stationery" << endl; 
        break;
        case 5: cout << "Miscellaneous" << endl; 
        break;
        default: cout << "Invalid Category" << endl; 
        break;
    }
    cout << "Initial Inventory: " << initialInventory << endl;
    cout << "Number of Items Sold: " << numItemsSold << endl;
    cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales Amount: $" << totalSalesAmount << endl;

    copyTotalSales = totalSalesAmount;
    if (newInventory < 10) {
        cout << "Status: Low Inventory" << endl;
    } else {
        cout << "Status: Sufficient Inventory" << endl;
    }

    cout << "\nItem List with Cost:" << endl;
    for (int i = 1; i <= numItemsSold; i++) {
        cout << i << ". " << productName << " - $" << productPrice << endl;
    }
    if (numItemsSold == 0){
        cout << "No item Sold";
    }

    double tax = totalSalesAmount * (taxRate / 100.0);
    cout << "\nTax Rate: " << taxRate << "%" << endl;
    cout << "Tax Amount: $" << tax << endl;
    cout << "Total Amount After Tax: $" << totalSalesAmount + tax << endl;

    cout << "Helpers \n";
    cout << "Copy of Total Sales: $" << copyTotalSales << endl;

    soldPercent = (numItemsSold*100)/initialInventory;
    cout << "Sold Percent: " << soldPercent << "%" << endl;
    return 0;
}