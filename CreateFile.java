import java.io.File;


class CreateFile
{
    public static void main(String Args[]) 
    {
        try
        {
             File fobj = new File ("PPA.txt");
             fobj.createNewFile();
        }
        catch(Exception obj)
        {
             
        }
       

    }
}