using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_6_ASSIGNMENT_2 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        //RadioButtonList는 단 한개 항목만 선택 가능하므로 선택된 항목의 Value만을 합하면된다. 
        int R_value = 0;
        if (RadioButtonList1.SelectedIndex > -1)
        {
            string R_text = RadioButtonList1.SelectedItem.Text;
            R_value = int.Parse(RadioButtonList1.SelectedItem.Value);
            TextBox1.Text = R_text;
        }

        //CheckBoxList는 복수개의 항목이 선택가능하므로 모든 Item을 조사하여 선택된 item 의 Value를 전부 더해야한다. 

        int C_value = 0;
        TextBox2.Text = "";

        foreach (ListItem item in CheckBoxList1.Items)
        {
            if (item.Selected)
            {
                C_value += int.Parse(item.Value);    // 선택된 item의 Value 들의 축적한 값 
                TextBox2.Text += item.Text+",";              // 선택된 item 들의 Text 출력
            }
        }

        TextBox2.Text = TextBox2.Text.TrimEnd(',', ' ');
        int Sum = R_value + C_value;     // RadioButtonList 와 CheckBoxList의 선택한 item 들의 총 합계금액
        TextBox3.Text = Sum.ToString();
    }
    protected void Button2_Click(object sender, EventArgs e)
    {
        // RadioButtonList 의 item 은 하나만 선택 가능하므로 선택된 항목이 있을 때 
        // 선택된 item을 선택해제 한다.

        if (RadioButtonList1.SelectedIndex > -1)
        {
            RadioButtonList1.SelectedItem.Selected = false;
        }

        // CheckBoxList 는 복수개 선택 가능하므로 CheckBoxList 에 포함된  
        // 모든 item 을 전부 검사하여 선택된 item을 선택해제 한다.

        if (CheckBoxList1.SelectedIndex > -1)
        {
            foreach (ListItem item in CheckBoxList1.Items)
            {
                if (item.Selected)
                    item.Selected = false;
            }
        }

        TextBox1.Text = "";
        TextBox2.Text = "";
        TextBox3.Text = "";
    }
}