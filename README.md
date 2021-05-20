# List of Derangement of {1,2,3,4,5,6,7,8} using C++

In combinatorial mathematics, a derangement is a permutation of the elements of a set, such that no element appears in its original position. In other words, a derangement is a permutation that has no fixed points.
Source : [https://en.wikipedia.org/wiki/Derangement](https://en.wikipedia.org/wiki/Derangement)

##Algorithm

* Program runs through recursion
* For N numbers in the array, first element is fixed as recursion to derange (N-1) elements
* Current position is compared with the lenth of the array.
* When equal, we print the array itself
* Else use swapping to derange
* Recursion is called for current position + 1
* Elements are then brought to oriinal position
