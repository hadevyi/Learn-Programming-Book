using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_4_pro4_1_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        string sData01 = TextBox1.Text;

        if (!IsPostBack)
        {
            TextBox1.Text = "안녕하세요! 웹폼입니다.";
        }
        else
        {
            Label1.Text = "입력 내용 : " + sData01;
        }
    }
}