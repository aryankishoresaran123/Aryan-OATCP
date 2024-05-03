1# Store the input in a nums vector.
2# Intialize the variables p1, p2 and ans. p1 keeps track of maximum product ending at the 
    current index while p2 keeps track of the minimum product at current index. ans stores
    the overall result
3# Calculate the maximum product ending at the current index (store) by taking the maximum 
    of three values: nums[i], p1 * nums[i], and p2 * nums[i].
4# Update p2 to store the minimum negative product ending at the current index.
5# Update p1 to store the maximum positive product ending at the current index.
6# Update ans to store the maximum of ans and p1 (the maximum product encountered so far).
7# Print the maximum product ans to the output file.