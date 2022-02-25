#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <string.h>
using namespace std;
int voters;
string cand;

class candidate
{
    public:
        void setname(string a)
        {
            name = a;
        }
        string getname(void)
        {
            return name;
        }
        void setscore(int a)
        {
            score += a;
        }
        int getscore(void)
        {
            return score;
        }

    private:
        string name;
        int score = 0;

};


int main(int argc, char* argv[])
{
    //get no of voters
    cout << "No of voters: ";
    cin >> voters;

    vector <candidate> a(argc - 1);

    for (int i = 0; i < argc - 1; i++)
    {
        a[i].setname(argv[i + 1]);
    }



    //use loop and get ranks of each candidates
    for (int i = 0; i < voters; i++)
    {
        for (int j = 1; j <= argc - 1; j++)
        {    
            int q = 0, w = 0;
            do
            {
                if (w != 0)
                {
                    cout << "Invalid candidate name!! " << endl;
                }
                cout << "Rank " << j << ": ";
                cin >> cand;
                for (int k = 0; k < argc - 1; k++)
                {
                    if (cand == a[k].getname())
                    {
                        a[k].setscore(4 - j);
                        q++;
                        break;
                    }        
                }
                w++;
            } while (q == 0);
        }
    }



    //calculate the winner and print the winner
    vector <int> b(argc - 1);
    for (int i = 0; i < argc - 1; i++)
    {
        b[i] = a[i].getscore();
    }
    sort(b.begin(), b.end());

    cout << "winner(s)" << endl;

    for (int i = 0; i < argc - 1; i++)
    {
        if (a[i].getscore() == b.back())
        {
            cout << a[i].getname() << endl;
        }
    }

    return 0;
}