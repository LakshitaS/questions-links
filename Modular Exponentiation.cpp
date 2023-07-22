// https://www.codingninjas.com/studio/problems/modular-exponentiation_1082146?leftPanelTab=0

It can be implemented recursively by the following pseudocode:

function pow_mod(x, n, m):
    if n = 0 then return 1
    t := pow_mod(x, ⌊n/2⌋, m)
    if n is even:
        return t · t  mod m
    else:
        return t · t · x  mod m
Or iteratively as follows:

function pow_mod(x, n, m):
    y := 1
    while n > 0:
        if n is odd:
            y := y · x  mod m
        n := ⌊n/2⌋
        x := x · x  mod m
    return y

#include <bits/stdc++.h>

////qs wala code solution
	
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
	int res=1;
	while(n>0){
		if(n&1){
			//odd
			res=(1LL* res *(x)%m)%m;
		}
		x=(1LL * (x)%m * (x)%m)%m;
		n=n>>1;
		
	}
	return res; 
}
