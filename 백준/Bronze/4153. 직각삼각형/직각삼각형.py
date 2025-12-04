while True:
    nums = list(map(int, input().split()))
    if(sum(nums) == 0):
        break

    maximum = max(nums)
    nums.remove(maximum)

    if nums[0]**2 + nums[1]**2 == maximum**2:
        print("right")
    else:
        print("wrong")