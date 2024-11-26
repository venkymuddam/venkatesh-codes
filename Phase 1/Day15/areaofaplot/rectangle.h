#pragma once
class Rectangle
{
    public:
        // attributes [member data]
        int length;
        int breath;
        // behaviours [member functions]
        int findArea();
        // constructors
        Rectangle(int p_length, int p_breath);
        //
        void print();
        
};
void check(Rectangle plot1, Rectangle plot2);
