#include <iostream>

using namespace std;

int main()
{

    //Ejemplo Con If
    int x,z;
    cin>>x;
    if(x < 10){
        cout<<"Menor a 10";
    }
    else{
        cout<<"Mayor a 10";
    }

    //Ejemplo Con for

    for(int y=1; y<=10; y++){
        cout<< y<<endl;
    }

    //Ejemplo Con while

    z=1;
    while(z<=5){
        cout<< z;
        z++;
    }
}
