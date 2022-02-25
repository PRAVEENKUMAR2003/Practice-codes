#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int voters;
string v;

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
        void setvote(string a)
        {
            vote++;
        }
        int getvote(void)
        {
            return vote;
        }

    private:
        string name;
        int vote = 0;
};

int main(int argc, char* argv[])
{
    //get no of voters
    cout << "No of voters: ";
    cin >> voters;

    //create objects of candidates
    vector <candidate> a(argc - 1);
    for (int i = 0; i < argc - 1; i++)
    {
        a[i].setname(argv[i + 1]);
    }

    //get vote from user
    int k, w;
    for (int i = 0; i < voters; i++)
    {
        k = 0;
        w = 0;
        do
        {
            if (w != 0)
            {
                cout << "Please enter a valid name!!\n";
            }
            cout << "vote for : ";
            cin >> v;
            for (int j = 0; j < argc - 1; j++)
            {
                if (a[j].getname() == v)
                {
                    a[j].setvote(v);
                    k++;
                    break;
                }
            }
            w++;
        } while (k == 0);
    }

    //find highest vote value and print winner as candidates with highest vote
    vector <int> b(argc - 1);
    for (int i = 0; i < argc - 1; i++)
    {
        b[i] = a[i].getvote();
    }
    sort(b.begin(), b.end());

    cout << "Winner(s)" << endl;
    for (int i = 0; i < argc - 1; i++)
    {
        if (a[i].getvote() == b.back())
        {
            cout << a[i].getname() << endl;
        }
    }

    return 0;
}