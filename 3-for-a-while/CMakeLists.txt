# loop: for
add_executable(stars stars.c)       # double loops
add_executable(prime prime.c)       # break
add_executable(primes primes.c)     # double loops
target_link_libraries(primes m)
add_executable(selection-sort selection-sort.c) # while for reading inputs; double loops

# loop: while and do-while
add_executable(palindrome palindrome.c)   # while; comma expression in for; break
add_executable(binary-search binary-search.c) # while; break
add_executable(digits-while digits-while.c) # while
add_executable(digits-do-while digits-do-while.c) # do-while

add_executable(counting-if counting-if.c) # while for reading inputs; if
add_executable(counting-switch counting-switch.c) # switch/case