#include <iostream>
#include <thread>
using namespace std;

void sayHi() {
    cout << "Hi World!!" << endl;
}
void sayGoodAfternoon() {
    cout << "Good Afternoon World!!" << endl;
}

int main()
{
    
    thread thrSayHi(sayHi);
    thrSayHi.join();
    
    thread thrSayGoodAfternoon(sayGoodAfternoon);
    thrSayGoodAfternoon.join();
    
    cout<<"Hello World" << endl;

    return 0;
}