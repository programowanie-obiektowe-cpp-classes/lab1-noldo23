#include <iostream>
using namespace std;

class Wektor2D
{
    public:
        Wektor2D()
        {
            
            X = 0;
            Y = 0;
            cout << "x=" << X << " y=" << Y << endl;
        }
        Wektor2D(double XX, double YY)
        {

           
            X = XX;
            Y = YY;
            cout << "x=" << X << " y=" << Y << endl;
        }
        void setX(double nowyX) {
            X = nowyX; 
            cout << "x=" << X << endl;
        }
        double getX() const { 
            return X; 
            cout << "x=" << X << endl;
        }
        void setY(double nowyY) { 
            Y = nowyY; 
            cout << "y=" << Y << endl;
        }
        double getY() const { 
            return Y;
            cout << "y=" << Y << endl;
        }

       // Operator dodawania wektorów
        Wektor2D operator+(const Wektor2D& other) const
        {
            return Wektor2D(X + other.X, Y + other.Y);
        }

        // Operator iloczynu skalarnego

        double operator*(const Wektor2D& other) const { return X * other.X + Y * other.Y; 
        }
    private:
        double X,Y;

    // Tutaj napisz implementacje klasy Wektor2D
};

