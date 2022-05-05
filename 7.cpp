# include <iostream>

using namespace std;
int main(){
    int i,j,k=1;
    for ( i = 0; i < 5; i++)
    {
        j=k;
        while (j!=0)
        {
            cout<<j;
            cout<<" ";
            j--;
        }
        k++;
        cout<<endl;
    }
    return 0;
}