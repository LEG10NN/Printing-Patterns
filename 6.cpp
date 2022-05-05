# include <iostream>

using namespace std;
int main(){
    int i,j,k=1;
    for (i = 1; i < 5; i++)
    {
        for ( j = 0; j < i; j++)
        {
            cout<<k;
            cout<<" ";
            k++;
        }
        cout<<endl;
    }
    
    return 0;
}