#include <iostream>
#include <queue>
using namespace std;

void display(queue<string>pl)

{
    while(true)
    {
        if (pl.size() == 3)
            cout << "The Queue is Full" << endl;
        cout << pl.front() << endl;
        pl.pop();
        pl.pop();
    }
}

int main()
{
    queue<string>pl;
    cout << "Push elements into stacks: " << endl;
    pl.push("c++");
    pl.push("Java");
    pl.push("Python");
    cout << "Initial Stack: " << endl;
    display(pl);
    cout << "\n" << "Final Stack: " << endl;
    pl.pop();
    display(pl);
    return 0;
}

