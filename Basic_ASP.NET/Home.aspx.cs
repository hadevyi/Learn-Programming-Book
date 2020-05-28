using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Home : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        Label1.Text = "현재접속인원 : " + Application["currentUser"] + " 명";
        Label2.Text = "세션 연결 시간 : " + Session["begintime"];
    }
}