using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_9_AASIGNMNENT_3 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        if (!IsPostBack)
        {
            FormView1.Visible = false;
        }
        else
        {
            FormView1.Visible = true;
        }
    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        ListItem item = new ListItem(" (Select) ", " (Select) ");

        if (DropDownList1.Items.Contains(item))
        {
            DropDownList1.Items.RemoveAt(0);
            FormView1.Visible = true;
        }
    }
    protected void DropDownList1_DataBound(object sender, EventArgs e)
    {
        DropDownList1.Items.Insert(0, " (Select) ");
    }
    protected void FormView1_ItemInserting(object sender, FormViewInsertEventArgs e)
    {
        DropDownList1.DataBind();
    }
    protected void FormView1_ItemUpdated(object sender, FormViewUpdatedEventArgs e)
    {
        if (!IsPostBack)
        {
            FormView1.Visible = false;
        }
    }
}