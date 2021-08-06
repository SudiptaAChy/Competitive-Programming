#include <bits/stdc++.h>
using namespace std;
struct volunteer {
    char choice1 [10];
    char choice2 [10];
} v[60];
int shirt_avail[9];
int n, m;
bool solution;
void reset (int p)
{
    for ( int i = 0; i < 9; i++ )
        shirt_avail [i] = p;
}
int shirt_index (char *k)
{
    if ( strcmp (k, "XXL") == 0 ) return 0;
    if ( strcmp (k, "XL") == 0 ) return 1;
    if ( strcmp (k, "L") == 0 ) return 2;
    if ( strcmp (k, "M") == 0 ) return 3;
    if ( strcmp (k, "S") == 0 ) return 4;
    return 5;

}
void bktk (int p)
{
    if ( p == m ) { solution = true; return; }
    if ( solution == true ) return;
    if ( shirt_avail [shirt_index (v [p].choice1)] ) {
        shirt_avail [shirt_index (v [p].choice1)]--;
        bktk (p + 1);
        shirt_avail [shirt_index (v [p].choice1)]++;
    }
    if ( shirt_avail [shirt_index (v [p].choice2)] ) {
        shirt_avail [shirt_index (v [p].choice2)]--;
        bktk (p + 1);
        shirt_avail [shirt_index (v [p].choice2)]++;
    }
}
int main ()
{
    int testCase;
    scanf ("%d", &testCase);
    int cs=1;
    while ( testCase-- ) {
        scanf ("%d %d", &n, &m);
        for ( int i = 0; i < m; i++ ) scanf ("%s %s", v [i].choice1, v [i].choice2);
        reset (n);
        solution = false;
        bktk (0);
        printf("Case %d: ",cs++);
        if (solution) printf ("YES\n");
        else printf ("NO\n");
    }

    return 0;
}
