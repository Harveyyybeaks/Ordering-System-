#include <iostream>
using namespace std;

int main()
{

    char Menu, Coffee, toppingchoice, syrup, milkbased, bobamilktea, saucechoice, coffeemilk, addchoice, AddOns;
    double coffeePrice, priceToppings, milkbasedPrice, priceSyrup, bobamilkteaPrice, saucePrice, coffeemilkPrice, addPrice;
    double price, totalPrice, bobaPrice, AddOnsPrice;
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "          ORDERING SYSTEM          " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << " A. Coffee "  << endl;
        cout << " B. Milk based "<< endl;
        cout << " C. Boba Milktea " << endl;
        cout << "Choose your order: ";
        cin >> Menu;
        
    if (Menu == 'A' || Menu == 'a')   
        cout << " You choose a Coffee " << endl;
    
    else if (Menu == 'B' || Menu == 'b')
        cout << " You choose a Milk based " << endl;
        
    else if (Menu == 'C' || Menu == 'c')
        cout << " You choose a Boba Milktea " << endl;
       
    else {
        cout << " Invalid Input ";
    return 0;
    }    
    }
    
    if (Menu == 'A' || Menu  == 'a')
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "            ICE COFFEE             " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "       Menu                      Price " << endl;
        cout << "1. WMU Blend latte -              150 " << endl;
        cout << "2. Americano -                    150 " << endl;
        cout << "3. Caramel Macchiato -            155 " << endl;
        cout << "4. Salted Caramel -               155 " << endl;
        cout << "5. White Mocha -                  155 " << endl;
        cout << "6. Cafe Mocha -                   155 " << endl;

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "            HOT COFFEE             " << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "       Menu                      Price " << endl;
        cout << "7. WMU Blend latte -              120 " << endl;
        cout << "8. Americano -                    120 " << endl;
        cout << "9. Caramel Macchiato -            125 " << endl;
        cout << "10. Salted Caramel -              125 " << endl;
        cout << "11. White Mocha -                 125 " << endl;
        cout << "12. Cafe Mocha -                  125 " << endl;
        cout << " Select your choice:";
        cin >> Coffee;
    
    if (Coffee == '1')
        coffeePrice = 150;

        else if (Coffee == '2')
        coffeePrice = 150;

        else if (Coffee == '3')
        coffeePrice = 155;

        else if (Coffee == '4')
        coffeePrice = 155;

        else if (Coffee == '5')
        coffeePrice = 155;

        else if (Coffee == '6')
        coffeePrice = 155;

        else if (Coffee == '7')
        coffeePrice = 120;

        else if (Coffee == '8')
        coffeePrice = 120;

        else if (Coffee == '9')
        coffeePrice = 125;

        else if (Coffee == '10')
        coffeePrice = 125;

        else if (Coffee == '11')
        coffeePrice = 125;

        else if (Coffee == '12')
        coffeePrice = 125;
        
        else {
        cout << " Invalid Input ";
    return 0;    
    } 
       totalPrice += coffeePrice;
    }   
    else if (Menu == 'B' || Menu == 'b')
    {
       cout << "-----------------------------" << endl;
       cout << "          ICE BLEND          " << endl;
       cout << "-----------------------------" << endl;
       cout << "      Menu                        Price " << endl;
       cout << "1. Thai Tea -                      120 " << endl;
       cout << "2. Matcha -                        150 " << endl;
       cout << "3. Dark Chocolate -                150 " << endl;
       cout << "4. Milkyberry -                    150 " << endl;
       cout << "5. Oreo Cream -                    150 " << endl;
       cout << "6. Blueberry Milk -                150 " << endl; 
       cout << "7. Match Oreo -                    155 " << endl;
       cout << "8. Strawberry Matcha -             155 " << endl; 
       cout << "9. Nutella -                       155 " << endl; 
       
       cout << "-----------------------------" << endl;
       cout << "          HOT BLEND          " << endl;
       cout << "-----------------------------" << endl;
       cout << "      Menu                        Price " << endl;
       cout << "10. Thai Tea -                      120 " << endl;
       cout << "11. Matcha -                        120 " << endl;
       cout << "12. Dark Chocolate -                120 " << endl;
       cout << "13. Milkyberry -                    150 " << endl;
       cout << "14. Oreo Cream -                    150 " << endl;
       cout << "15. Blueberry Milk -                150 " << endl; 
       cout << "16. Match Oreo -                    155 " << endl;
       cout << "17. Strawberry Matcha -             155 " << endl; 
       cout << "18. Nutella -                       155 " << endl; 
       cout << " Select your choice: ";
       cin >> milkbased;
      
    if (milkbased == '1')
        milkbasedPrice = 120;
       
        else if (milkbased == '2')
        milkbasedPrice = 150;
        
        else if (milkbased == '3')
        milkbasedPrice = 150;
        
        else if (milkbased == '4')
        milkbasedPrice = 150;
        
        else if (milkbased == '5')
        milkbasedPrice = 150;
        
        else if (milkbased == '6')
        milkbasedPrice = 150;
        
        else if (milkbased == '7')
        milkbasedPrice = 155;
        
        else if (milkbased == '8')
        milkbasedPrice = 155;
        
        else if (milkbased == '9')
        milkbasedPrice = 155;
        
        else if (milkbased == '10')
        milkbasedPrice = 120;
       
        else if (milkbased == '11')
        milkbasedPrice = 150;
        
        else if (milkbased == '12')
        milkbasedPrice = 150;
        
        else if (milkbased == '13')
        milkbasedPrice = 150;
        
        else if (milkbased == '14')
        milkbasedPrice = 150;
        
        else if (milkbased == '15')
        milkbasedPrice = 150;
        
        else if (milkbased == '16')
        milkbasedPrice = 155;
        
        else if (milkbased == '17')
        milkbasedPrice = 155;
        
        else if (milkbased == '18')
        milkbasedPrice = 155;
        
        else {
        cout << " Invalid Input " << endl;
    return 0;
    }    
    double payment;
        cout << " Total Price: " << milkbasedPrice << endl;
        cout << " Enter the amount you want to pay: ";
        cin >> payment;
    
    if (payment >= milkbasedPrice) {
    double change = payment - milkbasedPrice;
        cout << " Payment successfull " << endl;
        cout << "Your change is: " << change << " PHP" << endl;
    }
    else {
    double shortfall = milkbasedPrice - payment;
        cout << " Insufficient Funds " << shortfall << " PHP." << endl;
    }
    return 0;
    }  
    
    else if (Menu == 'C' || Menu == 'c')
    {
        cout << "--------------------------------" << endl;
        cout << "             GRAND              " << endl;
        cout << "--------------------------------" << endl;
        cout << "      Menu                      Price " << endl;
        cout << "1. Brown Sugar -                 150 " << endl;
        cout << "2. Wintermelon -                 150 " << endl;
        cout << "3. Matcha -                      150 " << endl;
        cout << "4. Okinawa -                     150 " << endl;
        cout << "5. Strawberry Vanilla -          150 " << endl;
        cout << "6. Korean Banana -               150 " << endl;
        cout << "7. Dark Choco -                  150 " << endl;
        cout << "8. Red Velvet -                  150 " << endl;
        cout << "9. Caramel Macchiato -           150 " << endl;
        
        cout << "--------------------------------" << endl;
        cout << "             DEMI               " << endl;
        cout << "--------------------------------" << endl;
        cout << "       Menu                     Price " << endl;
        cout << "10. Brown Sugar -                 130 " << endl;
        cout << "11. Wintermelon -                 130 " << endl;
        cout << "12. Matcha -                      130 " << endl;
        cout << "13. Okinawa -                     130 " << endl;
        cout << "14. Strawberry Vanilla -          130 " << endl;
        cout << "15. Korean Banana -               130 " << endl;
        cout << "16. Dark Choco -                  130 " << endl;
        cout << "17. Red Velvet -                  130 " << endl;
        cout << "18. Caramel Macchiato -           130 " << endl;
        cout << " Select your choice: ";
        cin >> bobamilktea;
        
    if (bobamilktea == '1')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '2')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '3')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '4')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '5')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '6')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '7')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '8')
        bobamilkteaPrice = 150;
        
        else if (bobamilktea == '9')
        bobamilkteaPrice = 150;
        
        else {
        cout << " Invalid Input " << endl;
    return 0;    
    }
    {
        cout << "------------------------------------" << endl;
        cout << "        Do you want to add?         " << endl;
        cout << "------------------------------------" << endl;
        cout << "1. Yes                              " << endl;
        cout << "2. No                               " << endl;
        cout << " Select your choice: ";
        cin >> bobamilktea;
    }  
    if (bobamilktea == '1')
    {
        cout << "------------------------------------" << endl;
        cout << "                ADD                 " << endl;
        cout << "------------------------------------" << endl;
        cout << "a. Cheesecake -                  30 " << endl;
        cout << "b. Nata / Boba Pearl -           25 " << endl;
        cout << " Select your choice: ";
        cin >> addchoice;
        
    if (addchoice == 'a' || addchoice == 'A')
        addPrice = 30;
        
    else if (addchoice == 'b' || addchoice == 'B')
        addPrice = 25;    
    
    else 
        cout << " Invalid Input ";
    }
    else if (bobamilktea == '2')
    {
        cout << "" << endl;
    }
    else {
        cout << " Invalid Input ";
    }
        bobaPrice += bobamilkteaPrice;
        bobaPrice += addPrice;
        
    double payment;
        cout << " Total Price: " << bobaPrice << endl;
        cout << " Enter the amount you want to pay: ";
        cin >> payment;
    
    if (payment >= bobaPrice) {
    double change = payment - bobaPrice;
        cout << " Payment successfull " << endl;
        cout << "Your change is: " << change << " PHP" << endl;
    }
    else {
    double shortfall = bobamilkteaPrice - payment;
        cout << " Insufficient Funds " << shortfall << " PHP." << endl;
    }
    return 0; 
    }
    {
        cout << "-------------------------------------------" << endl;
        cout << " Do you want to add extra coffee and milk? " << endl;
        cout << "-------------------------------------------" << endl;
        cout << "1. Yes                               " << endl;
        cout << "2. No                                " << endl;
        cout << " Select your choice: ";
        cin >> coffeemilk;
    }  
    if (coffeemilk == '1')
    {
        cout << "------------------------------------" << endl;
        cout << "          Coffee and Milk           " << endl;
        cout << "------------------------------------" << endl;
        cout << "a. Espresso shot -             35 " << endl;
        cout << "b. Milk -                      20 " << endl;
        cout << " Select your choice: ";
        cin >> coffeemilk;
    
    if (coffeemilk == 'a' || coffeemilk == 'A')
        coffeemilkPrice = 35;
        
    else if (coffeemilk == 'b' || coffeemilk == 'B')
        coffeemilkPrice = 20;  
      
    else {
        cout << " Invalid Input " << endl;
    } 
    }
    else if (coffeemilk == '2')
    {
        cout << "" << endl;
    }   
    else {
        cout << " Invalid Input ";
    return 0; 
    }   
    
    totalPrice += coffeemilkPrice;
    {  
        cout << "---------------------------------" << endl;
        cout << "    Do you want to add syrup?    "<< endl;
        cout << "---------------------------------" << endl;
        cout << "1. Yes " << endl;
        cout << "2. No " << endl;
        cout << " Select your choice: ";
        cin >> syrup;
    }
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
       
    if (syrup == 'c' || syrup == 'C')
        priceSyrup = 20;
        
        else if (syrup == 'd' || syrup == 'D')
        priceSyrup = 20;
        
        else if (syrup == 'e' || syrup == 'E')
        priceSyrup = 20;
        
        else if (syrup == 'f' || syrup == 'F')
        priceSyrup = 20;
        
        else if (syrup == 'g' || syrup == 'G')
        priceSyrup = 20;
       
        else {
        cout << " Invalid Input " << endl;
    }
    } 
    else if (syrup == '2')
    {
        cout << "" << endl;
    }    
    else {
        cout << " Invalid Input ";
    return 0;    
    }
        priceSyrup = 20;
        totalPrice += priceSyrup;
    
    { 
        cout << "------------------------------" << endl;
        cout << "   Do you want to add Sauce?  " << endl;
        cout << "------------------------------" << endl;
        cout << "1. Yes                        " << endl;
        cout << "2. No                         " << endl;
        cout << " Select your choice: ";
        cin >> saucechoice;
    }    
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
        
    if (saucechoice == 'h' || saucechoice == 'H') 
        saucePrice = 30;
        
        else if (saucechoice == 'i' || saucechoice == 'I')
        saucePrice = 30;
        
        else if (saucechoice == 'j' || saucechoice == 'J')
        saucePrice = 30;
        
        else if (saucechoice == 'k' || saucechoice == 'K')
        saucePrice = 30;    
    
        else {
        cout << " Invalid Input " << endl;
    }   
    }
    else if (saucechoice == '2')
    {
        cout << "" << endl;
    }
    else {
        cout << " Invalid Input " << endl;
    return 0;    
    }
    totalPrice += saucePrice;
    {
    cout << "-------------------------------------" << endl;
    cout << "      Do you want to add-ons?        " << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. Yes                               " << endl;
    cout << "2. No                                " << endl;
    cout << " Select your choice: ";
    cin >> AddOns; 
    }
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
        
    if (AddOns == 'l' || AddOns == 'L')
        AddOnsPrice = 25;
        
        else if (AddOns == 'm' || AddOns == 'M')
        AddOnsPrice = 25;
    
        else if (AddOns == 'n' || AddOns == 'N')
        AddOnsPrice = 25;
        
        else if (AddOns == 'o' || AddOns == 'O')
        AddOnsPrice = 25;
        
        else {
        cout << " Invalid Input " << endl;
    }
    }
    else if (AddOns == '2')
    {
        cout << "" << endl;
    }
    else {
        cout << " Invalid Input " << endl;
    return 0;
    }
    totalPrice += AddOnsPrice;
    
    double payment;
        cout << " Total Price: " << totalPrice << endl;
        cout << " Enter the amount you want to pay: ";
        cin >> payment;
    
    if (payment >= totalPrice) {
    double change = payment - totalPrice;
        cout << " Payment successfull " << endl;
        cout << "Your change is: " << change << " PHP" << endl;
    }
    else {
    double shortfall = totalPrice - payment;
        cout << " Insufficient Funds " << shortfall << " PHP." << endl;
    }
    return 0;
    }
