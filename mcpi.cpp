/* C++ program for estimation of Pi using Monte
   Carlo Simulation */
#include <bits/stdc++.h>
 
// Defines precision for x and y values. More the
// interval, more the number of significant digits
#define INTERVAL 45000
using namespace std;
 
int main()
{
    unsigned long int interval, i;
    double rand_x, rand_y, origin_dist, pi;
    unsigned long int circle_points = 0, square_points = 0;
 
    // Initializing rand()
    srand(time(NULL));
 
     interval = INTERVAL*INTERVAL;
    // Total Random numbers generated = possible x
    // values * possible y values
    cout << "wait computing ..." << endl;
    for (i = 0; i < interval; i++) {
 
        // Randomly generated x and y values
        rand_x = double(rand() % (INTERVAL + 1)) / INTERVAL;
        rand_y = double(rand() % (INTERVAL + 1)) / INTERVAL;
 
        // Distance between (x, y) from the origin
        origin_dist = rand_x * rand_x + rand_y * rand_y;
 
        // Checking if (x, y) lies inside the define
        // circle with R=1
        if (origin_dist <= 1)
            circle_points++;
 
        // Total number of points generated
        square_points++;
 
        // estimated pi after this iteration
        pi = double(4 * circle_points) / square_points;
 

        // For visual understanding (Optional)
/*        cout << rand_x << " " << rand_y << " "
             << circle_points << " " << square_points
             << " - " << pi << endl
             << endl;
 */
        // Pausing estimation for first 5 values (Optional)
/*        if (i < 5){
	    cout << "press enter" << endl;
            getchar();
	     cout << "rand_x = " << rand_x << " rand_y = " << rand_y << " circle_points = " << circle_points << " square_points = " << square_points << "  pi = " << pi << endl
             << endl;

} 
	    if (i==6) cout << "wait computing ..." << endl;
*/
    } // close loop on the generated random points


// Final Estimated Value
    cout << "\nFinal Estimation of Pi = " << pi << endl;
 
    return 0;
}
