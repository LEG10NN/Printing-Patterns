# include <iostream>

using namespace std;
int main(){
    int i,j,k=65;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cout<<char(k);
            cout<<" ";
        }
        cout<<endl;
        k++;
    }
    return 0;
}