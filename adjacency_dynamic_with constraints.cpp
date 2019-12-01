//Adjacent Bit
//Given bit matrix of m rows and n columns, find whether no adjacent bits are same. Adjacency is assumed horizontal and vertical only.

//Input Format
//The first line contains a single integer t, denoting the number of test cases.
//The first line of each test case contains two space separated integers m and n denoting the number of rows and number of columns in the matrix respectively. Following m lines each contains n space separated bits.

//Output Format
//For each test case if no pair of adjacent bits are equal, then print 1 else print 0.

//Constraints
//1 <= t <= 1000
//1 <= m <= 100
//1 <= n <= 100

//Sample Input
//3
//2 2
//0 1
//1 0
//1 2
//0 0
//2 1
//1
//1
//Sample Output
//1
//0
//0

//Constraints

//1 <= m <= 100
//1 <= n <= 100
#include <iostream>
using namespace std;
int main() {

    int t, a, b,c,d,**x,*f,z=0;
    cin >> t;
    if(t<1  || t > 1000)
        return 0;
    f = new int[t] ;
    fill(f, f + t, 1);
    for(int i=0; i<t; i++) {
        cin >> a >> b;
        if((a<=100  && a >=1 ) && (b<=100  && b >=1 )){
            x = new int*[a];
            for(c = 0; c < a; ++c)
                x[c] = new int[b];
            c=d=0;
            while(c<a){
                while(d<b){
                    cin >> x[c][d];
                    d++;
                }
                d=0;
                c++;
            }
            c=d=0;
            while(c<a){
                while(d<b){
                    if(0<=d-1){
                        if(x[c][d] == x[ c][ d - 1 ])
                            f[z]= 0;
                    }
                    if(0<=c-1){
                        if(x[c][d] == x[ c-1][ d ])
                            f[z]= 0;
                    }
                    if(c+1<a){
                        if(x[c][d] == x[ c+1][ d ])
                            f[z]= 0;
                    }
                    if(d+1<b){
                        if(x[c][d] == x[ c][ d+1 ])
                            f[z]= 0;
                    }

                    ++d;
                }

                d=0;
                ++c;
            }



            ++z;
        }
    }
    for(z=0;z<t;z++)
    {
        cout<<f[z]<<endl;
    }

    return 0;
}
