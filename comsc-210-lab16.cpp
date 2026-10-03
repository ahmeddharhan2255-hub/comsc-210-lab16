// COMSC-210- | LAB 14 | Ahmad Dharhan

#include <iostream>
using namespace std;

//Class Definition
class Color{
private:
    //Private member variables;
    int RED;
    int GREEN;
    int BLUE;

public:
    //Member Setters
    void setRED(int a)                      {RED = a;}
    void setGREEN(int a)                    {GREEN = a;}
    void setBLUE(int a)                     {BLUE = a;}

    //Member Getters
    int getRED()                           {return RED;}
    int getGREEN()                         {return GREEN;}
    int getBLUE()                          {return BLUE;}

    //Data display;
    void print(){
        cout << "COLOR RGB VALUES" << endl;
        cout << "*****************" << endl;
        cout << " RED Color Value: " << RED << endl;
        cout << " GREEN Color Value: " << GREEN << endl;
        cout << " BLUE Color Value: " << BLUE << endl;
    }
};

//Function Protoype
void display(Color s);

int main(){
    Color color1;
    color1.setRED(253);
    color1.setGREEN(200);
    color1.setBLUE(106);   
    color1.print();
    display(color1);

    Color color2;
    color2.setRED(37);
    color2.setGREEN(48);
    color2.setBLUE(147);
    color2.print();
    display(color2);

    Color color3;
    color3.setRED(137);
    color3.setGREEN(60);
    color3.setBLUE(116);
    color3.print();
    display(color3);

    Color color4;
    color4.setRED(93);
    color4.setGREEN(3);
    color4.setBLUE(14);
    color4.print();
    display(color4);

    return 0;
}

//Displays values in paranthesis form
// Arguments: (Color Object)
//Returns nothing
void display(Color s){
    cout << "(" << s.getRED() << ", " << s.getGREEN();
    cout << ", " << s.getBLUE() << ")";
    cout << endl;
    cout << endl;
    cout << endl;
}