// #include <iostream>

// using namespace std;

// int main(){
//     for(int i = 1; i <= 100; i++){
//         if(i % 3 == 0 && i % 5 == 0){
//             cout << "FizzBuzz" << endl;
//         }
//         else if(i % 3 == 0){
//             cout << "Fizz" << endl;
//         }
//         else if(i % 5 == 0){
//             cout << "Buzz" << endl;
//         }
//         else{
//             cout << i << endl;
//         }
//     }
// }

#include <iostream>

using namespace std;

void fizz(){
    cout << "FIZZ";
}

void buzz(){
    cout << "BUZZ";
}

int main(){
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 && i % 5 == 0){
            fizz();
            buzz();
        }
        else if(i % 3 == 0){
            fizz();
        }
        else if(i % 5 == 0){
            buzz();
        }
        else{
            cout << i;
        }
        cout  << endl;
    }
}