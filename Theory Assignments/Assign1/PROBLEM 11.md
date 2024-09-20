#PROBLEM 11 PSEUDOCODE

input valOne,valTwo,n,flag

if valOne > 0 and valTwo > 0:
    if valOne < valTwo:
        valOne = valTwo

    divisor = 2
    repeatCheck = True
    while repeatCheck:
        remainderOne = valOne % divisor
        remainderTwo = valTwo % divisor

        if remainderOne == 0 and remainderTwo == 0:
            status = False
        
        divisor = divisor + 1

        repeatCheck = (divisor <= valOne and status)

else:
    divisor = 2
    repeatCheck = True
    while repeatCheck:
        remainderOne = valOne % divisor
        remainderTwo = valTwo % divisor

        if remainderOne > 0 and remainderTwo > 0:
            status = False
        
        divisor = divisor + 1

        repeatCheck = (divisor <= valTwo or status == False)

else:
    print("Please enter positive numbers")

    if flag = false Then
      OUTPUT "Not a co-prime"
      else
        Output "co-prime"
    endif
    end


#PROBLEM 11 FLOWCHART

![image](https://github.com/user-attachments/assets/cad4782a-e982-4f17-a740-880b7c78af99)

#PROBLEM 11 IPO

![image](https://github.com/user-attachments/assets/dde12959-7f25-45b8-b28c-a7cf1a418daa)

