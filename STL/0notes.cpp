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

# Maps:
1. there are three types orderedMap,unorederedMap and multimaps.
2. it is a data structure that store key value pair
3.in noraml map value stored in sorted order of key and in unordered they are not order in sorted.
4. sorted map are implement using redBlack tree(it is a self balancing tree).
5. map are not stored in continous memmeory space so we can't it+1 in iterators.but it++ can run.
6. if keys are string then it store in lexographical increasing order(pair in dictonary)
7.  insertion take O(logn)  n is the current size of map if we only wirte m[5] then it also take O(logn) size with value is string then it assign empty string if value ins int then it assign 0.
8. keys are unique in map we can't put same key again and if we try then it replace it same key with the new value.
9. the insert and access time complexity is logn.
10. m.find() it return an iterator so we can declare iterator and store it in or we can use auto 
   auto it =m.find(3);
11. if there is no value then it reutrn m.end()

12. m.erase() it can take two inputs , it can take direct key and other is we can provide value of iterator. time: O(logn)

13. m.clear() it will clear the map.
14. the insertion time complexity also depends on the key beause if there is key of string then it doesn't take O(logn) always
basically what happen in red black tree whenver we try to insert new value it have comparsion with existing value(these are log n comparison) and on these comparsion key are placed in sorted order.
15. due to this if there is m["abcd"]="abcd" then the time complexity became s.size() *log(n)


# unordered map:(inbuild implementation,time Complexity,valid key datatype)
1. here order is not maintain 
2. they used inbuild hashtables,so basically it create every key a hash
3. because of hash table insertion and access time complexity is O(1) this is average time complectiy(becuase some time due to collision it can be more time complexity)
4. m.find(),m.erase(), all are O(1)
5. if order doesn't matter then use the unorderd map because it decrease the time.
6.  in case of we can put any complext datatye in key  but not in unrdered case.
7. ex: unordered_map<pair<int,int>,string> m;// it will not compile // there all work is done through hash value so pair doesn't have inbuild hash value.
         map<pari<int,int>,string> m; // it will compile
8. if we want to put complex key then we have to define our hash function 
# Multimap:
1. same as map implement using red black tree
syntax: multimap<int,int> m;
2. so basically in map there are unique key while in multimap there is no unique key if a key enter two time it store two time value.


#sets:
1. it is basically key of sets
2. set<string> s; it store in sorted order and unique values.
3. the time complexity in map is same here in set // O(logn)
4. for insert s.insert() ,for find s.find()


# unordered sets:
1. same as unordered map maximumtime complexity O(1)
2. Multiset allowed to insert multiple same values.now all operatinn became O(logn)
3. Multiset (important see again)are used many time same value in multiset allvalues are in sorted form.
4. in stl there is a priority queue that store in sorted order so we can used mutliset instead of priority queue.
5. in multiset find value return the first iterator.

*/