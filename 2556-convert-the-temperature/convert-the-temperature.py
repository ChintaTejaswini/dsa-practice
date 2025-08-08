class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        kelvin=0
        fahrenheit=0
        ans=[]
        kelvin = celsius + 273.15
        fahrenheit = celsius * 1.80 + 32.00
        ans.append(kelvin)
        ans.append(fahrenheit)
        return ans