class Player:

    def __init__(self):
        self.__jno = 0
        self.name = ""

    def setJno(self,pjno):
        if pjno>=0 and pjno<=100:
           self.__jno = pjno
    def getJno(self):
        return self.__jno
    def setName(self,pname):
        self.name = pname
    def getName(self):
        return self.name
class Batsman(Player):
    def __init__(self):
        self.runs = 0
        self.centuries = 0

    def setRuns(self,ptotal):
        if ptotal>=0:
           self.runs = ptotal
    def getRuns(self):
        return self.runs
    def setCenturies(self,pcent):
        if pcent>=0:
           self.centuries = pcent
    def getCenturies(self):
        return self.centuries

class Bowler(Player):
    def __init__(self):
        self.wkts = 0
    def setWkts(self,ptotal):
        if ptotal>=0:
           self.wkts = ptotal
    def getWkts(self):
        return self.wkts

class AllRounder(Batsman,Bowler):
    def __init__(self):
        pass


b1 =  Batsman()
b1.setJno(10)
b1.setName("Sachin")
b1.setRuns(20000)
b1.setCenturies(200)
print("Player Jersy Number:",b1.getJno())
print("Player Name:",b1.getName())
print("Player Total runs:",b1.getRuns())
print("Player Centuries:",b1.getCenturies())


b2 =  Bowler()
b2.setJno(6)
b2.setName("Srinath")
b2.setWkts(500)
print("Player Jersy Number:",b2.getJno())
print("Player Name:",b2.getName())
print("Player Total wickets:",b2.getWkts())

a = AllRounder()
a.setJno(7)
a.setName("Dhone")
a.setRuns(18000)
a.setCenturies(150)
a.setWkts(50)

print("Player Jersy Number:",a.getJno())
print("Player Name:",a.getName())
print("Player Total runs:",a.getRuns())
print("Player Centuries:",a.getCenturies())
print("Player Total wickets:",a.getWkts())
