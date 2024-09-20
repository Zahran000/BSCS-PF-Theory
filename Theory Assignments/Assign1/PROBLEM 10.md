#PROBLEM 10 PSEUDOCODE


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


#PROBLEM 10 FLOWCHART

#PROBLEM 10 IPO
