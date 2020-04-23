#include <iostream>

using namespace std;
void tower_of_hanoi(int x, char from_rod, char to_rod, char aux_rod);
int main()
{
    int n;
    cout << "Enter the number of rings" << endl;
    cin >> n;
    tower_of_hanoi(n,'A','B','C');
    return 0;
}
void tower_of_hanoi(int x, char from_rod, char to_rod, char aux_rod)
{
    if(x==1){
        cout << "Move Ring 1 from rod "<<from_rod<<" to rod "<<to_rod<<endl;
    }
    else{
        tower_of_hanoi(x-1,from_rod, aux_rod, to_rod);
        cout<<"Move Ring "<<x<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
        tower_of_hanoi(x-1,aux_rod, to_rod, from_rod);
    }
}
