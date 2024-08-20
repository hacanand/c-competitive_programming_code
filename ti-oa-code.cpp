#include<iostream>
using namespace std;
class Sample{
    static int a, b, c;
    public:
    static void Sample1(void){
        a = b = c = 10;
    }
    static void Sample1(int x, int y, int z){
        a+=b*x;
        c -= b;
        b = y++;
    }
    static void Display(void){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int Sample::a=0, Sample::b=0, Sample::c=0;
int main(){
    Sample::Sample1();
    Sample::Sample1(1, 2, 3);
    Sample::Display();
    return 0;
}