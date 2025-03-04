/*STL(Standard Template Library) 
#Basic:

1. In basic we can divide stl in four parts 1. Containers 2, Iterators 3. Algorithms 4.Functors.
2. containers is data structures that are preimplemented in STL.
3. there are three types: a. Sequential  b.  Ordered  c.Unordered.
4. Sequential: vector,stack,queue ,pair(not a container it is class)(they are like array)
5. Ordered: Maps,Multimap,Set,Multiset  (values are stord in a sorted order may be ascending or descending)
6. Unordered: unorederedMap,UnorederedSet (these are based on hasing algorithms)

# Nested Containers:
1. we know loop inside loop similary  here container inside container.
ex: vector<vector<int>> , map<int,vector<int>> , set<pair<int,string>>, vector<map<int,set<int>>>

#Iterators:
1. Similar to pointers.
2. Point to memory address of containers.
ex: begin(),end(), vector<int>:: iterator it;
3. continuity for containers (for many containers iterator are inmpelemnt in contineous way,means we can +1 or +2 in iterator like vector, but not in map)


#Algorithms:
1. there are many algorithm that are already implemented before that are many use in daily.
2. ex: upper bound and lower bound (based on the binary search, it help us to find the just greater or just smaller element in container in logn complexity)
3. sort(comparator: it help to give capability to define custom sorting behaviour)(nlogn)
4. Max-element,min-element ,accumulate(sum),reverse,count,find
5. next permutation,prev- permutation.

#Functors:
1. Classes which can act as functions

#Pair:
1. it is a class in c++ stl that store two values
2.. why we need pair? to maintain the relationship between two thinks



#Vector:
1. vector is similar to array like continuous memory blocks.
2. vector are array that have dynamic size.
ex: vector<int>v // currently size is 0;
3. push_back: to add value at end;// time -> O(1)
4. v.size()-> vector current size //time-> O(1)
5. for locally declaration array or vector we cannot get out of size 10^5 and for globally we can declare 10^7 array else we see runtime error. this limits are not on array this are on continous memeory allocation that is done by array and vector.
6. we can also declared size of vector: vector<int> v(5); it container all 5 are 0
7. now if we want to not set default value as 0 so we can fill it with size:
ex: vector<int> v(10,3);// now it contain all 10 element of of integer 3.
8. v.pop_back(): it remove the last element of the array.
9. push_back() and pop_back() function are of time complexity->O(1)
10. we can copy vector while it can't do in array ( in array we can copy only pointers means if we change in array a then it change in array b also)
ex: vector<int> v1=v ; // time-> O(n)


#Nesting in vector:
1. vector of pair  : vector<pair<int,int>>v;
2. in vector of array number of row are fixed while column are dynamic.
3. if we want to make row also dynamic we gonna used vector of vector.


#iterators:
1. they are help to access container value or help to change the container value.
2. iterators are like pointers(point to address  we can get this by * operator) similarly iterators are pointing to the element of contaier
3. the iterator pointing to the first is called it.begin()
4. the iterator pointing to the end next is called it.end();
5. iterator syntax: vector<int> ::iterator it;
6.  for iterator : it++(next iterator) and it+1(next location) is different.
7.  when iterator point to a pair then we can used syntax it->first and it->second.
8. (*it).first <=> (it->first)


# Iterators short forms:
1. range based loops: we can iterator directly on elements;
      for(int value: v){
      cout<<value<<" "
      }
2. this work in the all continares.
3. the value is copy of actual element.
4. for the acutal value use ampersend 
for(int &value: v){
   cout<<value<<" "    ;
}

# auto keywords
1. it assume dynamically datatype
2. we can use it in iterator so now we don't declare it 
3. 
*/