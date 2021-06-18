using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_5_ASSIGNMENT_2 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack) // 처음 페이지를 열었을 때만 실행되는 소스, 안하면 중첩되거나 반복될수 있음
        {
            Panel1.Visible = true;
            Panel2.Visible = false;
            Panel3.Visible = false;
        }
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        Panel1.Visible = false;
        Panel2.Visible = true;
        Panel3.Visible = false;
    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        Label1.Text = "귀하가 좋아하는 과목은 ";

        if (CheckBox1.Checked == false && CheckBox2.Checked == false && CheckBox3.Checked == false && CheckBox4.Checked == false)
        {
            Label1.Text += "없습니다.!";
        }
        else
        {
            if (CheckBox1.Checked == true)
            {
                Label1.Text += "웹프로그래밍,";
            }
            if (CheckBox2.Checked == true)
            {
                Label1.Text += " 신호해석,";
            }
            if (CheckBox3.Checked == true)
            {
                Label1.Text += " 디지털 공학,";
            }
            if (CheckBox4.Checked == true)
            {
                Label1.Text += " 공업수학";
            }

            Label1.Text = Label1.Text.TrimEnd(',', ' ');
            Label1.Text += "입니다.";
        }
    }
    protected void Button3_Click(object sender, EventArgs e)
    {
        Label2.Text="귀하가 좋아하는 과목은 ";

        if (RadioButton1.Checked == false && RadioButton2.Checked == false && RadioButton3.Checked == false && RadioButton4.Checked == false)
        {
            Label2.Text += "없습니다!";
        }
        else
        {
            if (RadioButton1.Checked == true)
            {
                Label2.Text += "웹프로그래밍";
            }
            else if (RadioButton2.Checked == true)
            {
                Label2.Text += "신호해석";
            }
            else if (RadioButton3.Checked == true)
            {
                Label2.Text += "디지털 공학";
            }
            else if (RadioButton4.Checked == true)
            {
                Label2.Text += "공업 수학";
            }

            Label2.Text += "입니다.";
        }
    }
    protected void Button4_Click(object sender, EventArgs e) //두번째 페이지 '이전페이지'버튼
    {
        Panel1.Visible = true;
        Panel2.Visible = false;
        Panel3.Visible = false;
    }
    protected void Button5_Click(object sender, EventArgs e) //두번째 페이지 '다음페이지'버튼
    {
        Panel1.Visible = false;
        Panel2.Visible = false;
        Panel3.Visible = true;
    }
    protected void Button6_Click(object sender, EventArgs e)
    {
        if (DropDownList1.SelectedIndex == 0)
        {
            Label3.Text = "귀하가 좋아하는 과목은 웹프로그래밍입니다.";
        }
        else if (DropDownList1.SelectedIndex == 1)
        {
            Label3.Text = "귀하가 좋아하는 과목은 신호해석입니다.";
        }
        else if (DropDownList1.SelectedIndex == 2)
        {
            Label3.Text = "귀하가 좋아하는 과목은 디지털 공학입니다.";
        }
        else if (DropDownList1.SelectedIndex == 3)
        {
            Label3.Text = "귀하가 좋아하는 과목은 공업 수학입니다.";
        }
    }
    protected void Button7_Click(object sender, EventArgs e)
    {
        Panel1.Visible = false;
        Panel2.Visible = true;
        Panel3.Visible = false;
    }
}