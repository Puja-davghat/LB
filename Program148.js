 function DisplayFactor(iNo)
 {
    let icnt = 0
 console.log("Factor of", iNo)

    for(let icnt = 1; icnt <= iNo/2; icnt++)
       if(iNo % icnt == 0)
         {
            console.log(icnt)
        } 
 }
 
 function main()
{

   DisplayFactor(12)
}
main()