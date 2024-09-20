#PROBLEM 9 PSEUDOCODE

start

input bday

input byear

input tday

input tmonth

input tyear

flag = 0

while flag = 0

input bmonth

input tyear

if (tmonth== 1,3,4,5,6,7,8,9,10,11,12 and bday < 1) or (tmonth== 1,3,4,5,6,7,8,9,10,11,12 and bday > 31) then

   print "wrong input try again"
   
   flag = 0
   
else

   flag = 1 
   
endif 

if (tmonth== 2 and bday < 1) or (tmonth== 2 and bday > 28) then

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

end


#PROBLEM 9 FLOWCHART

#PROBLEM 9 IPO

![image](https://github.com/user-attachments/assets/15afe491-5c21-4ca5-b6a8-6fde98fda483)
