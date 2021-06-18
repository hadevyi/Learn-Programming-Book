using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_5_pro5_3_2 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void ImageButton1_Click(object sender, ImageClickEventArgs e)
    {
        Label1.Text = "클릭한 좌표는 : (" + e.X + ", " + e.Y + ")";

        if (e.X < 80) // 첫번째 항목을 선택했다고 봄
        {
            Label2.Text = "putting 항목을 선택했습니다.";
        }
        else if (e.X < 160)
        {
            Label2.Text = "Short 항목을 선택했습니다.";
        }
        else if (e.X < 240)
        {
            Label2.Text = "Near 항목을 선택했습니다.";
        }
        else if (e.X < 320)
        {
            Label2.Text = "Drop 항목을 선택했습니다.";
        }
        else if (e.X < 400)
        {
            Label2.Text = "Hole 항목을 선택했습니다.";
        }
    }
}