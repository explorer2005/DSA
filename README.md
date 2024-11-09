# DSA
#Here all  the codes related to DSA will be uploaded<br>
a<<b=a*2^b
a>>b=a/2^b<br>
range is from -2^31 to 2^21-1
but in unsigned first space can be used to store the data as we know its already positive and the range will be then 2^32-1
Arrays are always passed by reference as the change can be seen in main function

in a n ddecimal  number maximum binaru digits are logn (base 2)+1

in pass by reference we can pass by pointer so we need to change *with same name and we can also pass with alias in which &different name.

Arrays are termed as constant pointers 

while arithmetic operations in pointers the value equal to the bit of the type of variable is added or subtracted 

Binary search is applicable only on sorted arrays
while calculating mid use ((s+(e-s)/2)) it is so because if s+e/2 is used and s=e=INT_MAX then the condition will overflow.
Time complexity of BS is O(logn)
Space complexity is also O(logn)

2 pointer approach is generally used where we need to tackal the 2 values at the same time.

sorted array ha to binary array ek baar zaroor click karna chaiya

In rotated array check wether to search in right or left and one part will be sorted 

in binary search first find out s and e and then apply while loop and find mid and then check the required condition if found correct then thats the answer otherwise find the ways to go to the ans in a repeated manner. 

in bubble sort n-1 loops run and large isshifted to back time complexity is o(n^2) isma in short bada ko piche bhejo 

in selection sort runs n-1 times and inner loop from i+1 to n and shortest ko aga puch karo remaining ma se dhundka  tc is o(n^2);

in insertion sort hum assume karta haan some part (first element) is sorted and usma element ghusana ki koshish karta haan tc is O(n^2).

STL is for standard template library 

vector is more dynamic as compared to array for it include vector
vector ka size always doubles in next jaisa 2 ka baad kuch pushback kia to 4 ho jaiga and so on 

vector.front() and vector.back() is used to get first and last element 
vector<int> vec(3,10) means 3 elements with all the positions value as 10 
vec2(vec1) same values in vect2 as 1
all these workin tc o(1)

erase and insert has o(n)
vec.erase(vec.begin()+no of index at which the elemet is to be erased)
(vec.erase(a,b)) a tpo b all get deleted 
erase changes only size not capacity 
 vector.insert(position,val) is used to insert the element inbetween 
empty is used to check whether the vector is empty or not 

*=dereference operator 
* gives the value 
vec.end() pointsnoton last element rather its the next ofit 
iterator is used to point from one side either begin or end for end use rbegin 
syntax is vector<int>::iterator name
for(name=vec.begin(); name!=vec.end(); name++){};
iterators are basically pointer * operator is used to get the value at that particular iterator

rather than   vector<int>::reverse_iterator it; directly write auto inside  for loop only 

in a string its necessary to declare the size of the string 
for entering a sentence with the space we have to use cin.getline(str,len,delim?);
delim is used to limit the input at a particular character 
to get the input of a string with space with in built string library we have to use getline(cin,string name);
in inbuilt string the direct function for reversal is reverse(stringname.begin(),stringname.end());

tolower is used to convert the uppercasse into the lowercase 

log10(number)+1 directly gives the number of digits in the number 
armstrong number is that in which the sum of cube of each individual digit is equal to the whole number 
short way to find the gcd is euclids if a>b so gcd(a%b,b) and else gcd(a,b%a)
lcm*hcf=a*b;
(x+y)%m=x%m+y%m;
(x-y)%m=x%m-y%m;
(x*y)%m=x%m*y%m;




