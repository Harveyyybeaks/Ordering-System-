#include <iostream>
using namespace std;

int main()
{
    char Menu, Coffee, yakult, AddOns, noncoffee, soda;
    double coffeePrice, yakultPrice, noncoffeePrice, totalPrice, AddOnsPrice, payment, sodaPrice;
    int total, quantity, firstQty, addQty, addonTotal;
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "          WAKE UP COFFEE           " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "1. Coffee "  << endl;
        cout << "2. Non Coffee " << endl;
        cout << "3. Sparkling Yakult " << endl;
        cout << "4. Fruit Soda " << endl; 
        cout << " Choose your order: ";
        cin >> Menu;
        
    if (Menu == '1') 
        cout << " You choose a Coffee " << endl;
    
    else if (Menu == '2')
        cout << " You choose a Non Coffee. " << endl;
        
    else if (Menu == '3')
        cout << " You choose a Sparkling Yakult. " << endl;
        
    else if (Menu == '4')
        cout << " You choose a Fruit Soda. " << endl;
       
    else {cout << "\n" << endl; cout << " Invalid! "; return 0;}    
    }
    if (Menu == '1')
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "              COFFEE               " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "       Menu                      Price(Medium) " << endl;
        cout << "A. Spanish Latte -                    49 " << endl;
        cout << "B. Caramel Macchiato -                49 " << endl;
        cout << "C. Matcha Espresso -                  49 " << endl;
        cout << "D. Salted Caramel Latte -             49 " << endl;
        cout << "E. Hazelnut Latte -                   49 " << endl;
        cout << "F. White Chocolate Latte -            49 " << endl;
        cout << "G. Strawberry Espresso -              49 " << endl;         

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "              COFFEE               " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "       Menu                      Price(Large) " << endl;
        cout << "H. Spanish Latte -                    69 " << endl;
        cout << "I. Caramel Macchiato -                69 " << endl;
        cout << "J. Matcha Espresso -                  69 " << endl;
        cout << "K. Salted Caramel Latte -             69 " << endl;
        cout << "L. Hazelnut Latte -                   69 " << endl;
        cout << "M. White Chocolate Latte -            69 " << endl;
        cout << "N. Strawberry Espresso -              69 " << endl;    
        cout << " Select your choice: ";
        cin >> Coffee;
    
    if (Coffee == 'A' || Coffee == 'a') coffeePrice = 49;
    else if (Coffee == 'B' || Coffee == 'b') coffeePrice = 49;
    else if (Coffee == 'C' || Coffee == 'c') coffeePrice = 49;
    else if (Coffee == 'D' || Coffee == 'd') coffeePrice = 49;
    else if (Coffee == 'E' || Coffee == 'e') coffeePrice = 49;
    else if (Coffee == 'F' || Coffee == 'f') coffeePrice = 49;
    else if (Coffee == 'G' || Coffee == 'g') coffeePrice = 49;
    else if (Coffee == 'H' || Coffee == 'h') coffeePrice = 69;
    else if (Coffee == 'I' || Coffee == 'i') coffeePrice = 69;
    else if (Coffee == 'J' || Coffee == 'j') coffeePrice = 69;
    else if (Coffee == 'K' || Coffee == 'k') coffeePrice = 69;
    else if (Coffee == 'L' || Coffee == 'l') coffeePrice = 69;
    else if (Coffee == 'M' || Coffee == 'm') coffeePrice = 69;
    else if (Coffee == 'N' || Coffee == 'n') coffeePrice = 69;
    else {cout << "\n" << endl; cout << " Invalid coffee choice! "; return 0;} 
     
        cout << " Enter the quantity: ";
        cin >> quantity;
       
        if (quantity <= 0) { cout << "\n" << endl; cout << " Invalid quantity."; return 0; } 
      
        firstQty = quantity;
        totalPrice = coffeePrice * firstQty;
        
        cout << " Price per item: " << coffeePrice << endl;
        cout << " Quantity: " << firstQty << endl;
        cout << " Subtotal: " << totalPrice << endl;
        
       cout << "-------------------------------------" << endl;
       cout << "      Do you want to add-ons?        " << endl;
       cout << "-------------------------------------" << endl;
       cout << "1. Yes                               " << endl;
       cout << "2. No                                " << endl;
       cout << " Select your choice: ";
       cin >> AddOns;
    
    if (AddOns == '1')
    {
        cout << "---------------------------------" << endl;
        cout << "            ADD-ONS              " << endl;
        cout << "---------------------------------" << endl;
        cout << "                              Price " << endl;
        cout << "A. Espresso Natta -            10 " << endl;
        cout << "B. Caramel Drizzle -            5 " << endl;
        cout << "C. Chocolate Drizzle -          5 " << endl;
        cout << "D. Strawberry Drizzle -         5 " << endl;
        cout << " Select your choice: ";
        cin >> AddOns;
        
    if (AddOns == 'A' || AddOns == 'a') AddOnsPrice = 10;
    else if (AddOns == 'b' || AddOns == 'B') AddOnsPrice = 5;
    else if (AddOns == 'C' || AddOns == 'c') AddOnsPrice = 5;
    else if (AddOns == 'D' || AddOns == 'd') AddOnsPrice = 5;
    else {cout << "\n" << endl; cout << " Invalid! "; return 0;}
        
        cout << " Subtotal: " << AddOnsPrice << endl;
    
        totalPrice += AddOnsPrice;
    }  
    else {cout << "\n" << endl; cout << " Invalid! " << endl; return 0;} 
        cout << "\n" << endl;
        cout << " Total Price: " << totalPrice << endl;
        cout << " Enter the amount you want to pay: ";
        cin >> payment;

    if (payment >= totalPrice) {
        cout << " Payment successful " << endl;
        cout << "\n" << endl;
        cout << "Your change is: " << payment - totalPrice << " PHP";
    } 
    else {
    double kulang = totalPrice - payment;
        cout << "\n" << endl;
        cout << " Insufficient Funds! Kulang ka ng " << kulang << " PHP";
    }
    return 0;
    }
    else if (Menu == '2')
    {
       cout << "-----------------------------" << endl;
       cout << "          NON COFFEE         " << endl;
       cout << "-----------------------------" << endl;
       cout << "      Menu                     Price(Medium) " << endl;
       cout << "A. White Strawberry -               49 " << endl;
       cout << "B. White Matcha -                   49 " << endl;
       
       cout << "-----------------------------" << endl;
       cout << "          NON COFFEE         " << endl;
       cout << "-----------------------------" << endl;
       cout << "      Menu                      Price(Large) " << endl;
       cout << "C. White Strawberry -               69 " << endl;
       cout << "D. White Matcha -                   69 " << endl;
       cout << " Select your choice: ";
       cin >> noncoffee;
       
    if (noncoffee == 'A' || noncoffee == 'a') noncoffeePrice = 49;
    else if (noncoffee == 'B' || noncoffee == 'b') noncoffeePrice = 49;
    else if (noncoffee == 'C' || noncoffee == 'c') noncoffeePrice = 69;
    else if (noncoffee == 'D' || noncoffee == 'd') noncoffeePrice = 69;
    else {cout << "\n" << endl; cout << "Invalid non coffee choice!"; return 0;} 
    
       cout << " Enter the quantity: ";
       cin >> quantity;
        
       if (quantity <= 0) {cout << "\n" << endl; cout << " Invalid quantity."; return 0;}
     
    firstQty = quantity;   
    totalPrice = quantity * noncoffeePrice;
    
        cout << " Price per item: " << noncoffeePrice << endl;
        cout << " Quantity: " << firstQty << endl;
        cout << " Subtotal: " << totalPrice << endl;
        
       cout << "-------------------------------------" << endl;
       cout << "      Do you want to add-ons?        " << endl;
       cout << "-------------------------------------" << endl;
       cout << "1. Yes                               " << endl;
       cout << "2. No                                " << endl;
       cout << " Select your choice: ";
       cin >> AddOns; 
    
    if (AddOns == '1')
    {
        cout << "---------------------------------" << endl;
        cout << "            ADD-ONS              " << endl;
        cout << "---------------------------------" << endl;
        cout << "                              Price " << endl;
        cout << "A. Espresso Natta -            10 " << endl;
        cout << "B. Caramel Drizzle -            5 " << endl;
        cout << "C. Chocolate Drizzle -          5 " << endl;
        cout << "D. Strawberry Drizzle -         5 " << endl;
        cout << " Select your choice: ";
        cin >> AddOns;
        
    if (AddOns == 'A' || AddOns == 'a') AddOnsPrice = 10;
    else if (AddOns == 'b' || AddOns == 'B') AddOnsPrice = 5;
    else if (AddOns == 'C' || AddOns == 'c') AddOnsPrice = 5;
    else if (AddOns == 'D' || AddOns == 'd') AddOnsPrice = 5;
    else {cout << "\n" << endl; cout << " Invalid! "; return 0;}
        
        cout << " Subtotal: " << AddOnsPrice << endl;
    
        totalPrice += AddOnsPrice;
    }  
    else {cout << "\n" << endl; cout << " Invalid! " << endl; return 0;} 
        cout << "\n" << endl;
        cout << " Total Price: " << totalPrice << endl;
        cout << " Enter the amount you want to pay: ";
        cin >> payment;
    
    if (payment >= totalPrice) {
    double change = payment - totalPrice;
        cout << " Payment successfull " << endl;
        cout << "\n" << endl;
        cout << "Your change is: " << change << " pesos" << endl;
    }
    else {
    double kulang = totalPrice - payment;
        cout << "\n" << endl;
        cout << " Insufficient Funds! Kulang ka ng " << kulang << " pesos." << endl;
    }
    return 0;
    }  
    else if (Menu == '3')
    {
        cout << "--------------------------------" << endl;
        cout << "        SPARKLING YAKULT        " << endl;
        cout << "--------------------------------" << endl;
        cout << "      Menu                      Price(Medium) " << endl;
        cout << "A. Lemon Yakult -                    49 " << endl;
        cout << "B. Strawberry Yakult -               49 " << endl;
        cout << "C. Mango Yakult -                    49 " << endl;
        cout << "D. Lychee Yakult -                   49 " << endl;
        cout << "E. Green Apple Yakult -              49 " << endl;
        
        cout << "--------------------------------" << endl;
        cout << "        SPARKLING YAKULT        " << endl;
        cout << "--------------------------------" << endl;
        cout << "       Menu                     Price(Large) " << endl;
        cout << "F. Lemon Yakult -                    69 " << endl;
        cout << "G. Strawberry Yakult -               69 " << endl;
        cout << "H. Mango Yakult -                    69 " << endl;
        cout << "I. Lychee Yakult -                   69 " << endl;
        cout << "J. Green Apple Yakult -              69 " << endl;
        cout << " Select your choice: ";
        cin >> yakult;

    if (yakult == 'A' || yakult == 'a') yakultPrice = 49;
    else if (yakult == 'B' || yakult == 'b') yakultPrice = 49;
    else if (yakult == 'C' || yakult == 'c') yakultPrice = 49;
    else if (yakult == 'D' || yakult == 'd') yakultPrice = 49;
    else if (yakult == 'E' || yakult == 'e') yakultPrice = 49;
    else if (yakult == 'F' || yakult == 'f') yakultPrice = 69;
    else if (yakult == 'G' || yakult == 'g') yakultPrice = 69;
    else if (yakult == 'H' || yakult == 'h') yakultPrice = 69;
    else if (yakult == 'I' || yakult == 'i') yakultPrice = 69;
    else if (yakult == 'J' || yakult == 'j') yakultPrice = 69;
    else {cout << "\n" << endl; cout << "Invalid sparkling yakult choice!"; return 0;}
    
    cout << " Enter the quantity: ";
    cin >> quantity;

    if (quantity <= 0) {cout << "\n" << endl; cout << " Invalid quantity."; return 0;}
    
    firstQty = quantity;  
    totalPrice = yakultPrice * firstQty;

    cout << " Price per item: " << yakultPrice << endl;
    cout << " Quantity: " << firstQty << endl;
    cout << " Subtotal: " << totalPrice << endl;
        
       cout << "-------------------------------------" << endl;
       cout << "      Do you want to add-ons?        " << endl;
       cout << "-------------------------------------" << endl;
       cout << "1. Yes                               " << endl;
       cout << "2. No                                " << endl;
       cout << " Select your choice: ";
       cin >> AddOns; 
    
    if (AddOns == '1')
    {
        cout << "---------------------------------" << endl;
        cout << "            ADD-ONS              " << endl;
        cout << "---------------------------------" << endl;
        cout << "                              Price " << endl;
        cout << "A. Espresso Natta -            10 " << endl;
        cout << "B. Caramel Drizzle -            5 " << endl;
        cout << "C. Chocolate Drizzle -          5 " << endl;
        cout << "D. Strawberry Drizzle -         5 " << endl;
        cout << " Select your choice: ";
        cin >> AddOns;
        
    if (AddOns == 'A' || AddOns == 'a') AddOnsPrice = 10;
    else if (AddOns == 'b' || AddOns == 'B') AddOnsPrice = 5;
    else if (AddOns == 'C' || AddOns == 'c') AddOnsPrice = 5;
    else if (AddOns == 'D' || AddOns == 'd') AddOnsPrice = 5;
    else {cout << "\n" << endl; cout << " Invalid! "; return 0;}
        
        cout << " Subtotal: " << AddOnsPrice << endl;
    
        totalPrice += AddOnsPrice;
    }
    else {cout << "\n" << endl; cout << " Invalid! " << endl; return 0;} 
    cout << " Total Price: " << totalPrice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> payment;

    if (payment >= totalPrice) {
        cout << " Payment successful " << endl;
        cout << "\n" << endl;
        cout << "Your change is: " << payment - totalPrice << " PHP";
    } else {
    double kulang = totalPrice - payment;
        cout << "\n" << endl;
        cout << " Insufficient Funds! Kulang ka ng " << kulang << " PHP";
    }
    return 0;
}
    else if (Menu == '4')
    { 
        cout << "----------------------------------" << endl;
        cout << "            FRUIT SODA            " << endl;
        cout << "----------------------------------" << endl;
        cout << "     Menu                        Price(Medium) " << endl;
        cout << "A. Green Apple Soda -                 49 " << endl;
        cout << "B. Strawberry Soda -                  49 " << endl;
        cout << "C. Mango Soda -                       49 " << endl;
        cout << "D. Lychee Soda -                      49 " << endl;
        
        cout << "----------------------------------" << endl;
        cout << "            FRUIT SODA            " << endl;
        cout << "----------------------------------" << endl;
        cout << "     Menu                        Price(Large) " << endl;
        cout << "E. Green Apple Soda -                 69 " << endl;
        cout << "F. Strawberry Soda -                  69 " << endl;
        cout << "G. Mango Soda -                       69 " << endl;
        cout << "H. Lychee Soda -                      69 " << endl;
        cout << " Select your choice: ";
        cin >> soda;
        
    if (soda == 'A' || yakult == 'a') sodaPrice = 49;
    else if (soda == 'B' || soda == 'b') sodaPrice = 49;
    else if (soda == 'C' || soda == 'c') sodaPrice = 49;
    else if (soda == 'D' || soda == 'd') sodaPrice = 49;
    else if (soda == 'E' || soda == 'e') sodaPrice = 49;
    else if (soda == 'F' || soda == 'f') sodaPrice = 69;
    else if (soda == 'G' || soda == 'g') sodaPrice = 69;
    else if (soda == 'H' || soda == 'h') sodaPrice = 69;
    else {cout << "\n" << endl; cout << "Invalid fruit soda choice!"; return 0;}
    
    cout << " Enter the quantity: ";
    cin >> quantity;
    
    if (quantity <= 0) {cout << "\n" << endl; cout << " Invalid quantity."; return 0;}
    
    firstQty = quantity;  
    totalPrice = sodaPrice * firstQty;

    cout << " Price per item: " << sodaPrice << endl;
    cout << " Quantity: " << firstQty << endl;
    cout << " Subtotal: " << totalPrice << endl;
        
       cout << "-------------------------------------" << endl;
       cout << "      Do you want to add-ons?        " << endl;
       cout << "-------------------------------------" << endl;
       cout << "1. Yes                               " << endl;
       cout << "2. No                                " << endl;
       cout << " Select your choice: ";
       cin >> AddOns; 
    
    if (AddOns == '1')
    {
        cout << "---------------------------------" << endl;
        cout << "            ADD-ONS              " << endl;
        cout << "---------------------------------" << endl;
        cout << "                              Price " << endl;
        cout << "A. Espresso Natta -            10 " << endl;
        cout << "B. Caramel Drizzle -            5 " << endl;
        cout << "C. Chocolate Drizzle -          5 " << endl;
        cout << "D. Strawberry Drizzle -         5 " << endl;
        cout << " Select your choice: ";
        cin >> AddOns;
        
    if (AddOns == 'A' || AddOns == 'a') AddOnsPrice = 10;
    else if (AddOns == 'b' || AddOns == 'B') AddOnsPrice = 5;
    else if (AddOns == 'C' || AddOns == 'c') AddOnsPrice = 5;
    else if (AddOns == 'D' || AddOns == 'd') AddOnsPrice = 5;
    else {cout << "\n" << endl; cout << " Invalid! "; return 0;}
        
        cout << " Subtotal: " << AddOnsPrice << endl;
    
        totalPrice += AddOnsPrice;
    }
    else {cout << "\n" << endl; cout << " Invalid! " << endl; return 0;} 
    cout << " Total Price: " << totalPrice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> payment;

    if (payment >= totalPrice) {
        cout << " Payment successful " << endl;
        cout << "\n" << endl;
        cout << "Your change is: " << payment - totalPrice << " PHP";
    } else {
    double kulang = totalPrice - payment;
        cout << "\n" << endl;
        cout << " Insufficient Funds! Kulang ka ng " << kulang << " PHP";
    }
}
return 0;
}