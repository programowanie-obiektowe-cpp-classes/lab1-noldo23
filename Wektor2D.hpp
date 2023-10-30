#include <iostream>
using namespace std;

class Wektor2D
{
    public:
        Wektor2D()
        {
            cout << "Wektor domyœlny" << endl;
            X = 0;
            Y = 0;
            cout << "x=" << X << " y=" << Y << endl;
        }
        Wektor2D(double XX, double YY)
        {

            cout << "XDD" << endl;
            X = XX;
            Y = YY;
            cout << "x=" << X << " y=" << Y << endl;
        }
        void setX(double X) { X = X; }
        double getX() const { return X; }
        void setY(double Y) { Y = Y; }
        double getY() const { return Y; }

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

