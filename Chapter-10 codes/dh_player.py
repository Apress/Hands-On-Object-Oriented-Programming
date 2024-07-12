class Player:
    __jno = None
    __name = None
    def setJno(self,pjno):
        if pjno>=0 and pjno<=100:
           self.__jno = pjno
    def getJno(self):
        return self.__jno
    def setName(self,pname):
        self.__name = pname
    def getName(self):
        return self.__name
p1 =  Player()
p1.setJno(10)
p1.setName("Sachin")
print("Player Jersy Number:",p1.getJno())
print("Player Name:",p1.getName())


p2 =  Player()
p2.setJno(7)
p2.setName("Dhoni")
print("Player Jersy Number:",p2.getJno())
print("Player Name:",p2.getName())


p1.__jno=101
p1.__name="Sachin T"
print(p1.__jno)
print(p1.__name)

print("Player Jersy Number:",p1.getJno())
print("Player Name:",p1.getName())
