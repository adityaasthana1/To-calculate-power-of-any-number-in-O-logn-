#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    long long power_array[10] , result = 1 ;
    long long integer, exponent ;
    long long power_used[10] ;
    cout << "Enter integer and exponent respectively ." << endl;
    cin >> integer >> exponent ;
    int exp = exponent ;
    if(exponent< 0 )
        exponent = exponent * (-1) ;
    power_array[0] = integer ;

    power_used [0] = exponent/512 ;
    exponent = exponent%512 ;
    power_used [1] = exponent/256 ;
    exponent = exponent % 256 ;
    power_used [2] = exponent/128 ;
    exponent = exponent % 128;
    power_used [3] = exponent/64 ;
    exponent = exponent%64;
    power_used [4] = exponent/32 ;
    exponent = exponent%32 ;
    power_used [5] = exponent/16 ;
    exponent = exponent %16 ;
    power_used [6] = exponent/8 ;
    exponent = exponent% 8;
    power_used [7] = exponent/4 ;
    exponent = exponent%4 ;
    power_used [8] = exponent/2 ;
    exponent = exponent%2 ;
    power_used [9] = exponent/1 ;

   /* for (int count = 9 ; count >= 0 ; count-- )
    {
        power_used[count] = exponent / (pow(2,count));
        exponent = exponent%pow(2,count);
    }
  */
    for(int count = 1 ; count < 10 ; count++ )
    {
        power_array[count] = power_array[count-1 ]*power_array[count-1 ] ;
    }
  for(int count = 0 ; count < 10 ; count++ )
  {
      if(power_used[count]==0)
        continue ;
      else result = result*power_array[9 - count];
  }
  if(exp < 0 )
    cout << 1/result << endl ;
  else
   cout << result << endl;
// cout << "Result result should be " << pow(integer , exp );
    return 0;

}
