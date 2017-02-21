from math import ceil
def get_middle(s):
  return s[int(ceil(len(s)/2.0)-1):int(ceil(len(s)/2.0))-len(s)%2+1]
