using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_7_AASIGNMENT_2 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        if (TextBox1.Text == "")
        {
            Label1.Text = "입력1 TextBox에 입력후 버튼 클릭";
        }
        else if (TextBox2.Text == "")
        {
            Label1.Text = "입력 2 TextBox에 입력 후 버튼 클릭";
        }
        else
        {
            if(CompareValidator1.IsValid)
            {
                Label1.Text="Result : valid";
            }
            else
            {
                Label1.Text="Result : not valid";
            }
        }
    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        CompareValidator1.Operator = (ValidationCompareOperator)DropDownList1.SelectedIndex;
        CompareValidator1.Validate();
    }
}