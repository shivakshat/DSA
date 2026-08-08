# n+1 is the length of array that consists of elements from 1 to n. Find which element is replicating.
def approach1():
    l=[5,1,3,4,2,5,6,7,8,9]
    n=9
    val=0
    for i in range(len(l)):
        found=0
        for j in range(i+1,len(l)):
            try:
                if l[i]==l[j]:
                    found=1
                    print(l[i],l[j])
            except:
                print(f"{(i,j)} pe error aa rahi hai")
        if found==1:
            val=l[i]
            break
    print(val)
def approach2():
    check_list=[0,0,0,0,0,0]
    l=[5,1,3,4,2,3]
    for i in range(0,len(l)):
        ele=l[i]
        if check_list[ele]==True:
            print(ele ,"is duplicate.")
            break
        else:
            check_list[ele]=True

def approach3():
    n=5
    l=[5,1,3,4,2,3]
    s=sum(l)
    n_sum=(n*(1+n))//2
    imp=s-n_sum
    print(imp)
approach3()