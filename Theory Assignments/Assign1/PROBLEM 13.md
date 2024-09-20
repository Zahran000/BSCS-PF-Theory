#PROBLEM 13 PSEUDOCODE

Start

Input jug sizes M and N (where M > N)

Compute GCD of M and N

Input the desired amount of water D

If D is not a multiple of the GCD of M and N, then:

   Print "The desired amount cannot be measured" 
    
   Go to End
    
Fill the larger jug (M) completely

Pour water from jug M to jug N until one of the following happens:

  a) Jug N is full
    
  b) Jug M is empty
    
If jug M has the desired amount of water (D), stop

If jug N has the desired amount of water (D), stop

Empty the smaller jug (N)

Repeat the process until the desired amount D is obtained

End



#PROBLEM 13 FLOWCHART

#PROBLEM 13 IPO
