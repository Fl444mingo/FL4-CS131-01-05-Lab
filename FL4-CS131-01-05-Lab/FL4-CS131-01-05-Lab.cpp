#include <iostream>
using namespace std;
int main()
{
    // Define variables
    int m, x, b, window;
    // Instructions on how to use the program, with specific user input prompts
    cout << "Input integers to create ordered pairs of a line y = mx + b\n\n";
    cout << "Enter a value for slope: ";
    cin >> m;
    cout << "Enter a value for y-intercept: ";
    cin >> b;
    // window and x are queried in the same message rather than separately because they're closely related
    cout << "Separated by a space, enter a domain and a starting x-value: ";
    cin >> window;
    cin >> x;
    cout << "\n";
    // Loop to output exactly "window" number of ordered pairs
    for (window; window > 0 ; window--) {
        cout << "(" << x << ", " << m * x + b << ")\n";
        x++;
    }
    // Pause to keep the console clean
    system("pause");
    return 0;
}