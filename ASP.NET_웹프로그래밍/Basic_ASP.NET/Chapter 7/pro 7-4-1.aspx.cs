using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_7_pro_7_4_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        if (CompareValidator1.IsValid)
        {
            Label1.Text = "Result : Vaid!";
        }
        else
        {
            Label1.Text = "Result : Not Vaid!";
        }
    }
}