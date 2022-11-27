#include <iostream>
#include <cstring>              // For strings
using namespace std;

class car{
private:
    char name[15];              // For Car_Name
    char color[10];             // For Car_Color
    int maxspeed;               // For Car_Speed
    int model;                  // For Car_Model
public:
    void setName(char n[])      // For Insert_Name
    {
        strcpy(name, n);
    }
    void setColor(char n[])     // For Insert_Color
    {
        strcpy(color, n);
    }
    void setMaxSpeed(int m)     // For Insert_Speed
    {
        maxspeed = m;
    }
    void setModel(int m)        // For Insert_Models
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
    //Display Derails
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
