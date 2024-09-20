#PROBLEM 9 PSEUDOCODE

#start

input bday

input byear

input tday

input tyear

input tyear

flag = 0

while flag = 0

input bmonth

input tmonth

if (tmonth== 1,3,4,5,6,7,8,9,10,11,12 and tday < 1) or (tmonth== 1,3,4,5,6,7,8,9,10,11,12 and tday > 31) then

   print "wrong input try again"
   
   flag = 0
   
else

   flag = 1 
   
endif 

if (tmonth== 2 and tday < 1) or (tmonth== 2 and tday > 28) then

   print "wrong input try again"
   
   flag = 0
   
else

   flag = 1 
   
endif 

if (bmonth == 1,3,4,5,6,7,8,9,10,11,12 and bday < 1) or (bmonth == 1,3,4,5,6,7,8,9,10,11,12 and bday > 31) then

   print "wrong input try again"
   
  flag = 0
  
else

   flag = 1 
   
endif 

if (bmonth == 2 and bday < 1) or (bmonth == 2 and bday > 28) then

   print "wrong input try again"
   
  flag = 0
  
else

   flag = 1 
   
endif 

endwhile

Ayear = tyear – byear

Amonth = tmonth - bmonth 

Aday = tday – bday

Print “Your are:” , Aday , “days” , Amonth “months” , Ayears “years old.” 

#end


#PROBLEM 9 FLOWCHART

![image](https://github.com/user-attachments/assets/359dda09-540b-4b89-8a5a-83b1d06c4fb9)

![image](https://github.com/user-attachments/assets/4d565875-53c8-4f6f-b130-1346a9c75a95)

![image](https://github.com/user-attachments/assets/2d3095e4-5c4b-42f4-8048-44a31f3b3737)

#PROBLEM 9 IPO

![image](https://github.com/user-attachments/assets/15afe491-5c21-4ca5-b6a8-6fde98fda483)
