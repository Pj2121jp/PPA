import java.io.*;



class WriteFile
{
    public static void main(String Args[]) 
    {
        try
        {
             String Data = "Marvellous Infosystem";
             byte Arr[] = Data.getBytes();

             FileOutputStream fobj = new FileOutputStream("PPA.txt");
             fobj.write(Arr);
        }
        catch(Exception obj)
        {
             
        }
       

    }
}