#include <iostream>
using namespace std;
int main() {
    int n, totalLines;
    int empty_space = 0;

    cout << "Please enter a positive integer: ";
    cin >> n;

    for(int line=n; line>=1; line--) {
        int number_of_stars = 2*(line-1) + 1;

        for(int space=1; space<=empty_space; space=space+1)
            cout << ' ';

        for(int stars=1; stars<=number_of_stars; stars=stars+1)
            cout << '*';

        empty_space = empty_space  + 1;
        cout << endl;
    }

    for(int line=1; line<=n; line++) {
        int number_of_stars = 2*(line-1) + 1;
        empty_space = empty_space  - 1;

        for(int space=1; space<=empty_space; space=space+1)
            cout << ' ';

        for(int stars=1; stars<=number_of_stars; stars=stars+1)
            cout << '*';

        cout << endl;
    }

    return 0;
}
