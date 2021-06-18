using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_6_pro_6_1_2 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            ListBox1.Items.Add(new ListItem("짜장면", "3000"));
            ListBox1.Items.Add(new ListItem("깐풍기", "19000"));
            ListBox1.Items.Add(new ListItem("기스면", "4000"));
            ListBox1.Items.Add(new ListItem("삼선우동", "6000"));
            ListBox1.Items.Add(new ListItem("삭스핀", "50000"));
            ListBox1.Items.Add(new ListItem("간짜장", "5000"));

        }
    }
    protected void ListBox1_SelectedIndexChanged(object sender, EventArgs e)
    {
        string text = ListBox1.SelectedItem.Text;
        string value = ListBox1.SelectedItem.Value;

        if (ListBox2.Items.Contains(new ListItem(text, value)))
        {
            Label1.Text = "중복 주문입니다.";
        }
        else
        {
            ListBox2.Items.Add(new ListItem(text, value));
            ListBox3.Items.Add(new ListItem(value, text));

            Label2.Text = "현재 요리 " + ListBox2.Items.Count.ToString() + "개를 주문하셨습니다.";

            int sum = 0;

            foreach (ListItem item in ListBox3.Items)
            {
                sum += int.Parse(item.Text);
            }

            Label3.Text = "주문한 전체 요리 가격은 " + sum + "입니다.";
        }

        ListBox1.SelectedIndex = -1;
    }
    protected void Button1_Click(object sender, EventArgs e)
    {

    }
    protected void Button1_Click1(object sender, EventArgs e)
    {
        string text, value;
        int index_sel;

        text = ListBox2.SelectedItem.Text;
        value = ListBox2.SelectedItem.Value;

        ListItem order = new ListItem(text, value);
        ListItem price = new ListItem(value, text);

        //indexOf 를 이용하여 같은 위치에 있는 ListBox3의 가격을 삭제 
        index_sel = ListBox2.Items.IndexOf(order);
        ListBox2.Items.Remove(order);
        ListBox3.Items.RemoveAt(index_sel);
        Label1.Text = "";
        Label2.Text = "현재 요리" + ListBox2.Items.Count.ToString() + "개를 주문 하였습니다.";

        // 전체 주문 가격 합계 계산 
        int sum = 0;

        foreach (ListItem item in ListBox3.Items)
        {
            sum += int.Parse(item.Text.ToString());
        }
        Label3.Text = "주문한 전체 요리 가격은 " + sum + " 입니다.";
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        ListBox2.Items.Clear();
        ListBox3.Items.Clear();
        Label1.Text = "";
        Label2.Text = "";
        Label3.Text = "";
    }
}