def fizz_fuzz(limit: int):
    for i in range(1, limit + 1):
        if i % 3 == 0:
            print("fizz")
        if i % 5 == 0:
            print("fuzz")
        if i % 3 == 0 and i % 5 == 0:
            print ("fizz, fuzz")


