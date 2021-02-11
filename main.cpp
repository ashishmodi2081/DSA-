#include <iostream>

using namespace std;

class students{
public:
    int age;
    const int roll_code;
    students(int r): roll_code(r){

    }

    void display(){
        cout<<age<<"    "<<roll_code<<endl;
    }


};

int main()
{
    //cout << "Hello world!" << endl;
    students s1(2081,12);
    students s2(2085,76);
    s2.display();
    s1.display();
    return 0;
}
