#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// PRE: d value enters the function
// POST: only if d is a negligible value returns 0.0 as d
double printDouble(double d) {if (abs(d) < 1e-7) return 0.0; else return d;}

// new Point and Particle types definitions
struct Point {double x, y, z;};
struct Particle {Point p, v; double m;};

// PRE: given two points p1 and p2
// POST: returns the sum of them
Point sum(Point p1, Point p2) {
    Point rSum;
    rSum.x = p1.x + p2.x; 
    rSum.y = p1.y + p2.y; 
    rSum.z = p1.z + p2.z;
    return rSum;
}

// PRE: given a numeric value and a point
// POST: Point returned as the multiplication of each coordenate by the number
Point mul(double a, Point p) {
    Point rMul;
    rMul.x = p.x*a; 
    rMul.y = p.y*a; 
    rMul.z = p.z*a;
    return rMul;
}

// Optimization method: (not done yet) using 1 particle vector and modifying it instead of n particle vector

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);    
    cout.setf(ios::fixed);
    cout.precision(5);

    int n, k;
    while (cin >> n >> k) 
    {
        // Input processing
        vector<Particle> particles(n);
        for (int i = 0; i < n; ++i) {
            cin >> particles[i].p.x >> particles[i].p.y >> particles[i].p.z 
                >> particles[i].v.x >> particles[i].v.y >> particles[i].v.z 
                >> particles[i].m;
        }
        
        // Principal variables declaration
        Point massCenter;
        massCenter.x = 0; massCenter.y = 0; massCenter.z = 0;
        Point velocity;
        velocity.x = 0; velocity.y = 0; velocity.z = 0; 
        double totalMass = 0;

        for (int i = 0; i < n; ++i)
        {
            massCenter = sum(massCenter, mul(particles[i].m, particles[i].p));
            velocity = sum(velocity, mul(particles[i].m, particles[i].v));
            totalMass += particles[i].m;
        } 
        velocity = mul((1/totalMass), velocity);
        massCenter = mul((1/totalMass), massCenter);
        
        int t0, tf;
        t0 = tf = 0;
        for (int i = 0; i < k; ++i)
        {
            cin >> t0;
            tf += t0;
            massCenter = sum(massCenter, mul(t0, velocity));
            
            // Output at this time for the center of mass
            cout << massCenter.x << ' ' << massCenter.y << ' ' << massCenter.z << "\n";
        }

        for (int i = 0; i < n; ++i)
        {
            particles[i].p = sum(particles[i].p, mul(tf, particles[i].v));

            // Output at this time for the final positions
            cout << particles[i].p.x << ' ' << particles[i].p.y << ' ' << particles[i].p.z << "\n"; 
        }
        cout << "\n";   
    }
}