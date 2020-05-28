using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class Chapter_9_Pro_9_2_4 : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {

    }
    protected void DataList1_SelectedIndexChanged(object sender, EventArgs e)
    {

    }
    protected void DataList1_ItemCreated(object sender, DataListItemEventArgs e)
    {

    }
    protected void DataList1_ItemDataBound(object sender, DataListItemEventArgs e)
    {
        if (e.Item.ItemType == ListItemType.Item || e.Item.ItemType == ListItemType.AlternatingItem)
        {
            SqlDataSource ds;
            ds = e.Item.FindControl("BullSqlDataSource") as SqlDataSource;
            ds.SelectParameters["CategoryID"].DefaultValue = DataBinder.Eval(e.Item.DataItem, "categoryid").ToString();
        }
    }
}