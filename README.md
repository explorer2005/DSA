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


for optimisation in 2d matrix in finding the sum 
remove j just use i 
syntax for initialisizing the 2d vectors vector<vector<tyoe>>name
matrix.size() = no of rows
matrix[i].size() = no of columns 

unordered set and unordered map are very optimised as they have tc of o(1) therefore they are frequently used in dsa 
lower bound  and upper bound does not exists for unordered sets as the data is not sorted 

time complexity of recuresion relation is calculated by
no of recursive calls*work in each call 
space complexity of a recursive relation is 
depth of call stack * memory occupied in each block 

time complexity of a recursive fibonacci series is 1.618^n

forprinting all the subsets of an array, take complete set and empty and at each level of recursion put choice for each element whether to be present or not 

            allSubsets.push_back({ans});
            in this line automatically the ans is pushed in vector as a vector 

Quick sort is based on pivot and partition 
there is special pivot about which the array is sorted (we will select last as pivot).and recursively call the quick sort for left and right half 
step:1 pick the pivot
step:2 partition
step:3 quick sort for the left and right half 
for partition use the 2 iterators 
avg tc is nlogn but in worst case its n^2  worst cases are:-pivot is either the smallest or largest element 
space complexity is o(1)

in linked list we cannot access any value drectly we have to traverse through the head node 

merge sort is basically divide and conquer and works on the principle of recursion 
step 1:- division into 2 equal parts repeatedly
step 2:- merge the parts to create a sorted array 
for merging we will use 2 pointers, one will point to the start of left half and the other will point to the right half

time complexity = total calls * work done in each call
tc ofmerge sort is n*logn
sc of merge sort is n

OOPS:-In cpp by default the attribute is private
to access the private members we use getters and setters 
constructor is used for initialisation.
* is used fordeferencing 
cpp also have copy constructor here the parameter is passes by reference
copy can be shallow and Deep--->IMPORTANT;
dynamic memory allocation sari heap ma hoti ha like jab new keyword etc ka istemal karta haan to shallow copyma isma dikkat ati ha (refer apna college oops tutorial in one shot 51:56)
Destructor is used to deallocate the memory (automatic destructor removes only static memory for dynamic destructor is to be made)
During inheritance once parent class and then student class constructor is called 
and reverse in the destructor
virtual functions in cpp are runtine polymorphism.
virtual functions are dynamic in nature, defined with virtual in parent class and overridden in child class 
Abstraction :- hidding unecessary details done by access modifiers other way is abstract class which is basically a base class for child classes and it cant be instantiated.
Anything created with static keyword remains for lifetime till the full program is finished.
try to explore friend class and friend function 

Linked List: -
linear data structures, dynamically resisable, its not a contiguous memory location 

stacks is lifo
refer folder lecture 66 to view implemention of stacks by various methods 