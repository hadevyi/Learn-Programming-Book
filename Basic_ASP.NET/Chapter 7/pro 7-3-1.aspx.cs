using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_7_pro_7_3_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        if (RangeValidator1.IsValid)
        {
            Label1.Text = "Result : Valid";
        }
        else
        {
            Label1.Text = "Result : Not Valid";
        }

        if (RangeValidator2.IsValid)
        {
            Label2.Text = "Result : Valid";
        }
        else
        {
            Label2.Text = "Result : Not Valid";
        }

        if (RangeValidator3.IsValid)
        {
            Label3.Text = "Result : Valid";
        }
        else
        {
            Label3.Text = "Result : Not Valid";
        }

        if (RangeValidator1.IsValid && RangeValidator2.IsValid && RangeValidator3.IsValid)
        {
            Label4.Text = "Result : Page Valid!";
        }
        else
        {
            Label4.Text = "Result : Page Not Valid!";
        }
    }
}