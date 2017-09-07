#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // The amount of guesses we'll let our algorithm make.
    int guesses = 100;
    // The threshold at which we'll consider our error acceptable.
    float errorThreshold;
    //We'll use the function f(x) = 2y
    cout << "Provide an error threshold. (float)\n";
    cin >> errorThreshold;
    float xi[guesses];
    cout << "Provide initial guess for value x in f(x). (float)\n";
    cin >> xi[0];
    float yOpt;
    cout << "Provide the goal value for the function. (float)\n";
    cin >> yOpt;
    cout << "Running shoot and match optimization algorithm... \n";

    // Find the initial error value using the given function and initial x value
    float dYi[guesses];
    /*
    * Put the function you'd like to optimize for on the following line.
    */
    float optFunction = (2*pow(5.,(double)xi[0])+4);

    // We compute the initial error
    dYi[0] = optFunction - yOpt;

    // Now we run our function. We'll use a for loop, so we know the computation will end in finite time.
    for(int i = 0; i < guesses; i++){
        // First we check whether our guess gave us an answer within our error threshold.
        if(fabs(dYi[i]) <= errorThreshold){
            // Our guess is good! No need to compute any further.
            cout << "The answer is: \t" << xi[i] << "\t Giving a value of f(x) = " << 2*xi[i] << "\n";
            break;
        }
        else{
            // Guess is still not good enough, continue computing until our answer is within the
            // error threshold, or we run out of guesses.
            if(dYi[i] < 0){
                // Our guess was too low, make the next guess a little bigger
                cout << "Guess of xi[" << i << "] = " << xi[i] << " was too low!\n";
                xi[i+1] = xi[i] - (0.5*dYi[i]);
                // Compute the next dYi
                dYi[i+1] = 2*xi[i+1] - yOpt;
            }
            else if(dYi[i] > 0){
                // Our guess was too high, make the next guess a little smaller
                cout << "Guess of xi[" << i << "] = " << xi[i] << " was too high!\n";
                xi[i+1] = xi[i] + (0.5*dYi[i]);
                // Compute the next dYi
                dYi[i+1] = 2*xi[i+1] - yOpt;
            }
            cout << "dYi[" << i << "] = " << dYi[i] << "\t" << "xi[" << i << "] = " << xi[i] << ";\n";
            cout << "dYi[" << i+1 << "] = " << dYi[i+1] << "\t" << "xi[" << i+1 << "] = " << xi[i+1] << ";\n";
        }
    }
}

