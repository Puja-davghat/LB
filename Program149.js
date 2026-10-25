 function SumFactor(iNo)
 {
    let icnt = 0
    let isum = 0
 

    for(let icnt = 1; icnt <= (iNo/2); icnt++)
      {  
        
      if(iNo % icnt == 0)
         {
             isum = isum + icnt 

            
         } 
      }
      return isum
 }
 
 function main()
{
let iRet = 0
   iRet = SumFactor(12)

   console.log("Summation of factor : ", iRet)
}
main()