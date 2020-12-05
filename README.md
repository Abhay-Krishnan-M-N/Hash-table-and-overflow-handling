# Hash-table-and-overflow-handling
Implementation of hash table and overflow handling linear probing
       
Write a program to insert a set of values into a hash table of fixed size (10). If collision occurred solve it by using linear probing. (Value of h as 11)

Input: Integer elements

Output: Array a

Data Structure: Hash table 

Algorithm:
 
Step 1. Start
 
Step 2. Array a[10] is initialized
 
Step 3.Value of h is assigned as 11
 
Step 4. Number of elements for the array is asked and the given user input is stored in n
 
Step 5. For loop with initial value of i being 0 & increasing till value not becoming n
   
Step 5.1. 0 is assigned to a[i]
 
Step 6. For loop with initial value of i being 0 & increasing till value not becoming n
   
Step 6.1. Value of e is obtained from the user
   
Step 6.2. Value of e modulus h is assigned to pos
   
Step 6.3. Do while loop initiated
   
Step 6.4. If value of a[pos] is 0
     
Step 6.4.1. Assign e to a[pos]
   
Step 6.5. Else
     
Step 6.5.1. If value of pos is 9
       
Step 6.5.1.1. Assign -1 as the value of pos
      
Step 6.5.2. Increase value of pos by 1
   
Step 6.6. Step 6.4 to 6.5 is repeated if value of a[pos] is not equal to e
  
Step 7. For loop with initial value of i being 0 & increasing till value not becoming n
    
Step 7.1 Print value of a[i] 
 
Step 8. Stop
