class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        if len(strs) <= 1 :
            return [strs]

        map = {}
        for wrds in strs: 
            hash = [0]*26
            for letter in wrds:
                hash[ord(letter) - ord('a')]+= 1 #let a =1

            map.setdefault(tuple(hash), []).append(wrds)
        return list(map.values())




# the trick is to use count of letter as a hashing function 