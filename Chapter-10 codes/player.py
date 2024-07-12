class Player:
    jno = None
    name = None
    def setJno(self,pjno):
        if pjno>=0 and pjno<=100:
           self.jno = pjno
    def getJno(self):
        return self.jno
    def setName(self,pname):
        self.name = pname
    def getName(self):
        return self.name
p1 =  Player()
p1.setJno(10)
p1.setName("Sachin")
print("Player Jersy Number:",p1.getJno())
print("Player Name:",p1.getName(),p1.name)


p2 =  Player()
p2.setJno(7)
p2.setName("Dhoni")
print("Player Jersy Number:",p2.getJno())
print("Player Name:",p2.getName())


p1.jno=101
p1.name="Sachin T"
print("Player Jersy Number:",p1.getJno())
print("Player Name:",p1.getName(),p1.name)
