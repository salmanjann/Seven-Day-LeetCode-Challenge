class Solution {
public:
    string intToRoman(int num) {
        string romanNumber = "";
        int quotient;
        if(num > 999){
            quotient = num / 1000;
            for(int i = 0 ; i < quotient ; i++)
                romanNumber += "M";
            num = num % 1000;
        }

        if(num > 99){
            quotient = num / 100;
            if(quotient <= 3)
                for (int i = 0 ; i < quotient ; i++)
                    romanNumber += "C";
            else if(quotient == 4)
                romanNumber += "CD";
            else if(quotient == 9)
                romanNumber += "CM";
            else{
                romanNumber += "D";
                int remaining = quotient - 5;
                for (int i = 0; i < remaining ; i++)
                    romanNumber += "C";
            }
            num = num % 100;
        }

        if(num > 9){
            quotient = num / 10;
            if(quotient <= 3)
                for (int i = 0 ; i < quotient ; i++)
                    romanNumber += "X";
            else if(quotient == 4)
                romanNumber += "XL";
            else if(quotient == 9)
                romanNumber += "XC";
            else{
                romanNumber += "L";
                int remaining = quotient - 5;
                for (int i = 0; i < remaining ; i++)
                    romanNumber += "X";
            }
            num = num % 10;
        }

        if(num > 0){
            if(num <= 3)
                for (int i = 0 ; i < num ; i++)
                    romanNumber += "I";
            else if(num == 4)
                romanNumber += "IV";
            else if(num == 9)
                romanNumber += "IX";
            else{
                romanNumber += "V";
                int remaining = num - 5;
                for (int i = 0; i < remaining ; i++)
                    romanNumber += "I";
            }
            num = num % 10;
        }

        return romanNumber;
    }
};