using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_7_pro_7_5_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        string sData01 = TextBox1.Text;
        string sData02 = TextBox2.Text;

        if (RegularExpressionValidator1.IsValid = false || sData01 == "")
        {
            Label1.Text = "전화번호가 틀렸습니다.";
        }
        else
        {
            Label1.Text = "올바른 번호입니다.";
        }

        if (RegularExpressionValidator2.IsValid = false || sData02 == "")
        {
            Label2.Text = "이메일이 틀렸습니다.";
        }
        else
        {
            Label2.Text = "올바른 이메일입니다.";
        }

    }
}