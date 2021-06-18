using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_4_pro4_4_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack) //페이지에 두번째 이상 접속했을 때 (!=not)
        {
            TextBox1.Text = "처음들어오셨군요";
        }
        else
        {
            Label1.Text += "postback 되셨군요!</br>";
        }
    }
}