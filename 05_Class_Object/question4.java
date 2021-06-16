package E_Class_Object;

import javax.lang.model.util.ElementScanner14;

public class question4 {
    private int day;
    private int month;
    private int year;

    public void setDay(int day) {
        this.day = day;
    }

    public void setMonth(int month) {
        this.month = month;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getDay() {
        return this.day;
    }

    public int getMonth() {
        return this.month;
    }

    public int getYear() {
        return this.year;
    }

    public question4() {
    }

    public question4(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public boolean isValid() {
        if (this.month >= 1 && this.month <= 12) {
            if (((this.month % 2 == 0) && this.month <= 6) || (this.month % 2 == 1 && this.month > 7)) {
                if (this.month == 2) {
                    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
                        if (this.day >= 1 && this.day <= 29)
                            return true;
                        else
                            return false;
                    } else {
                        if (this.day >= 1 && this.day <= 28)
                            return true;
                        else
                            return false;
                    }
                } else {
                    if (this.day >= 1 && this.day <= 30)
                        return true;
                    else
                        return false;
                }
            } else {
                if (this.day >= 1 && this.day <= 31)
                    return true;
                else
                    return false;
            }
        } else
            return false;
    }
}
