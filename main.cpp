#include <iostream>
using namespace std;

int main()
{

    char Menu, Coffee, toppingchoice, syrup, milkbased, bobamilktea, saucechoice, coffeemilk, addyesno, addchoice, AddOns;
    double coffeePrice, priceToppings, milkbasedPrice, priceSyrup, bobamilkteaPrice, saucePrice, coffeemilkPrice, addPrice;
    double price, totalPrice, bobaPrice, AddOnsPrice, payment;
    int total, quantity, firstQty, addQty, addonTotal;
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "          ORDERING SYSTEM          " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "1. Coffee "  << endl;
        cout << "2. Milk based "<< endl;
        cout << "3. Boba Milktea " << endl;
        cout << " Choose your order: ";
        cin >> Menu;
        
    if (Menu == '1')   
        cout << " You choose a Coffee " << endl;
    
    else if (Menu == '2')
        cout << " You choose a Milk based " << endl;
        
    else if (Menu == '3')
        cout << " You choose a Boba Milktea " << endl;
       
    else {
        cout << " Invalid! ";
    return 0;
    }    
    }
    if (Menu == '1')
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "            ICE COFFEE             " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "       Menu                      Price " << endl;
        cout << "A. WMU Blend latte -              150 " << endl;
        cout << "B. Americano -                    150 " << endl;
        cout << "C. Caramel Macchiato -            155 " << endl;
        cout << "D. Salted Caramel -               155 " << endl;
        cout << "E. White Mocha -                  155 " << endl;
        cout << "F. Cafe Mocha -                   155 " << endl;

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "            HOT COFFEE             " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "       Menu                      Price " << endl;
        cout << "G. WMU Blend latte -              120 " << endl;
        cout << "H. Americano -                    120 " << endl;
        cout << "I. Caramel Macchiato -            125 " << endl;
        cout << "J. Salted Caramel -               125 " << endl;
        cout << "K. White Mocha -                  125 " << endl;
        cout << "L. Cafe Mocha -                   125 " << endl;
        cout << " Select your choice: ";
        cin >> Coffee;
    
    if (Coffee == 'A' || Coffee == 'a') coffeePrice = 150;
    else if (Coffee == 'B' || Coffee == 'b') coffeePrice = 150;
    else if (Coffee == 'C' || Coffee == 'c') coffeePrice = 155;
    else if (Coffee == 'D' || Coffee == 'd') coffeePrice = 155;
    else if (Coffee == 'E' || Coffee == 'e') coffeePrice = 155;
    else if (Coffee == 'F' || Coffee == 'f') coffeePrice = 155;
    else if (Coffee == 'G' || Coffee == 'g') coffeePrice = 120;
    else if (Coffee == 'H' || Coffee == 'h') coffeePrice = 120;
    else if (Coffee == 'I' || Coffee == 'i') coffeePrice = 125;
    else if (Coffee == 'J' || Coffee == 'j') coffeePrice = 125;
    else if (Coffee == 'K' || Coffee == 'k') coffeePrice = 125;
    else if (Coffee == 'L' || Coffee == 'l') coffeePrice = 125;
    else { cout << " Invalid coffee choice! "; return 0; } 
     
        cout << " Enter the quantity: ";
        cin >> quantity;
       
        if (quantity <= 0) { cout << " Invalid quantity. Please enter the positive number. "; return 0; } 
      
        firstQty = quantity;
        totalPrice = coffeePrice * firstQty;
        
        cout << " Price per item: " << coffeePrice << endl;
        cout << " Quantity: " << firstQty << endl;
        cout << " Subtotal: " << totalPrice << endl;
    
        cout << "-------------------------------------------" << endl;
        cout << " Do you want to add extra coffee and milk? " << endl;
        cout << "-------------------------------------------" << endl;
        cout << "1. Yes                               " << endl;
        cout << "2. No                                " << endl;
        cout << " Select your choice: ";
        cin >> coffeemilk;
      
    if (coffeemilk == '1')
    {
        cout << "------------------------------------" << endl;
        cout << "          Coffee and Milk           " << endl;
        cout << "------------------------------------" << endl;
        cout << "a. Espresso shot -             35 " << endl;
        cout << "b. Milk -                      20 " << endl;
        cout << " Select your choice: ";
        cin >> coffeemilk;
    
    if (coffeemilk == 'a' || coffeemilk == 'A') coffeemilkPrice = 35;
    else if (coffeemilk == 'b' || coffeemilk == 'B') coffeemilkPrice = 20;
    else { cout << " Invalid! "; return 0; }
    
        cout << " Enter the quantity: ";
        cin >> addQty;

        if (addQty <= 0) {
            cout << " Invalid quantity.";
            return 0;
        }
        addonTotal = coffeemilkPrice * addQty;
        
        cout << " Price per item: " << coffeemilkPrice << endl;
        cout << " Quantity: " << addQty << endl;
        cout << " Subtotal: " << addonTotal << endl;
    
        totalPrice += addonTotal;
    } 
        cout << "---------------------------------" << endl;
        cout << "    Do you want to add syrup?    "<< endl;
        cout << "---------------------------------" << endl;
        cout << "1. Yes " << endl;
        cout << "2. No " << endl;
        cout << " Select your choice: ";
        cin >> syrup;
    
    if (syrup == '1')
    {   
        cout << "------------------------------" << endl;
        cout << "      Select your choice      " << endl;
        cout << "------------------------------" << endl;
        cout << "c. Caramel -                20 "<< endl;
        cout << "d. Hazelnut -               20 "<< endl;
        cout << "e. French Vanilla -         20 "<< endl;
        cout << "f. Roasted Almond -         20 "<< endl;
        cout << "g. Sugar syrup -            20 "<< endl;
        cout << " Select your choice: ";
        cin >> syrup;
       
    if (syrup == 'c' || syrup == 'C') priceSyrup = 20;
    else if (syrup == 'd' || syrup == 'D') priceSyrup = 20;
    else { cout << " Invalid! "; return 0; }
    
        cout << " Enter the quantity: ";
        cin >> addQty;

        if (addQty <= 0) {
            cout << " Invalid quantity.";
            return 0;
        }
        addonTotal = priceSyrup * addQty;
    
        cout << " Price per item: " << priceSyrup << endl;
        cout << " Quantity: " << addQty << endl;
        cout << " Subtotal: " << addonTotal << endl;
    
        totalPrice += addonTotal;
    } 
        cout << "------------------------------" << endl;
        cout << "   Do you want to add Sauce?  " << endl;
        cout << "------------------------------" << endl;
        cout << "1. Yes                        " << endl;
        cout << "2. No                         " << endl;
        cout << " Select your choice: ";
        cin >> saucechoice;
        
    if (saucechoice == '1')
    {
        cout << "------------------------------" << endl;
        cout << "      Select your choice      " << endl;
        cout << "------------------------------" << endl;
        cout << "h. Caramel -                 30 " << endl;
        cout << "i. Salted Caramel -          30 " << endl;
        cout << "j. White Chocolate -         30 " << endl;
        cout << "k. Dark Chocolate -          30 " << endl;
        cout << " Select your choice: ";
        cin >> saucechoice;
        
    if (saucechoice == 'h' || saucechoice == 'H') saucePrice = 30;
    else if (saucechoice == 'i' || saucechoice == 'I') saucePrice = 30;
    else if (saucechoice == 'j' || saucechoice == 'J') saucePrice = 30;
    else if (saucechoice == 'k' || saucechoice == 'K') saucePrice = 30;    
    else { cout << " Invalid! "; return 0; }  

        cout << " Enter the quantity: ";
        cin >> addQty;

        if (addQty <= 0) {
            cout << " Invalid quantity.";
            return 0;
        }
        addonTotal = saucePrice * addQty;
        
        cout << " Price per item: " << saucePrice << endl;
        cout << " Quantity: " << addQty << endl;
        cout << " Subtotal: " << addonTotal << endl;
    
        totalPrice += addonTotal;
    }
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
        cout << "l. Coffee Jelly -             25 " << endl;
        cout << "m. Nata -                     25 " << endl;
        cout << "n. Popping Boba -             25 " << endl;
        cout << "o. Boba Pearls -              25 " << endl;
        cout << " Select your choice: ";
        cin >> AddOns;
        
    if (AddOns == 'l' || AddOns == 'L') AddOnsPrice = 25;
    else if (AddOns == 'm' || AddOns == 'M') AddOnsPrice = 25;
    else if (AddOns == 'n' || AddOns == 'N') AddOnsPrice = 25;
    else if (AddOns == 'o' || AddOns == 'O') AddOnsPrice = 25;
    else { cout << " Invalid! "; return 0; }

        cout << " Enter the quantity: ";
        cin >> addQty;

        if (addQty <= 0) {
            cout << " Invalid quantity.";
            return 0;
        }
        addonTotal = AddOnsPrice * addQty;
        
        cout << " Price per item: " << AddOnsPrice << endl;
        cout << " Quantity: " << addQty << endl;
        cout << " Subtotal: " << addonTotal << endl;
    
    totalPrice += addonTotal;
    }
    cout << "----------------------------------------" << endl;
    cout << "      Do you want to add toppings?      " << endl;
    cout << "----------------------------------------" << endl;
    cout << "1. Yes                                  " << endl;
    cout << "2. No                                   " << endl;
    cout << " Select your choice: ";
    cin >> toppingchoice;
    
    if (toppingchoice == '1')
    {
        cout << "-----------------------------------" << endl;
        cout << "            Toppings               " << endl;
        cout << "-----------------------------------" << endl;
        cout << "p. Whipped Cream -              30 " << endl;
        cout << "q. Vanilla Ice Cream -          30 " << endl;
        cout << " Select your choice: ";
        cin >> toppingchoice;
        
    if (toppingchoice == 'p' || toppingchoice == 'P') priceToppings = 30;
    else if (toppingchoice == 'q' || toppingchoice == 'Q') priceToppings = 30;
    else { cout << " Invalid! "; return 0; }
    
        cout << " Enter the quantity: ";
        cin >> addQty;

        if (addQty <= 0) {
            cout << " Invalid quantity.";
            return 0;
        }
        addonTotal = priceToppings * addQty;
        
        cout << " Price per item: " << priceToppings << endl;
        cout << " Quantity: " << addQty << endl;
        cout << " Subtotal: " << addonTotal << endl;
    
    totalPrice += addonTotal;
    }
        cout << " Total Price: " << totalPrice << endl;
        cout << " Enter the amount you want to pay: ";
        cin >> payment;
    
    if (payment >= totalPrice) {
    double change = payment - totalPrice;
        cout << " Payment successfull " << endl;
        cout << "Your change is: " << change << " PHP" << endl;
    }
    else {
    double kulang = totalPrice - payment;
        cout << " Insufficient Funds! Kulang ka ng " << kulang << " PHP." << endl;
    }
    return 0;
   }
    else if (Menu == '2')
    {
       cout << "-----------------------------" << endl;
       cout << "          ICE BLEND          " << endl;
       cout << "-----------------------------" << endl;
       cout << "      Menu                        Price " << endl;
       cout << "A. Thai Tea -                      120 " << endl;
       cout << "B. Matcha -                        150 " << endl;
       cout << "C. Dark Chocolate -                150 " << endl;
       cout << "D. Milkyberry -                    150 " << endl;
       cout << "E. Oreo Cream -                    150 " << endl;
       cout << "F. Blueberry Milk -                150 " << endl; 
       cout << "G. Match Oreo -                    155 " << endl;
       cout << "H. Strawberry Matcha -             155 " << endl; 
       cout << "I. Nutella -                       155 " << endl; 
       
       cout << "-----------------------------" << endl;
       cout << "          HOT BLEND          " << endl;
       cout << "-----------------------------" << endl;
       cout << "      Menu                        Price " << endl;
       cout << "J. Thai Tea -                      120 " << endl;
       cout << "K. Matcha -                        120 " << endl;
       cout << "L. Dark Chocolate -                120 " << endl;
       cout << "M. Milkyberry -                    150 " << endl;
       cout << "N. Oreo Cream -                    150 " << endl;
       cout << "O. Blueberry Milk -                150 " << endl; 
       cout << "P. Match Oreo -                    155 " << endl;
       cout << "Q. Strawberry Matcha -             155 " << endl; 
       cout << "R. Nutella -                       155 " << endl; 
       cout << " Select your choice: ";
       cin >> milkbased;
       
    if (milkbased == 'A' || milkbased == 'a') milkbasedPrice = 120;
    else if (milkbased == 'B' || milkbased == 'b') milkbasedPrice = 150;
    else if (milkbased == 'C' || milkbased == 'c') milkbasedPrice = 150;
    else if (milkbased == 'D' || milkbased == 'd') milkbasedPrice = 150;
    else if (milkbased == 'E' || milkbased == 'e') milkbasedPrice = 150;
    else if (milkbased == 'F' || milkbased == 'f') milkbasedPrice = 150;
    else if (milkbased == 'G' || milkbased == 'g') milkbasedPrice = 155;
    else if (milkbased == 'H' || milkbased == 'h') milkbasedPrice = 155;
    else if (milkbased == 'I' || milkbased == 'i') milkbasedPrice = 155;
    else if (milkbased == 'J' || milkbased == 'j') milkbasedPrice = 120;
    else if (milkbased == 'K' || milkbased == 'k') milkbasedPrice = 150;
    else if (milkbased == 'L' || milkbased == 'l') milkbasedPrice = 150;
    else if (milkbased == 'M' || milkbased == 'm') milkbasedPrice = 150;
    else if (milkbased == 'N' || milkbased == 'n') milkbasedPrice = 150;
    else if (milkbased == 'O' || milkbased == 'o') milkbasedPrice = 150;
    else if (milkbased == 'P' || milkbased == 'p') milkbasedPrice = 155;
    else if (milkbased == 'Q' || milkbased == 'q') milkbasedPrice = 155;
    else if (milkbased == 'R' || milkbased == 'r') milkbasedPrice = 155;
    else { cout << "Invalid milkbased choice!"; return 0; } 
    
       cout << " Enter the quantity: ";
       cin >> quantity;
        
       if (quantity <= 0) { cout << " Invalid quantity. Please enter the positive number. "; return 0; }
       
    total = quantity * milkbasedPrice;
    
        cout << " Price per item: " << milkbasedPrice << endl;
        cout << " Quantity: " << quantity << endl;
        cout << " Total Price: " << total << endl;
        cout << " Enter the amount you want to pay: ";
        cin >> payment;
    
    if (payment >= milkbasedPrice) {
    double change = payment - milkbasedPrice;
        cout << " Payment successfull " << endl;
        cout << "Your change is: " << change << " PHP" << endl;
    }
    else {
    double kulang = milkbasedPrice - payment;
        cout << " Insufficient Funds! Kulang ka ng " << kulang << " PHP." << endl;
    }
    return 0;
    }  
    
    else if (Menu == '3')
    {
        cout << "--------------------------------" << endl;
        cout << "             GRAND              " << endl;
        cout << "--------------------------------" << endl;
        cout << "      Menu                      Price " << endl;
        cout << "A. Brown Sugar -                 150 " << endl;
        cout << "B. Wintermelon -                 150 " << endl;
        cout << "C. Matcha -                      150 " << endl;
        cout << "D. Okinawa -                     150 " << endl;
        cout << "E. Strawberry Vanilla -          150 " << endl;
        cout << "F. Korean Banana -               150 " << endl;
        cout << "G. Dark Choco -                  150 " << endl;
        cout << "H. Red Velvet -                  150 " << endl;
        cout << "I. Caramel Macchiato -           150 " << endl;
        
        cout << "--------------------------------" << endl;
        cout << "             DEMI               " << endl;
        cout << "--------------------------------" << endl;
        cout << "       Menu                     Price " << endl;
        cout << "J. Brown Sugar -                 130 " << endl;
        cout << "K. Wintermelon -                 130 " << endl;
        cout << "L. Matcha -                      130 " << endl;
        cout << "M. Okinawa -                     130 " << endl;
        cout << "N. Strawberry Vanilla -          130 " << endl;
        cout << "O. Korean Banana -               130 " << endl;
        cout << "P. Dark Choco -                  130 " << endl;
        cout << "Q. Red Velvet -                  130 " << endl;
        cout << "R. Caramel Macchiato -           130 " << endl;
        cout << " Select your choice: ";
        cin >> bobamilktea;

    if (bobamilktea == 'A' || bobamilktea == 'a') bobamilkteaPrice = 150;
    else if (bobamilktea == 'B' || bobamilktea == 'b') bobamilkteaPrice = 150;
    else if (bobamilktea == 'C' || bobamilktea == 'c') bobamilkteaPrice = 150;
    else if (bobamilktea == 'D' || bobamilktea == 'd') bobamilkteaPrice = 150;
    else if (bobamilktea == 'E' || bobamilktea == 'e') bobamilkteaPrice = 150;
    else if (bobamilktea == 'F' || bobamilktea == 'f') bobamilkteaPrice = 150;
    else if (bobamilktea == 'G' || bobamilktea == 'g') bobamilkteaPrice = 150;
    else if (bobamilktea == 'H' || bobamilktea == 'h') bobamilkteaPrice = 150;
    else if (bobamilktea == 'I' || bobamilktea == 'i') bobamilkteaPrice = 150;

    else if (bobamilktea == 'J' || bobamilktea == 'j') bobamilkteaPrice = 130;
    else if (bobamilktea == 'K' || bobamilktea == 'k') bobamilkteaPrice = 130;
    else if (bobamilktea == 'L' || bobamilktea == 'l') bobamilkteaPrice = 130;
    else if (bobamilktea == 'M' || bobamilktea == 'm') bobamilkteaPrice = 130;
    else if (bobamilktea == 'N' || bobamilktea == 'n') bobamilkteaPrice = 130;
    else if (bobamilktea == 'O' || bobamilktea == 'o') bobamilkteaPrice = 130;
    else if (bobamilktea == 'P' || bobamilktea == 'p') bobamilkteaPrice = 130;
    else if (bobamilktea == 'Q' || bobamilktea == 'q') bobamilkteaPrice = 130;
    else if (bobamilktea == 'R' || bobamilktea == 'r') bobamilkteaPrice = 130;
    else { cout << "Invalid bobamilktea choice!"; return 0; }
    
    cout << " Enter the quantity: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << " Invalid quantity.";
        return 0;
    }
    firstQty = quantity;  
    total = bobamilkteaPrice * firstQty;

    cout << " Price per item: " << bobamilkteaPrice << endl;
    cout << " Quantity: " << firstQty << endl;
    cout << " Subtotal: " << total << endl;

    bobaPrice += total;  

    cout << "------------------------------------" << endl;
    cout << "        Do you want to add?         " << endl;
    cout << "------------------------------------" << endl;
    cout << "1. Yes" << endl;
    cout << "2. No" << endl;
    cout << " Select your choice: ";
    cin >> addyesno;

    if (addyesno == '1') {

        cout << "------------------------------------" << endl;
        cout << "                ADD                 " << endl;
        cout << "------------------------------------" << endl;
        cout << "a. Cheesecake - 30" << endl;
        cout << "b. Nata / Boba Pearl - 25" << endl;
        cout << " Select your choice: ";
        cin >> addchoice;

        if (addchoice == 'a' || addchoice == 'A') addPrice = 30;
        else if (addchoice == 'b' || addchoice == 'B') addPrice = 25;
        else { cout << " Invalid! "; return 0; }

        cout << " Enter the quantity: ";
        cin >> addQty;

        if (addQty <= 0) {
            cout << " Invalid quantity.";
            return 0;
        }
        addonTotal = addPrice * addQty;

        cout << " Price per item: " << addPrice << endl;
        cout << " Quantity: " << addQty << endl;
        cout << " Subtotal: " << addonTotal << endl;

        bobaPrice += addonTotal; 
    }
    else if (addyesno == '2') {
    }
    else {
        cout << " Invalid! ";
        return 0;
    }
    cout << " Total Price: " << bobaPrice << endl;
    cout << " Enter the amount you want to pay: ";
    cin >> payment;

    if (payment >= bobaPrice) {
        cout << " Payment successful " << endl;
        cout << "Your change is: " << payment - bobaPrice << " PHP";
    } else {
    double kulang = bobaPrice - payment;
        cout << " Insufficient Funds! Kulang ka ng " << kulang << " PHP";
    }
    return 0;
}
   }