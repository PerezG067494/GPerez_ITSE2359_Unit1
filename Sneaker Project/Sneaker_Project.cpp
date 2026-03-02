#include <iostream>
#include <string>   
#include <iomanip>


using namespace std;

enum SneakerBrand {NIKE, ADIDAS, JORDAN, NEW_BALANCE, VANS, OTHER};
enum SneakerCategory {RUNNING, BASKETBALL, LIFESTYLE, SKATE, TRAINING};

struct Sneaker{
    string modelName;
    SneakerBrand brand;
    SneakerCategory category;
    double size;
    double price;
    bool isDeadstock;
    int yearReleased;
};
const int MAX_SNEAKERS = 20;
Sneaker ProductInfo[MAX_SNEAKERS];

void displaySneaker(Sneaker s);
void displayAll(Sneaker arr[], int count);

int main(){

 ProductInfo[0] = {"Air Jordan", JORDAN, BASKETBALL, 12, 69.99, true, 2009};
 int productCount = 1;
 bool keepRunning = true;
 int menu;
while(keepRunning) {
    cout << "=====Sneaker Collection Manager======" << endl;
    cout << "1. Display All Sneakers" << endl;
    cout << "2. Add a Sneaker" << endl;
    cout << "3. Search by Brand {Part 2}" << endl;
    cout << "4. Search by Size {Part 2}" << endl; 
    cout << "5. Sort by Price {Part 2}" << endl; 
    cout << "6. Sort by Year {Part 2}" << endl;
    cout << "0. Exit"<< endl;
    cout << ">>";
    cin >> menu;

    switch(menu){
        case 1: 
        displayAll(ProductInfo, productCount);
        
        break;

        case 2:
        cout << "Coming in Part 2" << endl;
        break;
        case 3:
        cout << "Coming in Part 2" << endl;
        break;
        case 4: 
        cout << "Coming in Part 2" << endl;
        break;

        case 5:
        cout << "Coming in Part 2" << endl;
        break;

        case 6: 
        cout << "Coming in Part 2" << endl;
        
        break;

        default:
        cout << "Exiting Program...";
       
        keepRunning = false;
        break;

    }
}
    return 0;
}  


void displayAll(Sneaker arr[], int count){

    for(int i = 0; i < count; i++){
         displaySneaker(arr[i]);
    }
}

void displaySneaker(Sneaker s){
    int i;
    cout << "===Sneaker Product Info==="<< endl;
    //Hardcoded Sneakers Output
    
    cout << s.modelName << "||" << s.brand << "||" << s.category;
    cout <<"||" << s.size << "||" << s.price << "||" << s.isDeadstock << "||";
    cout << s.yearReleased << endl;

    
    //Inputed Sneakers Output
     //for(i = 1; i < MAX_SNEAKERS; i++){
            // cout << ProductInfo[i].modelName << "||" << ProductInfo[i].brand << "||" << ProductInfo[i].category;
             //cout <<"||" << ProductInfo[i].size << "||" << ProductInfo[i].price << "||" << ProductInfo[i].isDeadstock << "||";
            // cout << ProductInfo[i].yearReleased << endl;
        //}
}


string brandToString(SneakerBrand b){
    switch(b){
        case NIKE:
        return "Nike";
    
        case ADIDAS:
        return "Adidas";
        
        case JORDAN:
        return "Jordan";

        case NEW_BALANCE:
        return "New Balance";
        
        case VANS:
        return "Vans";

        default:
        return "Unknown";
    }

}

string categoryToString(SneakerCategory c){
    switch(c){
        case RUNNING:
        return "Running";
    
        case BASKETBALL:
        return "Basketball";
        
        case LIFESTYLE:
        return "Lifestyle";

        case SKATE:
        return "Skate";
        
        case TRAINING:
        return "Training";

        default:
        return "Unknown";
    }

}