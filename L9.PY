def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False
        x = str(x)

        if int(x) % 2 == 0:
            teto = int(len(x)/2)
        else:
            teto = int(len(x)/2 + 1)
        
        for i in range(teto):
            if x[i] != x[len(x)-i-1]:
                return False
        return True

def isPalindrome(self, x: int) -> bool:
        return str(x) == str(x)[::-1]