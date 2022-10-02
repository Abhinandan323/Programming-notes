"""
Given a string s, find the length of the longest substring without repeating characters.
Example 1:
Input: s = "abcdabcbb"
Output: 4
Explanation: The answer is "abcd", with the length of 4.
Example 2:
Input: s = "abcdabcbbxyzt"
Output: 5
Explanation: The answer is "bxyzt", with the length of 5. 
"""

def accept_str(params):
  substring_arr=[]
  for index_one,char_one in enumerate(params):
    one_str=char_one
    for index_two,char_two in enumerate(params):
      if index_two>index_one:
        if char_two not in one_str:
          one_str+=char_two
        else:
          break
    substring_arr.append(one_str)
  max_array=max(substring_arr,key=len)
  print(params,len(str(max_array)))


accept_str("abcdabcbb")
accept_str("abcd")
accept_str("abcdabcbbxyzt")
