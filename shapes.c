##ATTN: Code WIP

func createPyramid(int):
#Pseudocode below, erase and replace
    variable = userinput("How large do you want the pyramid?")
    if userinput isnot int:
        Ask again (loop)
    else
        space = userinput
        body = 1
        for each in userinput:
            print(" "*((space-1)+"*"*(body)+(space-1)))
            space -= 2
            body += 2


func createPyramidReverse(int):
#Pseudocode below
    variable = userinput("How large do you want the pyramid?")
    if userinput isnot int:
        Ask again (loop)
    else
        space = 0
        body = userinput * 2
        for each in userinput:
            print(" "*((space-1)+"*"*(body)+(space-1)))
            space += 2
            body -= 2
