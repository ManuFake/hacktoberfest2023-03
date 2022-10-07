import collections

de = collections.deque([1, 2, 3,])

de.extend([4,5,6])

print ("The deque after extending deque at end is : ")
print (de)

de.extendleft([7,8,9])

print ("The deque after extending deque at beginning is : ")
print (de)

de.rotate(-3)

print ("The deque after rotating deque is : ")
print (de)

de.reverse()

print ("The deque after reversing deque is : ")
print (de)
