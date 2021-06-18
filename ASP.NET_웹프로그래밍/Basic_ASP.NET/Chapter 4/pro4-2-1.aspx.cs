using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_4_pro4_2_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        string sData01 = TextBox1.Text;

        if (!IsPostBack)
        {
            TextBox1.Text = "최초의 핸들러 이벤트입니다.";
        }
        else
        {
            Label1.Text = "입력 내용 : " + sData01;
        }
    }
}