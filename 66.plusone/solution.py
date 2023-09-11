class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        carry = 0
        for i in range(len(digits)):
            digits[len(digits) - i - 1] += 1
            if digits[len(digits) - i - 1] == 10:
                carry = 1
                digits[len(digits) - i - 1] = 0
            else:
                carry = 0
                break
        
        if carry:
            digits.insert(0, carry)

        return digits