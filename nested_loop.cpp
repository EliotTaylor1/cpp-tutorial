#include <iostream>

int main(){
    using std::endl;
    using std::flush;
    using std::cout;
    using std::cin;

    for (int i = 0; i <= 2; i++) //outer loop
    {
        if(i!=1){
        cout << "the main loop has run " << i << " times" << endl;
        }
        else{
        cout << "the main loop has run " << i << " time" << endl;  
        }

            for (int j = 0; j <= 10; j++) //inner loop
            {
             cout << j << ' ' << flush;
            }

     cout << endl;   //new line at the end of the inner loop
    }
    return 0;
}