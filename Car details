#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

class car{
private:
    char name[15];
    char color[10];
    int maxspeed;
    int model;
public:
    void setName(char n[])
    {
        strcpy(name, n);
    }
    void setColor(char n[])
    {
        strcpy(color, n);
    }
    void setMaxSpeed(int m)
    {
        maxspeed = m;
    }
    void setModel(int m)
    {
        model = m;
    }
    char* getName()
    {
        return name;
    }
    char* getColor()
    {
        return color;
    }
    int getMaxSpeed()
    {
        return maxspeed;
    }
    int getModel()
    {
        return model;
    }
    void print()
    {
        cout << "Name      = " << getName()     << "\n"
             << "color     = " << getColor()    << "\n"
             << "Max Speed = " << getMaxSpeed() << "\n"
             << "Model     = " << getModel()    << "\n";
    }
};

int main()
{
    car x;
    x.setName("KIA");
    x.setColor("Black");
    x.setMaxSpeed(420);
    x.setModel(2023);

    x.print();
    return 0;
}
