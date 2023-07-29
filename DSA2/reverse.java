class reverse{

    static String reverseSt(String s)
    {
        String nstr="";
        char ch;
        for (int i=0; i<s.length(); i++)
        {
            ch= s.charAt(i); //extracts each character
            nstr= ch+nstr; //adds each character in front of the existing string
        }
        return nstr;
    }
    public static void main(String args[])
    {
        String s = "Wipro Technologies Bangalore";
        String temp="";
        String ans="";
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==32){
                ans+=reverseSt(temp)+" ";
                temp="";
                continue;
            }
            temp+=s.charAt(i);
        }
        ans+=reverseSt(temp);
        System.out.println(ans);
    }
}