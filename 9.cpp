# include <iostream>

using namespace std;
int main(){
    int i,j,k;
    for (i = 2; i < 7; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout<<j;
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}