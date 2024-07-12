from abc import ABC, abstractmethod

class Player:
    @abstractmethod
    def play(self):
        pass
    @abstractmethod
    def stats(self):
        pass
    @abstractmethod
    def stop(self):
        pass
class Batsman(Player):
    def play(self):
        print("Batting")
    def stats(self):
        print("Total runs scored")
    def stop(self):
        print("Player out")
class Bowler(Player):
    def play(self):
        print("Bowling")
    def stats(self):
        print("Total wickets taken")
    def stop(self):
        print("Overs over!")

def Play(p):
    p.play()
    p.stats()
    p.stop()

b1=Batsman()
Play(b1)


b2=Bowler()
Play(b2)

