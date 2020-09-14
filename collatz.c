


int main() 
{
  long n = cs1010_read_long();
  long max;
  long count;
  long countmax;
  countmax = 0;
  count = 0;
  max= 0;
  for (i = n; i >= 1; product -= i){
    while (i!= 1)
    {if (i%2 == 0)
    {i=i/2;
    count += 1;}
     else
     {i=3i+1;
      count += 1;}}
     if (count>= countmax)
     {countmax= count;
      max= i;}
     count=0;}
  cs1010_print_long(max);
cs1010_print_string(" ");
  cs1010_print_long(countmax);
}
