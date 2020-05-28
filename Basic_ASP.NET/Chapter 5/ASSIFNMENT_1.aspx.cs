using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_5_ASSIFNMENT_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        Label1.Text = "";

        if (CheckBox1.Checked == false && CheckBox2.Checked == false && CheckBox3.Checked == false && CheckBox4.Checked == false)
        {
            Label1.Text = "없습니다!";
        }
        else
        {
            if (CheckBox1.Checked == true)
            {
                Label1.Text += "웹프로그래밍,";
            }
            if (CheckBox2.Checked == true)
            {
                Label1.Text += " 신호해석,";
            }
            if (CheckBox3.Checked == true)
            {
                Label1.Text += " 디지털공학,";
            }
            if (CheckBox4.Checked == true)
            {
                Label1.Text += " 공업수학";
            }

            Label1.Text = Label1.Text.TrimEnd(',', ' ');
            Label1.Text += "입니다.";
        }
    }
}