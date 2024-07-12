pragma solidity >=0.8.2 <0.9.0;
contract MySecretData
{
    uint internal data1;
    uint public data2;
    uint private data3;
    function setData1(uint d) public 
    {
        data1 = d;
    }
    function getData1() public view returns (uint)
    {
        return data1;
    }
    function setData2(uint d) public 
    {
        data2 = d;
    }
    function getData2() public view returns (uint)
    {
        return data2;
    }
     function setData3(uint d) public 
    {
        data3 = d;
    }
    function getData3() public view returns (uint)
    {
        return data1;
    }
}
contract Secrets
{
    function mySecret() public view returns (string memory)
    {
        return "abcdef";
    }
    function mySecret(uint i) public view returns (uint)
    {
        return 100+20;
    }
    function mySecret(int i) public view returns (int)
    {
        return -100+i;
    }
}
contract Secrets2
{
    function mySecret2() public view returns (string memory)
    {
        return "abcdefghi";
    }
    function mySecret2(uint i) public view returns (uint)
    {
        return 100+200;
    }
    function mySecret2(int i) public view returns (int)
    {
        return -300+i;
    }
}
contract secrets3 is Secrets, Secrets2
{

}

contract MySecretProfile is MySecretData
{
    constructor() public  
    {
        data1 = 300;
        data2 = 200;
    }
    function setSecretData(uint d) public 
    {
        data1 = d;
        data2 = d;
        uint d1 = getData1()+getData2()+getData3();
        //data3 = d;
        
    }
}

contract MyProfile
{
    string profile;
    MySecretData ms = new MySecretData();
    function setProfile(string memory i) public 
    {
    
     //   ms.setData1(200);
        profile = i;

    }
    function getProfile() public view returns (string memory)
    {
        return profile;
    }
    function getProfileData() public view returns (uint)
    {
        //return ms.getData1();
        return 1;
    }

}

abstract contract MySecrets  
{
	function mySecretFunctions(uint n1) public virtual returns (uint);
    function mySecret() public view returns (string memory)
    {
        return "abc";
    }
}
contract MySecretImpl is MySecrets {
	function mySecretFunctions(uint n1) override public view returns (uint) 
    {
        uint n;
	    n = n1*200;
	    return n;
	}
}
contract MySecretImpl2 is MySecrets {
	function mySecretFunctions(uint n1) override public view returns (uint) 
    {
        uint n;
	    n = n1*400;
	    return n;
	}
}

interface MySecretInterfaces 
{
    function mySecFunction1(uint) external  returns (uint);
    function mySecFunction2(uint) external  returns (uint);
}
contract MySecretInterImpl is MySecretInterfaces 
{
    function mySecFunction1(uint n1) public view returns (uint) 
    {
	    n1 = n1*100;
	    return n1;
    }
    function mySecFunction2(uint n1) public view returns (uint) 
    {
	    n1 = n1*200;
	    return n1;
    }
}
contract MySecretInterImpl2 is MySecretInterfaces 
{
    function mySecFunction1(uint n1) public view returns (uint) 
    {
	    n1 = n1*300;
	    return n1;
    }
    function mySecFunction2(uint n1) public view returns (uint) 
    {
	    n1 = n1*400;
	    return n1;
    }
}



