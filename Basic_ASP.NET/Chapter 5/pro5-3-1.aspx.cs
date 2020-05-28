using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_5_pro5_3_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        Label1.Text = "일반 버튼을 클릭했습니다.";
        Label1.ForeColor = System.Drawing.Color.FromArgb(0,155,122);
    }
    protected void LinkButton1_Click(object sender, EventArgs e)
    {
        Label1.Text = "링크 버튼을 클릭했습니다.";
        Label1.ForeColor = System.Drawing.Color.FromArgb(23, 5, 187);
    }
    protected void ImageButton1_Click(object sender, ImageClickEventArgs e)
    {
        Label1.Text = "이미지 버튼을 클릭했습니다.";
        Label1.ForeColor = System.Drawing.Color.FromArgb(100, 100, 100);
    }
}