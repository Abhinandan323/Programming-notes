class search:
    def Linsearch(self,arr,x):    
        for i in range(len(arr)):
            if arr[i] == x:
                return i
        return -1
    
    def Sentsearch(self,arr,x):
        l = len(arr)
        arr.append(x)
        i = 0
        while(arr[i]!=x):
            i = i+1
        if(i!=l):
            return i
        else:
            return -1
    
    def Binsearch(self,arr,KEY):
        low = 0
        high = len(arr)-1
        m = 0
        while(low<=high):
            m =(low+high)//2	
            if(KEY<arr[m]):
                high = m-1
            elif(KEY>arr[m]):
                low = m+1
            else:
                 return m
    	 
        return -1
    
    def FibSearch(self,arr, key,n):    
        
        b = 0 
        a = 1 
        f = b + a 
      
        while (f < n): 
            b = a 
            a = f 
            f = b + a 
         
        offset = -1; 
      
        
        while (f > 1): 
              
            
            i = min(offset+b, n-1) 
        
            if (arr[i] < key): 
                f = a 
                a = b
                b = f - a
                offset = i 
      
            elif (arr[i] > key): 
                f = b 
                a = a - b 
                b = f - a
      
           
            else : 
                return i 
      
        
        if(a and arr[offset+1] == key): 
            return offset+1; 
      
         
        return -1
s=search()

n = int(input("Enter total no of students: "))
array = []
i=0
for i in range(n):
    item = int(input("Enter roll number: "))
    array.append(item)

print("The Roll Numbers of Students are ...\n")
print(array)


while(True):
    print("Main Menu")
    print(" 1. Linear Search")
    print(" 2. Sentinal Search")
    print(" 3. Binary Search")
    print(" 4. Fibonacci Search")
    
    ch = int(input(" Enter your choice: "))
    if (ch == 1):
    
        key = int(input("\n Enter the roll number to search: "))
        l = s.Linsearch(array,key)
        if(l !=-1):
            print("Yes, the entered student was present")
        else:
            print("No, the entered student was not present")
    elif(ch == 2):
       
        key = int(input("\n Enter the roll number to search: "))
        l = s.Sentsearch(array,key)
        if(l !=-1):
            print("Yes, the entered student was present")
        else:
            print("No, the entered student was not present")
    elif(ch == 3):
        array.sort()
        
        key = int(input("\n Enter the roll number to search: "))
        l = s.Binsearch(array,key)
        if(l !=-1):
            print("Yes, the entered student was present")
        else:
            print("No, the entered student was not present")
    elif(ch == 4):
        array.sort()
        
        key = int(input("\n Enter the roll number to search: "))
        l = s.FibSearch(array,key,n)
        if(l !=-1):
            print("Yes, the entered student was present")
        else:
            print("No, the entered student was not present")
    else:
        print("Exitting");
        break