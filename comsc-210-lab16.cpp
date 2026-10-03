// COMSC-210- | LAB 14 | Ahmad Dharhan

#include <iostream>
using namespace std;

//Class Definition
class Color{
private:
    //Private member variables;
    int R;
    int G;
    int B;

public:
    //Constructors;
    Color()                               {R = 0; G = 0; B = 0;}
    Color(int a)                          {R = a; G = 0; B = 0;}
    Color(int a, int b)                   {R = a; G = b; B = 0;}
    Color(int a, int b, int c)            {R = a; G = b; B = c;}



    //Member Setter and Getters
    int getR()                           {return R;}
    void setR(int a)                      {R = a;}
    int getG()                         {return G;}
    void setG(int a)                    {G = a;}
    int getB()                          {return B;}
    void setB(int a)                     {B = a;}


    //Data display;
    void print(){
        cout << "COLOR RGB VALUES" << endl;
        cout << "*****************" << endl;
        cout << " RED Color Value: " << R << endl;
        cout << " GREEN Color Value: " << G << endl;
        cout << " BLUE Color Value: " << B << endl;
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
    cout << "(" << s.getR() << ", " << s.getG();
    cout << ", " << s.getB() << ")";
    cout << endl;
    cout << endl;
    cout << endl;
}