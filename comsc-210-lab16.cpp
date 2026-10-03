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
    //Constructors;
    Color()                               {RED = 0; GREEN = 0; BLUE = 0;}
    Color(int a)                          {RED = a; GREEN = 0; BLUE = 0;}
    Color(int a, int b)                   {RED = a; GREEN = b; BLUE = 0;}
    Color(int a, int b, int c)            {RED = a; GREEN = b; BLUE = c;}



    //Member Setter and Getters
    int getRED()                           {return RED;}
    void setRED(int a)                      {RED = a;}
    int getGREEN()                         {return GREEN;}
    void setGREEN(int a)                    {GREEN = a;}
    int getBLUE()                          {return BLUE;}
    void setBLUE(int a)                     {BLUE = a;}


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
    Color color1(253,200,106);
    color1.print();
    display(color1);

    Color color2(37,48);
    color2.print();
    display(color2);

    Color color3;
    color3.print();
    display(color3);

    Color color4(93,3,14);
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