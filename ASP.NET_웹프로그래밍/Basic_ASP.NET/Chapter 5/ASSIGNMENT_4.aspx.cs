using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_5_ASSIGNMENT_4 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void Button1_Click(object sender, EventArgs e)
    {
        int Row_Num = int.Parse(TextBox1.Text);
        int Column_Num = int.Parse(TextBox2.Text);

        if (Row_Num > 10)
        {
            Label1.Text = "Row의 개수는 10이하입니다.!";
        }
        else if (Column_Num > 10)
        {
            Label1.Text = "Column의 개수는 10이하입니다.!";
        }
        else
        {
            for (int i = 0; i < Row_Num; i++)
            {
                TableRow r = new TableRow();

                for (int j = 0; j < Column_Num; j++)
                {
                    TableCell c = new TableCell();
                    c.Controls.Add(new LiteralControl("Cell (" + (i + 1) + "," + (j + 1) + ")"));
                    r.Cells.Add(c);
                }
                Table1.Rows.Add(r);
            }
        }
    }
    protected void TextBox1_TextChanged(object sender, EventArgs e)
    {

    }
}