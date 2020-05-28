using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_6_pro_6_2_1 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            DropDownList1.Items.Add(new ListItem("디지털신호처리", "3"));
            DropDownList1.Items.Add(new ListItem("교양세미나", "1"));
            DropDownList1.Items.Add(new ListItem("이동통신공학", "2"));
            DropDownList1.Items.Add(new ListItem("프로그래밍실습", "4"));

            DropDownList1.SelectedIndex = 0;
        }
    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        string text = DropDownList1.SelectedItem.Text;
        string value = DropDownList1.SelectedItem.Value;

        ListBox1.Items.Add(new ListItem(text, value));
        ListBox2.Items.Add(new ListItem(value, text));

        int sum = 0;

        foreach (ListItem item in ListBox2.Items)
        {
            sum += int.Parse(item.Text.ToString());
        }

        Label2.Text = "계 : " + sum.ToString() + "학점";
    }
}