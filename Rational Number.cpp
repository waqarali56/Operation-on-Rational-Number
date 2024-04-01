//
// Rational Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;


class rational {

public:
    int n;
    int d;
    rational()
    {
        n =0;
        d = 1;
    }
    void  setter()
    {
        cout << "enter n:";
        cin >> n;
        bool t;
        do {
          //  t = false;
            cout << "Enter d: ";
            cin >> d;

            if (d == 0)
            {
                t = true;
                cout << "invalid" << endl;
            }
            else
            {
                t = false;
            }
        } while (t);

        cout << "enter d:";
        cin >> d;
    }

    friend istream& operator>>(istream& cinn, rational& num) {

        cout << "Enter Rational number numerator: ";
        cinn >> num.n;

        
            cout << "Enter Rational number denominator: ";
            cinn >> num.d;

           

        return cinn;
    }

    friend ostream& operator<<(ostream& coutt, const rational& num) {
        coutt << "numerator:" << num.n << endl;
        coutt<<" denominator:" << num.d;
        return coutt;
    }
   
    rational operator+(rational &bb)
    {
        rational add;
        add.n = (n * bb.d) + (d * bb.n);
        add.d = d * bb.d;
        return add;
    }

     void operator+=(rational& bb)
    {
       
        n = (n * bb.d) + (d * bb.n);
        d = d * bb.d;
        return;
    }

     /*void operator++()
     {

         n = (n * d) + (d * bb.n);
         d = d;
         return;
     }*/

    rational operator-(rational& bb)
    {
        rational s;
        s.n = (n * bb.d) - (d * bb.n);
        s.d = d * bb.d;
        return s;
    }

    rational operator*(rational& bb)
    {
        rational s;
        s.n = (n *bb.n);
        s.d = d * bb.d;
        return s;
    }

    rational operator/(rational& bb)
    {
        rational s;
        s.n = n *bb.d;
        s.d = d * bb.n;
        return s;
    }

    bool operator>(rational& bb)
    {        
        if ((n / d) > (bb.n / bb.d))
            return true;

        else
            return false;
    }

    bool operator<(rational& bb)
    {
        if ((n / d) < (bb.n / bb.d))
            return true;

        else
            return false;
    }

    bool operator==(rational& bb)
    {
        if ((n / d) == (bb.n / bb.d))
            return true;

        else
            return false;
    }

  
   

    
     

    
   

    ~rational()
    {
       
    }
};



int main()
{
    
   
            bool cc;
    rational a1, a2,a;
    int choice;

    

            bool ff;
            rational num;
    do
    {
        cout << "============================================" << endl;
       
        cout << "1. Rational Number Setter" << endl;
        cout << "2. Addition" << endl;
        cout << "3. Subtraction" << endl;
        cout << "4. Multiply" << endl;
        cout << "5. Division" << endl;
        cout << "6. > operator" << endl;
        cout << "7. < operator" << endl;
        cout << "8. check == " << endl;
        cout << "9. stream operator" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter Choice:";
        cin >> choice;
      switch (choice)
        {
        case 1:
            cout << "Enter 1st Rational Num:" << endl;
            a1.setter();
            cout << "Enter 2nd Rational Num:" << endl;
            a2.setter();
            a1 += a2;
            cout << a1 << endl;
            break;
        case 2:
             a = a1 + a2;
             cout << a << endl;
            break;

        case 3:
            a = a1 - a2;
            cout << a << endl;
            break;

        case 4:
            a = a1 * a2;
            cout << a << endl;
            break;
        case 5:
            a = a1 / a2;
            cout << a << endl;
            break;
        case 6:
            cc = a1 > a2;

            if (cc)
                cout << "a1 is greater" << endl;
            else
                cout << "a1 is not greater" << endl;
            
            break;
        case 7:
            ff = a1 < a2;

            if (ff)
                cout << "a1 is smaller" << endl;
            else
                cout << "a1 is not smaller" << endl;
            break;
        case 8:

            if (a1 == a2)
                cout << "a1==a2" << endl;
            else
                cout << "a1!=a2" << endl;
            
            break;
        case 9:
            cin >> num;
            cout << num << endl;

            break;
     
        case 0:

            break;
        default:
            cout << "invalid num." << endl;
            break;
        }
    } while (choice != 0);
  
    return 0;
}


